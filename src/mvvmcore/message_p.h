#ifndef QTMVVM_MESSAGE_P_H
#define QTMVVM_MESSAGE_P_H

#include "qtmvvmcore_global.h"
#include "message.h"

namespace QtMvvm {

class MessageConfigPrivate : public QSharedData
{
public:
	MessageConfigPrivate(const QByteArray &type, const QByteArray &subType);
	MessageConfigPrivate(const MessageConfigPrivate &other);

	QByteArray type;
	QByteArray subType;
	QString title;
	QString text;
	MessageConfig::StandardButtons buttons;
	QHash<MessageConfig::StandardButton, QString> buttonTexts;
	QVariant defaultValue;
	QVariantMap editProperties;
};

class MessageResultPrivate
{
public:
	MessageResultPrivate();

	QPointer<QObject> closeObject;
	QMetaMethod closeMethod;
	bool closeRequested;
	QVariant result;
	bool autoDelete;
};

}

#endif // QTMVVM_MESSAGE_P_H