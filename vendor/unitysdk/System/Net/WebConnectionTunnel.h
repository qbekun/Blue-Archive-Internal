#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x9A82DE0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_CONNECTURI_OFFSET UNITYSDK_OFFSET(0x9A82DF0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A81330)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x9A82E00)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x9A82E10)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A82E20)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x9A82E30)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9A82E40)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0x9A82E50)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_STATUSDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9A82E60)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x9A82E70)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_CHALLENGE_OFFSET UNITYSDK_OFFSET(0x9A82E80)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A82E90)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x9A82EA0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_PROXYVERSION_OFFSET UNITYSDK_OFFSET(0x9A82EB0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_PROXYVERSION_OFFSET UNITYSDK_OFFSET(0x9A82EC0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9A82ED0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x9A82EE0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A81380)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_READHEADERS_OFFSET UNITYSDK_OFFSET(0x9A82EF0)
#define SYSTEM_NET_WEBCONNECTIONTUNNEL_FLUSHCONTENTS_OFFSET UNITYSDK_OFFSET(0x9A83040)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionTunnel_TypeDefinitionIndex = 29813;

	class WebConnectionTunnel : public Il2CppObject
	{
	public:
		::System::Net::HttpWebRequest* _Request_k__BackingField; // 0x10
		::System::Uri* _ConnectUri_k__BackingField; // 0x18
		::System::Net::HttpWebRequest* connectRequest; // 0x20
		NtlmAuthState* ntlmAuthState; // 0x28
		::System::Boolean _Success_k__BackingField; // 0x2C
		::System::Boolean _CloseConnection_k__BackingField; // 0x2D
		::System::Int32 _StatusCode_k__BackingField; // 0x30
		::System::String* _StatusDescription_k__BackingField; // 0x38
		::Il2CppArray<::System::Object*>* _Challenge_k__BackingField; // 0x40
		::System::Net::WebHeaderCollection* _Headers_k__BackingField; // 0x48
		::System::Version* _ProxyVersion_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _Data_k__BackingField; // 0x58

		::System::Net::HttpWebRequest* get_Request()
		{
			return (return (::System::Net::HttpWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Uri* get_ConnectUri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_CONNECTURI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Net::HttpWebRequest* arg, ::System::Uri* arg)
		{
			((::System::Void(*)(::System::Net::HttpWebRequest*, ::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_Success()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_SUCCESS_OFFSET))(nullptr);
		}

		::System::Void set_Success(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_SUCCESS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CloseConnection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_CLOSECONNECTION_OFFSET))(nullptr);
		}

		::System::Void set_CloseConnection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_CLOSECONNECTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatusCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::Void set_StatusCode(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_STATUSCODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StatusDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_STATUSDESCRIPTION_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Challenge()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_CHALLENGE_OFFSET))(nullptr);
		}

		::System::Void set_Challenge(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_CHALLENGE_OFFSET))(arg, nullptr);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return (return (::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_HEADERS_OFFSET))(nullptr);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* arg)
		{
			((::System::Void(*)(::System::Net::WebHeaderCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_HEADERS_OFFSET))(arg, nullptr);
		}

		::System::Version* get_ProxyVersion()
		{
			return (return (::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_PROXYVERSION_OFFSET))(nullptr);
		}

		::System::Void set_ProxyVersion(::System::Version* arg)
		{
			((::System::Void(*)(::System::Version*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_PROXYVERSION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* Initialize(::System::IO::Stream* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::IO::Stream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ReadHeaders(::System::IO::Stream* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::IO::Stream*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_READHEADERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FlushContents(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONTUNNEL_FLUSHCONTENTS_OFFSET))(arg, arg, nullptr);
		}

	};
}

