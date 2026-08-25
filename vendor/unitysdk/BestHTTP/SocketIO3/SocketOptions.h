#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::SocketIO3::Transports { class TransportTypes; }
namespace BestHTTP::SocketIO3 { class HTTPRequestCallbackDelegate; }
namespace PlatformSupport::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTIONDELAY_OFFSET UNITYSDK_OFFSET(0x63A7A0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_AUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x63A7B0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x63A7C0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_ADDITIONALQUERYPARAMS_OFFSET UNITYSDK_OFFSET(0x63A7D0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTIONATTEMPTS_OFFSET UNITYSDK_OFFSET(0x63A7E0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTIONDELAYMAX_OFFSET UNITYSDK_OFFSET(0x63A7F0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_BUILDQUERYPARAMS_OFFSET UNITYSDK_OFFSET(0x63A800)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_CONNECTWITH_OFFSET UNITYSDK_OFFSET(0x63AC30)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_AUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x63AC40)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x63AC50)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x63ADD0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x63ADE0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RANDOMIZATIONFACTOR_OFFSET UNITYSDK_OFFSET(0x63AD50)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTION_OFFSET UNITYSDK_OFFSET(0x63ADF0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTIONATTEMPTS_OFFSET UNITYSDK_OFFSET(0x63AE00)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_ADDITIONALQUERYPARAMS_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x63AE10)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTIONDELAY_OFFSET UNITYSDK_OFFSET(0x63AE30)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_HTTPREQUESTCUSTOMIZATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x63AE40)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTIONDELAYMAX_OFFSET UNITYSDK_OFFSET(0x63AE50)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTION_OFFSET UNITYSDK_OFFSET(0x63AE60)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_ADDITIONALQUERYPARAMS_OFFSET UNITYSDK_OFFSET(0x63AE70)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_HTTPREQUESTCUSTOMIZATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x63AF90)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET UNITYSDK_OFFSET(0x63AFA0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_CONNECTWITH_OFFSET UNITYSDK_OFFSET(0x63AFB0)
#define BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RANDOMIZATIONFACTOR_OFFSET UNITYSDK_OFFSET(0x63AFC0)

namespace BestHTTP::SocketIO3
{
	inline static constexpr unsigned int SocketOptions_TypeDefinitionIndex = 21402;

	class SocketOptions : public Il2CppObject
	{
	public:
		::BestHTTP::SocketIO3::Transports::TransportTypes* _ConnectWith_k__BackingField; // 0x10
		::System::Boolean _Reconnection_k__BackingField; // 0x14
		::System::Int32 _ReconnectionAttempts_k__BackingField; // 0x18
		::System::TimeSpan* _ReconnectionDelay_k__BackingField; // 0x20
		::System::TimeSpan* _ReconnectionDelayMax_k__BackingField; // 0x28
		::System::Single randomizationFactor; // 0x30
		::System::TimeSpan* _Timeout_k__BackingField; // 0x38
		::System::Boolean _AutoConnect_k__BackingField; // 0x40
		Il2CppObject* additionalQueryParams; // 0x48
		::System::Boolean _QueryParamsOnlyForHandshake_k__BackingField; // 0x50
		::BestHTTP::SocketIO3::HTTPRequestCallbackDelegate* _HTTPRequestCustomizationCallback_k__BackingField; // 0x58
		Il2CppObject* Auth; // 0x60
		::System::String* BuiltQueryParams; // 0x68

		::System::Void set_ReconnectionDelay(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTIONDELAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AutoConnect()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_AUTOCONNECT_OFFSET))(nullptr);
		}

		::System::Void set_Timeout(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AdditionalQueryParams()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_ADDITIONALQUERYPARAMS_OFFSET))(nullptr);
		}

		::System::Void set_ReconnectionAttempts(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTIONATTEMPTS_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_ReconnectionDelayMax()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTIONDELAYMAX_OFFSET))(nullptr);
		}

		::System::String* BuildQueryParams()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_BUILDQUERYPARAMS_OFFSET))(nullptr);
		}

		::System::Void set_ConnectWith(::BestHTTP::SocketIO3::Transports::TransportTypes* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::Transports::TransportTypes*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_CONNECTWITH_OFFSET))(arg, nullptr);
		}

		::System::Void set_AutoConnect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_AUTOCONNECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_.CTOR_OFFSET))(nullptr);
		}

		::System::TimeSpan* get_Timeout()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_QueryParamsOnlyForHandshake(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET))(arg, nullptr);
		}

		::System::Void set_RandomizationFactor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RANDOMIZATIONFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Reconnection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTION_OFFSET))(nullptr);
		}

		::System::Int32 get_ReconnectionAttempts()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTIONATTEMPTS_OFFSET))(nullptr);
		}

		::System::Void AdditionalQueryParams_CollectionChanged(::System::Object* arg, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::PlatformSupport::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_ADDITIONALQUERYPARAMS_COLLECTIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* get_ReconnectionDelay()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RECONNECTIONDELAY_OFFSET))(nullptr);
		}

		::System::Void set_HTTPRequestCustomizationCallback(::BestHTTP::SocketIO3::HTTPRequestCallbackDelegate* arg)
		{
			((::System::Void(*)(::BestHTTP::SocketIO3::HTTPRequestCallbackDelegate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_HTTPREQUESTCUSTOMIZATIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReconnectionDelayMax(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTIONDELAYMAX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Reconnection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_RECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_AdditionalQueryParams(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_SET_ADDITIONALQUERYPARAMS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SocketIO3::HTTPRequestCallbackDelegate* get_HTTPRequestCustomizationCallback()
		{
			return (return (::BestHTTP::SocketIO3::HTTPRequestCallbackDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_HTTPREQUESTCUSTOMIZATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean get_QueryParamsOnlyForHandshake()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_QUERYPARAMSONLYFORHANDSHAKE_OFFSET))(nullptr);
		}

		::BestHTTP::SocketIO3::Transports::TransportTypes* get_ConnectWith()
		{
			return (return (::BestHTTP::SocketIO3::Transports::TransportTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_CONNECTWITH_OFFSET))(nullptr);
		}

		::System::Single get_RandomizationFactor()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SOCKETIO3_SOCKETOPTIONS_GET_RANDOMIZATIONFACTOR_OFFSET))(nullptr);
		}

	};
}

