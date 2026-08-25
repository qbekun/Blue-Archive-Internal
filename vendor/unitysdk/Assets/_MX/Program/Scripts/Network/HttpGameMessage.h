#pragma once
#include "../../../../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace Assets::_MX::Program::Scripts::Network { class Http2Message; }
namespace BestHTTP { class HTTPRequestStates; }
namespace Assets::_MX::Program::Scripts::Network { class HttpGameMessage; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_URL_OFFSET UNITYSDK_OFFSET(0xE3BB40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE3BB60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_SET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE3BB70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xE3BB80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xE3BBB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_REQUESTSTATE_OFFSET UNITYSDK_OFFSET(0xE3BBE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_DOWNLOADTEXT_OFFSET UNITYSDK_OFFSET(0xE3BC10)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xE3BC40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_RETRYCOUNT_OFFSET UNITYSDK_OFFSET(0xE3BC70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0xE3BC90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE3BCA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE3BDF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3BEC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE3BF20)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_SEND_OFFSET UNITYSDK_OFFSET(0xE3BFE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_STOP_OFFSET UNITYSDK_OFFSET(0xE3C010)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_INCREASERETRYCOUNT_OFFSET UNITYSDK_OFFSET(0xE3C040)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DECODERESPONSE_OFFSET UNITYSDK_OFFSET(0xE3C060)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DECRYPTORRETURNORIGINAL_OFFSET UNITYSDK_OFFSET(0xE3C6E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_HANDLEDECRYPTIONERROR_OFFSET UNITYSDK_OFFSET(0xE3C760)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_ISSPECIFICERRORJSON_OFFSET UNITYSDK_OFFSET(0xE3C7C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE3CAA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE3CC90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE3CD80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE3CB70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE3CC10)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int HttpGameMessage_TypeDefinitionIndex = 10453;

	class HttpGameMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::Protocol* _Protocol_k__BackingField; // 0x10
		::Assets::_MX::Program::Scripts::Network::Http2Message* _message_k__BackingField; // 0x18
		::System::Boolean disposed; // 0x20

		::System::String* get_URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_URL_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Protocol(::MX::NetworkProtocol::Protocol* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::Protocol*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_SET_PROTOCOL_OFFSET))(arg, nullptr);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_ERROR_OFFSET))(nullptr);
		}

		Il2CppObject* get_StatusCode()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_STATUSCODE_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPRequestStates* get_RequestState()
		{
			return ((::BestHTTP::HTTPRequestStates*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_REQUESTSTATE_OFFSET))(nullptr);
		}

		::System::String* get_DownloadText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_DOWNLOADTEXT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_DownloadData()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_DOWNLOADDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_RetryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_RETRYCOUNT_OFFSET))(nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::Http2Message* get_message()
		{
			return ((::Assets::_MX::Program::Scripts::Network::Http2Message*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::MX::NetworkProtocol::Protocol* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::String* str2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::String*, ::MX::NetworkProtocol::Protocol*, ::Il2CppArray<::System::Object*>*, ::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_.CTOR_OFFSET))(str, arg, arg2, str2, arg3, arg4, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Send()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_SEND_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_STOP_OFFSET))(nullptr);
		}

		::System::Void IncreaseRetryCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_INCREASERETRYCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* DecodeResponse(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::String* str)
		{
			return ((Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DECODERESPONSE_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::String* DecryptOrReturnOriginal(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::System::String* str)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_DECRYPTORRETURNORIGINAL_OFFSET))(arg, arg2, str, nullptr);
		}

		Il2CppObject* HandleDecryptionError(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_HANDLEDECRYPTIONERROR_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSpecificErrorJson(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_ISSPECIFICERRORJSON_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Assets::_MX::Program::Scripts::Network::HttpGameMessage* arg, ::Assets::_MX::Program::Scripts::Network::HttpGameMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::HttpGameMessage*, ::Assets::_MX::Program::Scripts::Network::HttpGameMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Assets::_MX::Program::Scripts::Network::HttpGameMessage* arg, ::Assets::_MX::Program::Scripts::Network::HttpGameMessage* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::HttpGameMessage*, ::Assets::_MX::Program::Scripts::Network::HttpGameMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::Assets::_MX::Program::Scripts::Network::HttpGameMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::HttpGameMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMEMESSAGE_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

