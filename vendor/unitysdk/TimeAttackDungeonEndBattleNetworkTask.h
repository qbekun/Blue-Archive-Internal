#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAB530)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1FAB9C0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1FAB9D0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_ECHELONID_OFFSET UNITYSDK_OFFSET(0x1FAB9E0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB9F0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FABA00)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1FABA90)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_ECHELONID_OFFSET UNITYSDK_OFFSET(0x1FABAA0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FABAB0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x1FABAC0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1FABAD0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0x1FABAE0)
#define TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1FABAF0)

	inline static constexpr unsigned int TimeAttackDungeonEndBattleNetworkTask_TypeDefinitionIndex = 2863;

	class TimeAttackDungeonEndBattleNetworkTask : public Il2CppObject
	{
	public:
		::System::Int32 _EchelonId_k__BackingField; // 0x40
		::System::Int64 _RoomId_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x58

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Int32 get_EchelonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_ECHELONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_RoomId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_ROOMID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_ECHELONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_RoomId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_ROOMID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONENDBATTLENETWORKTASK_GET_SUMMARY_OFFSET))(nullptr);
		}

	};

