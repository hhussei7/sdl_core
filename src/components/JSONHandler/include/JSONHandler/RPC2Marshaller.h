#ifndef RPC2MARSHALLER_CLASS
#define RPC2MARSHALLER_CLASS

#include <json/value.h>
#include "JSONHandler/RPC2Command.h"
#include "JSONHandler/OnButtonEventMarshaller.h"
#include "JSONHandler/SpeakMarshaller.h"
#include "JSONHandler/SpeakResponseMarshaller.h"
#include "JSONHandler/AlertMarshaller.h"
#include "JSONHandler/AlertResponseMarshaller.h"
#include "JSONHandler/ShowMarshaller.h"
#include "JSONHandler/ShowResponseMarshaller.h"
#include "JSONHandler/GetCapabilitiesMarshaller.h"
#include "JSONHandler/GetCapabilitiesResponseMarshaller.h"
#include "JSONHandler/OnButtonPressMarshaller.h"
#include "JSONHandler/SetGlobalPropertiesMarshaller.h"
#include "JSONHandler/SetGlobalPropertiesResponseMarshaller.h"
#include "JSONHandler/ResetGlobalPropertiesMarshaller.h"
#include "JSONHandler/ResetGlobalPropertiesResponseMarshaller.h"
#include "JSONHandler/ResetGlobalPropertiesResponse.h"
#include "JSONHandler/OnAppRegisteredMarshaller.h"
#include "JSONHandler/OnAppUnregisteredMarshaller.h"
#include "JSONHandler/ActivateAppMarshaller.h"
#include "JSONHandler/ActivateAppResponseMarshaller.h"

namespace RPC2Communication
{
    class RPC2Marshaller
    {
    public:
        enum Methods
        {
        METHOD_INVALID=-1,
        METHOD_ONBUTTONEVENT=0,
        METHOD_SPEAK_REQUEST=1,
        METHOD_SPEAK_RESPONSE=2,
        METHOD_ALERT_REQUEST=3,
        METHOD_ALERT_RESPONSE=4,
        METHOD_SHOW_REQUEST=5,
        METHOD_SHOW_RESPONSE=6,
        METHOD_GET_CAPABILITIES_REQUEST=7,
        METHOD_GET_CAPABILITIES_RESPONSE=8,
        METHOD_ONBUTTONPRESS=9,
        METHOD_SET_GLOBAL_PROPERTIES_REQUEST=10,
        METHOD_SET_GLOBAL_PROPERTIES_RESPONSE=11,
        METHOD_RESET_GLOBAL_PROPERTIES_REQUEST=12,
        METHOD_RESET_GLOBAL_PROPERTIES_RESPONSE=13,
        METHOD_ONAPPREGISTERED=14,
        METHOD_ONAPPUNREDISTERED=15,
        METHOD_ACTIVATEAPP_REQUEST=16,
        METHOD_ACTIVATEAPP_RESPONSE=17
        };

        RPC2Marshaller();
        ~RPC2Marshaller();

        static RPC2Command* fromJSON(const Json::Value&, const std::string & methodName = "");
        static Json::Value toJSON(const RPC2Command* msg);

        static RPC2Command* fromString(const std::string&);
        static std::string toString(const RPC2Command* msg);

        static std::string toString(const OnButtonEvent& res)  
        {
            return mOnButtonEventMarshaller.toString(res);
        }

        static bool fromString(const std::string& str, OnButtonEvent& res) 
        {
            return mOnButtonEventMarshaller.fromString(str, res);
        }

        static std::string toString(const Speak& res) 
        {
            return mSpeakMarshaller.toString(res);
        }

        static bool fromString(const std::string& str, Speak& res) 
        {
            return mSpeakMarshaller.fromString(str, res);
        }

        static std::string toString(const SpeakResponse & res)
        {
            return mSpeakResponseMarshaller.toString(res);
        }

        static bool fromString(const std::string&str, SpeakResponse& res)
        {
            return mSpeakResponseMarshaller.fromString(str, res);
        }

        static std::string toString(const Alert & res)
        {
            return mAlertMarshaller.toString(res);
        }

        static bool fromString(const std::string&str, Alert& res)
        {
            return mAlertMarshaller.fromString(str, res);
        }

        static bool fromString(const std::string&str, AlertResponse& res)
        {
            return mAlertResponseMarshaller.fromString(str, res);
        }

        static std::string toString(const AlertResponse& res)
        {
            return mAlertResponseMarshaller.toString(res);
        }

        static std::string toString(const Show & res)
        {
            return mShowMarshaller.toString(res);
        }

        static bool fromString(const std::string& str, Show &res)
        {
            return mShowMarshaller.fromString(str, res);
        }

        static bool fromString(const std::string& str, ShowResponse& res)
        {
            return mShowResponseMarshaller.fromString(str, res);
        }

        static std::string toString(const ShowResponse& res)
        {
            return mShowResponseMarshaller.toString(res);
        }

