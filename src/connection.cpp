#include "connection.h"

Connection::Connection()
{

}

void Connection::sendPacket(QByteArray& data, QHostAddress& destination, uint16_t port)
{
  mutex_.lock();
  port_ = port;
  destination_ = destination;

  if(!isRunning())
    start();
  else
    cond_.wakeOne();

  mutex_.unlock();
}

void Connection::run()
{
  mutex_.lock();

  QHostAddress address = destination_;
  uint16_t port = port_;

  mutex_.unlock();

  //socket_.writeData(data, destination_, port_);
}