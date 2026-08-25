#pragma once
#include "../../../../../unitysdk.h"

namespace UnityEngine::Networking { class UnityWebRequest; }
namespace MX::NetworkProtocol { class Protocol; }
namespace Assets::_MX::Program::Scripts::Network { class HttpMethodType; }
namespace Assets::_MX::Program::Scripts::Network { class Http1Message; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xE391D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xE39220)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_DOWNLOADTEXT_OFFSET UNITYSDK_OFFSET(0xE39290)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xE39300)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xE39340)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_SET_WEBREQUEST_OFFSET UNITYSDK_OFFSET(0xE39350)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE39360)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE393F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_INIT_OFFSET UNITYSDK_OFFSET(0xE39480)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_SEND_OFFSET UNITYSDK_OFFSET(0xE396E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_STOP_OFFSET UNITYSDK_OFFSET(0xE39770)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE397B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE398C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE398D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE39950)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE39860)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE399D0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE39AA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE39B00)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int Http1Message_TypeDefinitionIndex = 10448;

	class Http1Message : public Il2CppObject
	{
	public:
		::UnityEngine::Networking::UnityWebRequest* _WebRequest_k__BackingField; // 0x60
		::System::Boolean disposed; // 0x68

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_ERROR_OFFSET))(nullptr);
		}

		Il2CppObject* get_StatusCode()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::System::String* get_DownloadText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_DOWNLOADTEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DownloadData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_DOWNLOADDATA_OFFSET))(nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* get_WebRequest()
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GET_WEBREQUEST_OFFSET))(nullptr);
		}

		::System::Void set_WebRequest(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_SET_WEBREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::NetworkProtocol::Protocol* arg, ::System::String* str2, ::Assets::_MX::Program::Scripts::Network::HttpMethodType* arg2)
		{
			((::System::Void(*)(::System::String*, ::MX::NetworkProtocol::Protocol*, ::System::String*, ::Assets::_MX::Program::Scripts::Network::HttpMethodType*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_.CTOR_OFFSET))(str, arg, str2, arg2, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::NetworkProtocol::Protocol* arg, ::System::String* str2, ::System::Boolean arg2, ::Assets::_MX::Program::Scripts::Network::HttpMethodType* arg3)
		{
			((::System::Void(*)(::System::String*, ::MX::NetworkProtocol::Protocol*, ::System::String*, ::System::Boolean, ::Assets::_MX::Program::Scripts::Network::HttpMethodType*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_.CTOR_OFFSET))(str, arg, str2, arg2, arg3, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_INIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Send()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_SEND_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_STOP_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Assets::_MX::Program::Scripts::Network::Http1Message* arg, ::Assets::_MX::Program::Scripts::Network::Http1Message* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http1Message*, ::Assets::_MX::Program::Scripts::Network::Http1Message*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Assets::_MX::Program::Scripts::Network::Http1Message* arg, ::Assets::_MX::Program::Scripts::Network::Http1Message* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http1Message*, ::Assets::_MX::Program::Scripts::Network::Http1Message*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::Assets::_MX::Program::Scripts::Network::Http1Message* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::Http1Message*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTP1MESSAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