        static bool fromString(const std::string& str, GetCapabilities&res)
        {
            return mGetCapabilitiesMarshaller.fromString(str, res);
        }

        static std::string toString(const GetCapabilities& res)
        {
            return mGetCapabilitiesMarshaller.toString(res);
        }

        static bool fromString(const std::string& str, GetCapabilitiesResponse& res)
        {
            return mGetCapabilitiesResponseMarshaller.fromString(str, res);
        }

        static std::string toString(const GetCapabilitiesResponse& res)
        {
            return mGetCapabilitiesResponseMarshaller.toString(res);
        }

        static bool fromString(const std::string &str, OnButtonPress&res)
        {
            return mOnButtonPressMarshaller.fromString(str, res);
        }

        static std::string toString(const OnButtonPress& res)
        {
            return mOnButtonPressMarshaller.toString(res);
        }

        static bool fromString(const std::string &str, SetGlobalProperties&res)
        {
            return mSetGlobalPropertiesMarshaller.fromString(str, res);
        }

        static std::string toString(const SetGlobalProperties& res)
        {
            return mSetGlobalPropertiesMarshaller.toString(res);
        }

        static bool fromString(const std::string &str, SetGlobalPropertiesResponse& res)
        {
            return mSetGlobalPropertiesResponseMarshaller.fromString(str, res);
        }

        static std::string toString(const SetGlobalPropertiesResponse& res)
        {
            return mSetGlobalPropertiesResponseMarshaller.toString(res);
        }

        static bool fromString( const std::string& str, ResetGlobalProperties& res )
        {
            return mResetGlobalPropertiesMarshaller.fromString(str, res);
        }

        static std::string toString(const ResetGlobalProperties& res)
        {
            return mResetGlobalPropertiesMarshaller.toString(res);
        }

        static bool fromString( const std::string & str, ResetGlobalPropertiesResponse& res )
        {
            return mResetGlobalPropertiesResponseMarshaller.fromString(str, res);
        }

        static std::string toString(const ResetGlobalPropertiesResponse& res)
        {
            return mResetGlobalPropertiesResponseMarshaller.toString(res);
        }

        static bool fromString( const std::string & str, OnAppRegistered& res )
        {
            return mOnAppRegisteredMarshaller.fromString(str, res);
        }

        static std::string toString(const OnAppRegistered& res)
        {
            return mOnAppRegisteredMarshaller.toString(res);
        }

        static bool fromString( const std::string& str, OnAppUnregistered& res )
        {
            return mOnAppUnregisteredMarshaller.fromString(str, res);
        }

        static std::string toString(const OnAppUnregistered& res)
        {
            return mOnAppUnregisteredMarshaller.toString(res);
        }

        static bool fromString( const std::string & str, ActivateApp& res )
        {
            return mActivateAppMarshaller.fromString(str, res);
        }

        static std::string toString(const ActivateApp& res)
        {
            return mActivateAppMarshaller.toString(res);
        } 

        static bool fromString(const std::string& str, ActivateAppResponse& res)
        {
            return mActivateAppResponseMarshaller.fromString(str, res);
        }

        static std::string toString(const ActivateAppResponse& res)
        {
            return mActivateAppResponseMarshaller.toString(res);
        }

    private:
        struct localHash
        {
            const char *name;
            unsigned int idx;
            void* marshaller;
        };

        static const char* getName(Methods e)
        {
            return (e>=0 && e<4) ? mHashTable[e].name : NULL;
        }

        static const Methods getIndex(const std::string & s);
        static const Methods getResponseIndex(const std::string & s);

        static const localHash mHashTable[3];

        static OnButtonEventMarshaller mOnButtonEventMarshaller;

        static SpeakMarshaller mSpeakMarshaller;

        static SpeakResponseMarshaller mSpeakResponseMarshaller;

        static AlertMarshaller mAlertMarshaller;
        static AlertResponseMarshaller mAlertResponseMarshaller;
        static ShowMarshaller mShowMarshaller;
        static ShowResponseMarshaller mShowResponseMarshaller;
        static GetCapabilitiesMarshaller mGetCapabilitiesMarshaller;
        static GetCapabilitiesResponseMarshaller mGetCapabilitiesResponseMarshaller;
        static OnButtonPressMarshaller mOnButtonPressMarshaller;
        static SetGlobalPropertiesMarshaller mSetGlobalPropertiesMarshaller;
        static SetGlobalPropertiesResponseMarshaller mSetGlobalPropertiesResponseMarshaller;
        static ResetGlobalPropertiesMarshaller mResetGlobalPropertiesMarshaller;
        static ResetGlobalPropertiesResponseMarshaller mResetGlobalPropertiesResponseMarshaller;
        static OnAppRegisteredMarshaller mOnAppRegisteredMarshaller;
        static OnAppUnregisteredMarshaller mOnAppUnregisteredMarshaller;
        static ActivateAppMarshaller mActivateAppMarshaller;
        static ActivateAppResponseMarshaller mActivateAppResponseMarshaller;
    };

}

#endif