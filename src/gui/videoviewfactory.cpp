#include "videoviewfactory.h"

#include "videowidget.h"

#include <QDebug>

VideoviewFactory::VideoviewFactory():
  widgets_(),
  videos_()
{}

VideoWidget* VideoviewFactory::createWidget(uint32_t sessionID, QWidget* parent)
{
  VideoWidget* vw = new VideoWidget(parent, sessionID);
  widgets_[sessionID] = vw;
  videos_[sessionID] = vw;
  return vw;
}

void VideoviewFactory::setSelfview(VideoWidget* widget)
{
  widgets_[0] = widget;
  videos_[0] = widget;
}

QWidget* VideoviewFactory::getView(uint32_t sessionID)
{
  if(widgets_.find(sessionID) == widgets_.end())
  {
    qWarning() << "ERROR: Tried to get a video widget that doesn't exists:" << sessionID;
    return NULL;
  }
  return widgets_[sessionID];
}

VideoInterface* VideoviewFactory::getVideo(uint32_t sessionID)
{
  if(videos_.find(sessionID) == videos_.end())
  {
    qWarning() << "ERROR: Tried to get a video widget that doesn't exists:" << sessionID;
    return NULL;
  }
  return videos_[sessionID];
}
