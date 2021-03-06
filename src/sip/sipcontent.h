#pragma once

#include <QString>

#include <memory>

struct SDPMessageInfo;

QString composeSDPContent(const SDPMessageInfo& sdp);
bool parseSDPContent(const QString& content, SDPMessageInfo& sdp);

