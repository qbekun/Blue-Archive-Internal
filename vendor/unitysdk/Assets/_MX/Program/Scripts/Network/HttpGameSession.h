#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class HttpGameMessage; }
namespace Assets::_MX::Program::Scripts::Network { class SessionState; }
namespace MX::NetworkProtocol { class RequestPacket; }
namespace MX::Core::Crypto { class O2bd538d36c3a5a4c5e73cc15f4c126910fe08660da77ed8a7bad9f5db1313995; }
namespace Assets::_MX::Program::Scripts::Network { class HttpGameSession; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_RESPONSEHANDLER_OFFSET UNITYSDK_OFFSET(0xE55C30)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_RESPONSEHANDLER_OFFSET UNITYSDK_OFFSET(0xE55C40)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_NETWORKERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xE55C50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_NETWORKERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xE55C60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_REQUESTHANDLER_OFFSET UNITYSDK_OFFSET(0xE55C70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_REQUESTHANDLER_OFFSET UNITYSDK_OFFSET(0xE55C80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_STATE_OFFSET UNITYSDK_OFFSET(0xE55C90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_STATE_OFFSET UNITYSDK_OFFSET(0xE55CA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xE55D70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xE55D80)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0xE55D90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_ELAPSED_OFFSET UNITYSDK_OFFSET(0xE55DA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xE55DB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0xE55DC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_ISGATEWAYBYPASSED_OFFSET UNITYSDK_OFFSET(0xE55DD0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_ISGATEWAYBYPASSED_OFFSET UNITYSDK_OFFSET(0xE55DE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_INIT_OFFSET UNITYSDK_OFFSET(0xE55DF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_OEF400DE8510EB4FF4BF5327EF6607975BE46F3C30EACAD7EC607C46AB7CC37B7_OFFSET UNITYSDK_OFFSET(0xE56900)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SETCOOKIEPARAMETER_OFFSET UNITYSDK_OFFSET(0xE569B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SETROUTINGPARAMETER_OFFSET UNITYSDK_OFFSET(0xE569C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_RESEND_OFFSET UNITYSDK_OFFSET(0xE569E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SEND_OFFSET UNITYSDK_OFFSET(0xE56A70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_WAITFORREQUEST_OFFSET UNITYSDK_OFFSET(0xE56B60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_HANDLESERVERERROR_OFFSET UNITYSDK_OFFSET(0xE56BF0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_BUILDERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0xE56E90)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_AWAKE_OFFSET UNITYSDK_OFFSET(0xE57000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE57010)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE57140)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0xE57200)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE572B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_EQUALS_OFFSET UNITYSDK_OFFSET(0xE572C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE57350)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xE57360)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xE55BB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_EQUALS_OFFSET UNITYSDK_OFFSET(0xE57330)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE57390)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int HttpGameSession_TypeDefinitionIndex = 10457;

	class HttpGameSession : public Il2CppObject
	{
	public:
		::System::Int32 id; // 0x0
		::Assets::_MX::Program::Scripts::Network::HttpGameMessage* httpMessage; // 0x18
		Il2CppObject* _ResponseHandler_k__BackingField; // 0x20
		Il2CppObject* _NetworkErrorHandler_k__BackingField; // 0x28
		::System::Action* _RequestHandler_k__BackingField; // 0x30
		::Assets::_MX::Program::Scripts::Network::SessionState* state; // 0x38
		::System::Int32 _SessionId_k__BackingField; // 0x3C
		::System::TimeSpan* _Elapsed_k__BackingField; // 0x40
		::System::TimeSpan* _TimeOut_k__BackingField; // 0x48
		::System::String* url; // 0x50
		::System::Single timeOut; // 0x58
		::MX::NetworkProtocol::RequestPacket* requestPacket; // 0x60
		::System::String* bundleVersion; // 0x68
		::MX::Core::Crypto::O2bd538d36c3a5a4c5e73cc15f4c126910fe08660da77ed8a7bad9f5db1313995* O5919e246fdecd3b36a73c973fb8009a139f238a08f49182acb1a67e329fac010; // 0x70
		::Il2CppArray<::System::Object*>* O8327662c6062205a30e712336f0c4eea4f14fc374c0c6c9e5e58f1e39edcccdd; // 0x78
		::Il2CppArray<::System::Object*>* Occf544ee5fa6cff6470c8a5a9700eb1b32976bb10ac6ace4085dc1d7b6cdee6f; // 0x80
		::Il2CppArray<::System::Object*>* O4047f91b8bf4502fafb8a467027a2c61ce5a1a51350baaa1ed890219c02034e6; // 0x88
		Il2CppObject* publisherAccountId; // 0x90
		::System::Boolean _IsGatewayBypassed_k__BackingField; // 0xA0
		Il2CppObject* rsaKeySize; // 0xA4

		Il2CppObject* get_ResponseHandler()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_RESPONSEHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_ResponseHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_RESPONSEHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NetworkErrorHandler()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_NETWORKERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_NetworkErrorHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_NETWORKERRORHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Action* get_RequestHandler()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_REQUESTHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_RequestHandler(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_REQUESTHANDLER_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::SessionState* get_State()
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::Assets::_MX::Program::Scripts::Network::SessionState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::SessionState*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SessionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_SESSIONID_OFFSET))(nullptr);
		}

		::System::Void set_SessionId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_SESSIONID_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_Elapsed()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_ELAPSED_OFFSET))(nullptr);
		}

		::System::Void set_Elapsed(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_ELAPSED_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* get_TimeOut()
		{
			return ((::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_TimeOut(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsGatewayBypassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GET_ISGATEWAYBYPASSED_OFFSET))(nullptr);
		}

		::System::Void set_IsGatewayBypassed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SET_ISGATEWAYBYPASSED_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::System::String* str, ::MX::NetworkProtocol::RequestPacket* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::String*, ::MX::NetworkProtocol::RequestPacket*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_INIT_OFFSET))(str, arg, arg2, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::HttpGameSession* Oef400de8510eb4ff4bf5327ef6607975be46f3c30eacad7ec607c46ab7cc37b7(::MX::Core::Crypto::O2bd538d36c3a5a4c5e73cc15f4c126910fe08660da77ed8a7bad9f5db1313995* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3, ::Il2CppArray<::System::Object*>* arg4, ::System::Boolean arg5, Il2CppObject* arg6)
		{
			return ((::Assets::_MX::Program::Scripts::Network::HttpGameSession*(*)(::MX::Core::Crypto::O2bd538d36c3a5a4c5e73cc15f4c126910fe08660da77ed8a7bad9f5db1313995*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_OEF400DE8510EB4FF4BF5327EF6607975BE46F3C30EACAD7EC607C46AB7CC37B7_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::HttpGameSession* SetCookieParameter(Il2CppObject* arg)
		{
			return ((::Assets::_MX::Program::Scripts::Network::HttpGameSession*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SETCOOKIEPARAMETER_OFFSET))(arg, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::HttpGameSession* SetRoutingParameter(::System::String* str)
		{
			return ((::Assets::_MX::Program::Scripts::Network::HttpGameSession*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SETROUTINGPARAMETER_OFFSET))(str, nullptr);
		}

		::System::Void Resend()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_RESEND_OFFSET))(nullptr);
		}

		::System::Void Send()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SEND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitForRequest()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_WAITFORREQUEST_OFFSET))(nullptr);
		}

		::System::Void HandleServerError()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_HANDLESERVERERROR_OFFSET))(nullptr);
		}

		::System::String* BuildErrorMessage(::Assets::_MX::Program::Scripts::Network::HttpGameMessage* arg)
		{
			return ((::System::String*(*)(::Assets::_MX::Program::Scripts::Network::HttpGameMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_BUILDERRORMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Spawned()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_SPAWNED_OFFSET))(nullptr);
		}

		::System::Void Despawned()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_DESPAWNED_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::Assets::_MX::Program::Scripts::Network::HttpGameSession* arg, ::Assets::_MX::Program::Scripts::Network::HttpGameSession* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::HttpGameSession*, ::Assets::_MX::Program::Scripts::Network::HttpGameSession*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::Assets::_MX::Program::Scripts::Network::HttpGameSession* arg, ::Assets::_MX::Program::Scripts::Network::HttpGameSession* arg2)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::HttpGameSession*, ::Assets::_MX::Program::Scripts::Network::HttpGameSession*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::Assets::_MX::Program::Scripts::Network::HttpGameSession* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::HttpGameSession*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_HTTPGAMESESSION_.CTOR_OFFSET))(nullptr);
		}

	};
}

