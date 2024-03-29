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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIOkaserverApiHandler.h"
#include "OAIOkaserverApiRequest.h"

namespace OpenAPI {

OAIOkaserverApiHandler::OAIOkaserverApiHandler(){

}

OAIOkaserverApiHandler::~OAIOkaserverApiHandler(){

}

void OAIOkaserverApiHandler::getokainfo() {
    auto reqObj = qobject_cast<OAIOkaserverApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        OAIOkaserver res;
        reqObj->getokainfoResponse(res);
    }
}


}
