#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WorldRaidBattleResultRequest; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
class WorldRaidBattle;
namespace MX::NetworkProtocol { class Protocol; }

#define WORLDRAIDBATTLERESULTNETWORKTASK_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1FAF350)
#define WORLDRAIDBATTLERESULTNETWORKTASK__PROCESSSESSION_B__13_0_OFFSET UNITYSDK_OFFSET(0x1FAF360)
#define WORLDRAIDBATTLERESULTNETWORKTASK_INITREQUEST_OFFSET UNITYSDK_OFFSET(0x1FAF370)
#define WORLDRAIDBATTLERESULTNETWORKTASK_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1FAF4F0)
#define WORLDRAIDBATTLERESULTNETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1FAF500)
#define WORLDRAIDBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAF510)
#define WORLDRAIDBATTLERESULTNETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1FAF5A0)
#define WORLDRAIDBATTLERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF5B0)
#define WORLDRAIDBATTLERESULTNETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1FAF5C0)
#define WORLDRAIDBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAF5D0)
#define WORLDRAIDBATTLERESULTNETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1FAF9A0)
#define WORLDRAIDBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAF9B0)

	inline static constexpr unsigned int WorldRaidBattleResultNetworkTask_TypeDefinitionIndex = 2886;

	class WorldRaidBattleResultNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::WorldRaidBattleResultRequest* _Request_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x50

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_GET_ISWIN_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__13_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK__PROCESSSESSION_B__13_0_OFFSET))(nullptr);
		}

		::System::Void InitRequest(WorldRaidBattle* arg)
		{
			((::System::Void(*)(WorldRaidBattle*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_INITREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsWin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_SET_ISWIN_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::WorldRaidBattleResultRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WorldRaidBattleResultRequest*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::NetworkProtocol::WorldRaidBattleResultRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::WorldRaidBattleResultRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

