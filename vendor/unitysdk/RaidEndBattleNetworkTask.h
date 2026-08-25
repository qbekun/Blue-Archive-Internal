#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidEndBattleRequest; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::Logic::Battles { class SingleRaidBattle; }
namespace MX::NetworkProtocol { class Protocol; }

#define RAIDENDBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8CC60)
#define RAIDENDBATTLENETWORKTASK_INITREQUEST_OFFSET UNITYSDK_OFFSET(0x1F8CC70)
#define RAIDENDBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8CE00)
#define RAIDENDBATTLENETWORKTASK_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1F8CE10)
#define RAIDENDBATTLENETWORKTASK__PROCESSSESSION_B__13_0_OFFSET UNITYSDK_OFFSET(0x1F8CE20)
#define RAIDENDBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8CE30)
#define RAIDENDBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F8D2B0)
#define RAIDENDBATTLENETWORKTASK_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1F8D2C0)
#define RAIDENDBATTLENETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F8D2D0)
#define RAIDENDBATTLENETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F8D2E0)
#define RAIDENDBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F8D2F0)
#define RAIDENDBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8D300)

	inline static constexpr unsigned int RaidEndBattleNetworkTask_TypeDefinitionIndex = 2688;

	class RaidEndBattleNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidEndBattleRequest* _Request_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x50

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void InitRequest(::MX::Logic::Battles::SingleRaidBattle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::SingleRaidBattle*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_INITREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsWin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_SET_ISWIN_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__13_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK__PROCESSSESSION_B__13_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_GET_ISWIN_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::RaidEndBattleRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::RaidEndBattleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::RaidEndBattleRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::RaidEndBattleRequest*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDENDBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

