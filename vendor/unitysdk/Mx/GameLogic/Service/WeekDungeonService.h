#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class WeekDungeonStageHistoryDB; }
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace FlatData { class WeekDungeonType; }
namespace FlatData { class StarGoalType; }
namespace MX::GameLogic::Service { class ContentsRank; }
namespace MX::Logic::Battles::Summary { class HeroSummary; }
namespace FlatData { class CurrencyTypes; }

#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CREATEWEEKDUNGEONSTAGEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xFCC030)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCSTARGOALS_OFFSET UNITYSDK_OFFSET(0xFCC0E0)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCSTARGOAL_OFFSET UNITYSDK_OFFSET(0xFCC210)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCSTARGOAL_OFFSET UNITYSDK_OFFSET(0xFCC440)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_STARGOALACHIEVED_OFFSET UNITYSDK_OFFSET(0xFCC7A0)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_ISALLSTARGOALACHIEVED_OFFSET UNITYSDK_OFFSET(0xFCC7F0)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_GETSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xFCCA70)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_GETCONTENTSRANK_OFFSET UNITYSDK_OFFSET(0xFCCE60)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCALLALIVE_OFFSET UNITYSDK_OFFSET(0xFCC500)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCGETBOXES_OFFSET UNITYSDK_OFFSET(0xFCC580)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_ISSTARGOALACHIEVED_OFFSET UNITYSDK_OFFSET(0xFCC730)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_WEEKDUNGEONCLEARCHARACTEREXP_OFFSET UNITYSDK_OFFSET(0xFCD260)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_GETRECORDCOUNT_OFFSET UNITYSDK_OFFSET(0xFCCDE0)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_TRYGETSTAGECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xFCD370)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_ISCONSUMETICKET_OFFSET UNITYSDK_OFFSET(0xFCD420)
#define MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCD5D0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int WeekDungeonService_TypeDefinitionIndex = 12419;

	class WeekDungeonService : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* CreateWeekDungeonStageHistoryDB(::System::Int64 arg, ::MX::Data::Excel::WeekDungeonExcel* arg2)
		{
			return ((::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*(*)(::System::Int64, ::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CREATEWEEKDUNGEONSTAGEHISTORYDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CalcStarGoals(::MX::Data::Excel::WeekDungeonExcel* arg, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg2, ::MX::Logic::Battles::Summary::BattleSummary* arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonExcel*, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::MX::Logic::Battles::Summary::BattleSummary*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCSTARGOALS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Int64 CalcStarGoal(::FlatData::WeekDungeonType* arg, ::FlatData::StarGoalType* arg2, ::System::Int64 arg3, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg4, ::MX::Logic::Battles::Summary::BattleSummary* arg5, ::System::Boolean arg6)
		{
			return ((::System::Int64(*)(::FlatData::WeekDungeonType*, ::FlatData::StarGoalType*, ::System::Int64, ::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::MX::Logic::Battles::Summary::BattleSummary*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCSTARGOAL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Int64 CalcStarGoal(::FlatData::WeekDungeonType* arg, ::FlatData::StarGoalType* arg2, ::System::Int64 arg3, ::MX::Logic::Battles::Summary::BattleSummary* arg4, ::System::Boolean arg5)
		{
			return ((::System::Int64(*)(::FlatData::WeekDungeonType*, ::FlatData::StarGoalType*, ::System::Int64, ::MX::Logic::Battles::Summary::BattleSummary*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCSTARGOAL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean StarGoalAchieved(::FlatData::StarGoalType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Boolean arg4)
		{
			return ((::System::Boolean(*)(::FlatData::StarGoalType*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_STARGOALACHIEVED_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsAllStarGoalAchieved(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_ISALLSTARGOALACHIEVED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetStarCount(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_GETSTARCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Service::ContentsRank* GetContentsRank(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg)
		{
			return ((::MX::GameLogic::Service::ContentsRank*(*)(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_GETCONTENTSRANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcAllAlive(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			return ((::System::Int64(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCALLALIVE_OFFSET))(arg, nullptr);
		}

		::System::Int64 CalcGetBoxes(::FlatData::WeekDungeonType* arg, ::MX::Logic::Battles::Summary::BattleSummary* arg2)
		{
			return ((::System::Int64(*)(::FlatData::WeekDungeonType*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_CALCGETBOXES_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 IsStarGoalAchieved(::System::Int64 arg, ::MX::Logic::Battles::Summary::BattleSummary* arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_ISSTARGOALACHIEVED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 WeekDungeonClearCharacterExp(::MX::Data::Excel::WeekDungeonExcel* arg, ::MX::Logic::Battles::Summary::HeroSummary* arg2, ::MX::Logic::Battles::Summary::BattleSummary* arg3)
		{
			return ((::System::Int64(*)(::MX::Data::Excel::WeekDungeonExcel*, ::MX::Logic::Battles::Summary::HeroSummary*, ::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_WEEKDUNGEONCLEARCHARACTEREXP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 GetRecordCount(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB* arg, ::FlatData::StarGoalType* arg2)
		{
			return ((::System::Int64(*)(::MX::GameLogic::DBModel::WeekDungeonStageHistoryDB*, ::FlatData::StarGoalType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_GETRECORDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetStageCostAmount(::System::Int64 arg, ::FlatData::CurrencyTypes* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::FlatData::CurrencyTypes*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_TRYGETSTAGECOSTAMOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsConsumeTicket(::FlatData::WeekDungeonType* arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::FlatData::WeekDungeonType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_ISCONSUMETICKET_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_WEEKDUNGEONSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

