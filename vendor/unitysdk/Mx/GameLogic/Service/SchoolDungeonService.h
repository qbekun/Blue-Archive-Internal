#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class SchoolDungeonStageHistoryDB; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace FlatData { class StarGoalType; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace FlatData { class CurrencyTypes; }

#define MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_CREATESCHOOLDUNGEONSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFC77D0)
#define MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFC7840)
#define MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_ISSTARGOALCLEARED_OFFSET UNITYSDK_OFFSET(0xFC7850)
#define MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_CALCSTARGOALS_OFFSET UNITYSDK_OFFSET(0xFC79C0)
#define MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_TRYGETSTAGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xFC7AD0)
#define MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_ISALLSTARGOALACHIEVED_OFFSET UNITYSDK_OFFSET(0xFC7B80)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int SchoolDungeonService_TypeDefinitionIndex = 12411;

	class SchoolDungeonService : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* CreateSchoolDungeonStageHistoryDB(::System::Int64 arg, ::MX::Data::Excel::SchoolDungeonStageExcel* arg2)
		{
			return ((::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*(*)(::System::Int64, ::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_CREATESCHOOLDUNGEONSTAGEHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsStarGoalCleared(::FlatData::StarGoalType* arg, ::System::Int32 arg2, ::MX::Logic::Battles::Summary::BattleSummary* arg3)
		{
			return ((::System::Boolean(*)(::FlatData::StarGoalType*, ::System::Int32, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_ISSTARGOALCLEARED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CalcStarGoals(::MX::Data::Excel::SchoolDungeonStageExcel* arg, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* arg2, ::MX::Logic::Battles::Summary::BattleSummary* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_CALCSTARGOALS_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TryGetStageCostAmount(::System::Int64 arg, ::FlatData::CurrencyTypes* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::CurrencyTypes*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_TRYGETSTAGECOSTAMOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsAllStarGoalAchieved(::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::SchoolDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_SCHOOLDUNGEONSERVICE_ISALLSTARGOALACHIEVED_OFFSET))(arg, nullptr);
		}

	};
}

