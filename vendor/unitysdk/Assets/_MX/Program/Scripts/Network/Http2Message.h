#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP { class HTTPResponse; }
namespace Assets::_MX::Program::Scripts::Network { class HttpMethodType; }
namespace Assets::_MX::Program::Scripts::Network { class Http2Message; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xE3AAA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xE3AAB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_DOWNLOADTEXT_OFFSET UNITYSDK_OFFSET(0xE3AB20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xE3AB80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xE3ABA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_SET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xE3ABB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_WEBRESPONSE_OFFSET UNITYSDK_OFFSET(0xE3ABC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_SET_WEBRESPONSE_OFFSET UNITYSDK_OFFSET(0xE3ABD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE3ABE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_INIT_OFFSET UNITYSDK_OFFSET(0xE3ACA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_SEND_OFFSET UNITYSDK_OFFSET(0xE3B0A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_STOP_OFFSET UNITYSDK_OFFSET(0xE3B130)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_ONREQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0xE3B170)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE3B670)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE3B780)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE3B790)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE3B810)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE3B720)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE3B890)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3B960)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3B9C0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int Http2Message_TypeDefinitionIndex = 10452;

	class Http2Message : public Il2CppObject
	{
	public:
		::BestHTTP::HTTPRequest* _WebRequest_k__BackingField; // 0x60
		::BestHTTP::HTTPResponse* _WebResponse_k__BackingField; // 0x68
		::System::Boolean disposed; // 0x70
		::System::String* error; // 0x78
		::System::Boolean completed; // 0x80

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_ERROR_OFFSET))(nullptr);
		}

		Il2CppObject* get_StatusCode()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::String* get_DownloadText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_DOWNLOADTEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DownloadData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_DOWNLOADDATA_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPRequest* get_WebRequest()
		{
			return ((::BestHTTP::HTTPRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_WEBREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_WebRequest(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_SET_WEBREQUEST_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPResponse* get_WebResponse()
		{
			return ((::BestHTTP::HTTPResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GET_WEBRESPONSE_OFFSET))(nullptr);
		}

		::System::Void set_WebResponse(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_SET_WEBRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::Assets::_MX::Program::Scripts::Network::HttpMethodType* arg2, ::System::String* str2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::Assets::_MX::Program::Scripts::Network::HttpMethodType*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_.CTOR_OFFSET))(str, arg, arg2, str2, arg3, arg4, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_INIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Send()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_SEND_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_STOP_OFFSET))(nullptr);
		}

		::System::Void OnRequestFinished(::BestHTTP::HTTPRequest* arg, ::BestHTTP::HTTPResponse* arg2)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_ONREQUESTFINISHED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Assets::_MX::Program::Scripts::Network::Http2Message* arg, ::Assets::_MX::Program::Scripts::Network::Http2Message* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http2Message*, ::Assets::_MX::Program::Scripts::Network::Http2Message*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Assets::_MX::Program::Scripts::Network::Http2Message* arg, ::Assets::_MX::Program::Scripts::Network::Http2Message* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http2Message*, ::Assets::_MX::Program::Scripts::Network::Http2Message*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::Assets::_MX::Program::Scripts::Network::Http2Message* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http2Message*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP2MESSAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

