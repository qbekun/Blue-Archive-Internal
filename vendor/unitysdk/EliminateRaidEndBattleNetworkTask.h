#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidEndBattleRequest; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::Logic::Battles { class SingleRaidBattle; }
namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDENDBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F5AD40)
#define ELIMINATERAIDENDBATTLENETWORKTASK_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1F5AD50)
#define ELIMINATERAIDENDBATTLENETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F5AD60)
#define ELIMINATERAIDENDBATTLENETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F5AD70)
#define ELIMINATERAIDENDBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1F5AD80)
#define ELIMINATERAIDENDBATTLENETWORKTASK_INITREQUEST_OFFSET UNITYSDK_OFFSET(0x1F5AD90)
#define ELIMINATERAIDENDBATTLENETWORKTASK_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1F5AF20)
#define ELIMINATERAIDENDBATTLENETWORKTASK_GET_BOSSGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1F5AF30)
#define ELIMINATERAIDENDBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5AF40)
#define ELIMINATERAIDENDBATTLENETWORKTASK_SET_BOSSGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1F5AF50)
#define ELIMINATERAIDENDBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5AF60)
#define ELIMINATERAIDENDBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5B3E0)
#define ELIMINATERAIDENDBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5B3F0)
#define ELIMINATERAIDENDBATTLENETWORKTASK__PROCESSSESSION_B__17_0_OFFSET UNITYSDK_OFFSET(0x1F5B480)

	inline static constexpr unsigned int EliminateRaidEndBattleNetworkTask_TypeDefinitionIndex = 2358;

	class EliminateRaidEndBattleNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidEndBattleRequest* _Request_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x50
		::System::String* _bossGroupName_k__BackingField; // 0x58

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsWin(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_SET_ISWIN_OFFSET))(arg, nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::EliminateRaidEndBattleRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidEndBattleRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidEndBattleRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::EliminateRaidEndBattleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void InitRequest(::MX::Logic::Battles::SingleRaidBattle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::SingleRaidBattle*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_INITREQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_GET_ISWIN_OFFSET))(nullptr);
		}

		::System::String* get_bossGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_GET_BOSSGROUPNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_bossGroupName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_SET_BOSSGROUPNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__17_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDENDBATTLENETWORKTASK__PROCESSSESSION_B__17_0_OFFSET))(nullptr);
		}

	};

