#pragma once
#include "../../../../../unitysdk.h"

namespace MX::NetworkProtocol { class ServerNotificationFlag; }
class ProcessedErrorAction;
namespace Assets::_MX::Program::Scripts::Network { class SessionState; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }
namespace MX::NetworkProtocol { class Protocol; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_SESSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xE26220)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0xE26230)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE26240)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_SESSIONSTATE_OFFSET UNITYSDK_OFFSET(0xE263E0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_SESSIONSTATE_OFFSET UNITYSDK_OFFSET(0xE263F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK__HANDLEWEBAPIERROR_G__COTOLOBBY|24_1_OFFSET UNITYSDK_OFFSET(0xE26400)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE26480)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xE264B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_FILTERFIRSTCLEARREWARDBYDISPLAYSEQUENCE_OFFSET UNITYSDK_OFFSET(0xE264C0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_NOTIFICATIONFLAG_OFFSET UNITYSDK_OFFSET(0xE265F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_PRINTRECEIVEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xE26630)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xE26640)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_HANDLESESSIONFINISHEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xE26650)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_NOTIFICATIONFLAG_OFFSET UNITYSDK_OFFSET(0xE266F0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_HANDLEERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0xE26880)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_SESSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xE26AB0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_AWAKE_OFFSET UNITYSDK_OFFSET(0xE26AC0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xE26CA0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_HANDLEWEBAPIERROR_OFFSET UNITYSDK_OFFSET(0xE26CB0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int SessionTask_TypeDefinitionIndex = 10413;

	class SessionTask : public PrivateKeyInfo
	{
	public:
		::MX::NetworkProtocol::ServerNotificationFlag* notificationFlag; // 0x0
		ProcessedErrorAction* ErrorAction; // 0x20
		Il2CppObject* CustomWebAPIErrorAction; // 0x28
		::System::Boolean _SessionFinished_k__BackingField; // 0x30
		::Assets::_MX::Program::Scripts::Network::SessionState* _SessionState_k__BackingField; // 0x34
		::System::Int32 _SessionId_k__BackingField; // 0x38

		::System::Void set_SessionFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_SESSIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_SessionState(::Assets::_MX::Program::Scripts::Network::SessionState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::SessionState*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_SESSIONSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Deserialize(::System::String* str, ::MX::NetworkProtocol::ServerNotificationFlag* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::System::String*, ::MX::NetworkProtocol::ServerNotificationFlag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_DESERIALIZE_OFFSET))(str, arg, arg2, nullptr);
		}

		::Assets::_MX::Program::Scripts::Network::SessionState* get_SessionState()
		{
			return ((::Assets::_MX::Program::Scripts::Network::SessionState*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_SESSIONSTATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _HandleWebAPIError_g__CoToLobby|24_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK__HANDLEWEBAPIERROR_G__COTOLOBBY|24_1_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void set_SessionId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_SESSIONID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* FilterFirstClearRewardByDisplaySequence(Il2CppObject* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_FILTERFIRSTCLEARREWARDBYDISPLAYSEQUENCE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::NetworkProtocol::ServerNotificationFlag* get_NotificationFlag()
		{
			return ((::MX::NetworkProtocol::ServerNotificationFlag*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_NOTIFICATIONFLAG_OFFSET))(nullptr);
		}

		::System::Void PrintReceivedMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_PRINTRECEIVEDMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleSessionFinishedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_HANDLESESSIONFINISHEDMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void set_NotificationFlag(::MX::NetworkProtocol::ServerNotificationFlag* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ServerNotificationFlag*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_SET_NOTIFICATIONFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void HandleErrorMessage(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_HANDLEERRORMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SessionFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_SESSIONFINISHED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_AWAKE_OFFSET))(nullptr);
		}

		::System::Int32 get_SessionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_GET_SESSIONID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* HandleWebAPIError(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::System::Boolean arg2)
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_SESSIONTASK_HANDLEWEBAPIERROR_OFFSET))(arg, str, arg2, nullptr);
		}

	};
}

