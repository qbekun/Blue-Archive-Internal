#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class OpenConditionContent; }
namespace FlatData { class MultipleConditionCheckType; }
namespace FlatData { class WeekDay; }
namespace MX::Data::Excel { class OpenConditionExcel; }

#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1005750)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1005760)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_HIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1005770)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_HIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1005780)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1005790)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x10057A0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x10057B0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x10057C0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CAMPAIGNSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10057D0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CAMPAIGNSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10057E0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x10057F0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1005800)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_OPENDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1005810)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_OPENDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1005820)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_OPENHOUR_OFFSET UNITYSDK_OFFSET(0x1005830)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_OPENHOUR_OFFSET UNITYSDK_OFFSET(0x1005840)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CLOSEDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1005850)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CLOSEDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1005860)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CLOSEHOUR_OFFSET UNITYSDK_OFFSET(0x1005870)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CLOSEHOUR_OFFSET UNITYSDK_OFFSET(0x1005880)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CAFEIDFORCAFERANK_OFFSET UNITYSDK_OFFSET(0x1005890)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CAFEIDFORCAFERANK_OFFSET UNITYSDK_OFFSET(0x10058A0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CAFERANK_OFFSET UNITYSDK_OFFSET(0x10058B0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CAFERANK_OFFSET UNITYSDK_OFFSET(0x10058C0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_OPENEDCAFEID_OFFSET UNITYSDK_OFFSET(0x10058D0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_OPENEDCAFEID_OFFSET UNITYSDK_OFFSET(0x10058E0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10058F0)
#define MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1005900)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int OpenConditionDB_TypeDefinitionIndex = 12671;

	class OpenConditionDB : public Il2CppObject
	{
	public:
		::FlatData::OpenConditionContent* _ContentType_k__BackingField; // 0x10
		::System::Boolean _HideWhenLocked_k__BackingField; // 0x14
		::System::Int64 _AccountLevel_k__BackingField; // 0x18
		::System::Int64 _ScenarioModeId_k__BackingField; // 0x20
		::System::Int64 _CampaignStageUniqueId_k__BackingField; // 0x28
		::FlatData::MultipleConditionCheckType* _MultipleConditionCheckType_k__BackingField; // 0x30
		::FlatData::WeekDay* _OpenDayOfWeek_k__BackingField; // 0x34
		::System::Int64 _OpenHour_k__BackingField; // 0x38
		::FlatData::WeekDay* _CloseDayOfWeek_k__BackingField; // 0x40
		::System::Int64 _CloseHour_k__BackingField; // 0x48
		::System::Int64 _CafeIdForCafeRank_k__BackingField; // 0x50
		::System::Int64 _CafeRank_k__BackingField; // 0x58
		::System::Int64 _OpenedCafeId_k__BackingField; // 0x60

		::FlatData::OpenConditionContent* get_ContentType()
		{
			return ((::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HideWhenLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_HIDEWHENLOCKED_OFFSET))(nullptr);
		}

		::System::Void set_HideWhenLocked(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_HIDEWHENLOCKED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_AccountLevel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_ACCOUNTLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScenarioModeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Void set_ScenarioModeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_SCENARIOMODEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CampaignStageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CAMPAIGNSTAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CampaignStageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CAMPAIGNSTAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return ((::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MultipleConditionCheckType(::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::WeekDay* get_OpenDayOfWeek()
		{
			return ((::FlatData::WeekDay*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_OPENDAYOFWEEK_OFFSET))(nullptr);
		}

		::System::Void set_OpenDayOfWeek(::FlatData::WeekDay* arg)
		{
			((::System::Void(*)(::FlatData::WeekDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_OPENDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OpenHour()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_OPENHOUR_OFFSET))(nullptr);
		}

		::System::Void set_OpenHour(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_OPENHOUR_OFFSET))(arg, nullptr);
		}

		::FlatData::WeekDay* get_CloseDayOfWeek()
		{
			return ((::FlatData::WeekDay*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CLOSEDAYOFWEEK_OFFSET))(nullptr);
		}

		::System::Void set_CloseDayOfWeek(::FlatData::WeekDay* arg)
		{
			((::System::Void(*)(::FlatData::WeekDay*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CLOSEDAYOFWEEK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CloseHour()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CLOSEHOUR_OFFSET))(nullptr);
		}

		::System::Void set_CloseHour(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CLOSEHOUR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeIdForCafeRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CAFEIDFORCAFERANK_OFFSET))(nullptr);
		}

		::System::Void set_CafeIdForCafeRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CAFEIDFORCAFERANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CafeRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_CAFERANK_OFFSET))(nullptr);
		}

		::System::Void set_CafeRank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_CAFERANK_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OpenedCafeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_GET_OPENEDCAFEID_OFFSET))(nullptr);
		}

		::System::Void set_OpenedCafeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_SET_OPENEDCAFEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::OpenConditionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::OpenConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPENCONDITIONDB_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

