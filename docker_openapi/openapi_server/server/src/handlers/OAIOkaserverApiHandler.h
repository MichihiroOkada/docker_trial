/**
 * openapi server
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIOkaserverApiHandler_H
#define OAI_OAIOkaserverApiHandler_H

#include <QObject>

#include "OAIOkaserver.h"
#include <QString>

namespace OpenAPI {

class OAIOkaserverApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIOkaserverApiHandler();
    virtual ~OAIOkaserverApiHandler();


public slots:
    virtual void getokainfo();
    

};

}

#endif // OAI_OAIOkaserverApiHandler_H
