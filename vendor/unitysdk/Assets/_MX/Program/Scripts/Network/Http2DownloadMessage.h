#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }
namespace Assets::_MX::Program::Scripts::Network { class HttpMethodType; }
namespace Assets::_MX::Program::Scripts::Network { class Http2DownloadMessage; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xE39C50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0xE39C60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xE39C80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_DOWNLOADTEXT_OFFSET UNITYSDK_OFFSET(0xE39CF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xE39D50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xE39D70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_SET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xE39D80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_WEBRESPONSE_OFFSET UNITYSDK_OFFSET(0xE39D90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_SET_WEBRESPONSE_OFFSET UNITYSDK_OFFSET(0xE39DA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GETRESPONSEHEADER_OFFSET UNITYSDK_OFFSET(0xE39DB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE39E10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_INIT_OFFSET UNITYSDK_OFFSET(0xE39E80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_SEND_OFFSET UNITYSDK_OFFSET(0xE3A080)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_STOP_OFFSET UNITYSDK_OFFSET(0xE3A110)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_ONREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0xE3A150)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE3A650)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE3A720)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE3A730)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE3A790)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE3A6E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE3A7F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3A8C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3A920)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int Http2DownloadMessage_TypeDefinitionIndex = 10450;

	class Http2DownloadMessage : public Il2CppObject
	{
	public:
		::BestHTTP::HTTPRequest* _WebRequest_k__BackingField; // 0x60
		::BestHTTP::HTTPResponse* _WebResponse_k__BackingField; // 0x68
		::System::Boolean disposed; // 0x70
		::System::String* error; // 0x78
		::System::Boolean completed; // 0x80

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSuccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_ISSUCCESS_OFFSET))(nullptr);
		}

		Il2CppObject* get_StatusCode()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::String* get_DownloadText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_DOWNLOADTEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DownloadData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_DOWNLOADDATA_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPRequest* get_WebRequest()
		{
			return ((::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_WEBREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_WebRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_SET_WEBREQUEST_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPResponse* get_WebResponse()
		{
			return ((::BestHTTP::HTTPResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GET_WEBRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_WebResponse(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_SET_WEBRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::String* GetResponseHeader(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GETRESPONSEHEADER_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Assets::_MX::Program::Scripts::Network::HttpMethodType* arg)
		{
			((::System::Void(*)(::System::String*, ::Assets::_MX::Program::Scripts::Network::HttpMethodType*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_INIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Send()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_SEND_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_STOP_OFFSET))(nullptr);
		}

		::System::Void OnRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg2)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_ONREQUESTFINISHED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* arg, ::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage*, ::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* arg, ::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage*, ::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http2DownloadMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2DOWNLOADMESSAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

