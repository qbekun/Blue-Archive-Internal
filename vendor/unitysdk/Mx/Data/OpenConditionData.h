#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class OpenConditionDB; }
namespace FlatData { class OpenConditionContent; }
namespace MX::Data { class WorldRaidConditionInfo&; }
namespace MX::Data { class InteractiveWorldRaidConditionInfo&; }
namespace FlatData { class WorldRaidConditionType; }

#define MX_DATA_OPENCONDITIONDATA_GET_CONDITIONS_OFFSET UNITYSDK_OFFSET(0x191BA60)
#define MX_DATA_OPENCONDITIONDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x191BCB0)
#define MX_DATA_OPENCONDITIONDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x191BD80)
#define MX_DATA_OPENCONDITIONDATA_SYNCCONDITION_OFFSET UNITYSDK_OFFSET(0x191CE00)
#define MX_DATA_OPENCONDITIONDATA_CONDITION_OFFSET UNITYSDK_OFFSET(0x191D150)
#define MX_DATA_OPENCONDITIONDATA_GETEXCEL_OFFSET UNITYSDK_OFFSET(0x191D1E0)
#define MX_DATA_OPENCONDITIONDATA_TRYGETOPENCONDITIONSFROMCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x191D2B0)
#define MX_DATA_OPENCONDITIONDATA_TRYGETWORLDRAIDCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x191D420)
#define MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x191D480)
#define MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOBYSEASONID_OFFSET UNITYSDK_OFFSET(0x191D4E0)
#define MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOBYPHASEID_OFFSET UNITYSDK_OFFSET(0x191D620)
#define MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFO_OFFSET UNITYSDK_OFFSET(0x191D770)
#define MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x191D8B0)
#define MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOS_OFFSET UNITYSDK_OFFSET(0x191DA00)
#define MX_DATA_OPENCONDITIONDATA_TRYGETWORLDRAIDLOCKUICONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x191DB40)
#define MX_DATA_OPENCONDITIONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x191DBA0)

namespace MX::Data
{
	inline static constexpr unsigned int OpenConditionData_TypeDefinitionIndex = 16284;

	class OpenConditionData : public Il2CppObject
	{
	public:
		Il2CppObject* excelDictionary; // 0x28
		Il2CppObject* fileDBDictionary; // 0x30
		Il2CppObject* syncedDBDictionary; // 0x38
		Il2CppObject* worldRaidConditionInfoDic; // 0x40
		Il2CppObject* interactiveWorldRaidConditionInfoDic; // 0x48
		Il2CppObject* LockUIConditionDic; // 0x50

		Il2CppObject* get_Conditions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_GET_CONDITIONS_OFFSET))(nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Void SyncCondition(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_SYNCCONDITION_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::OpenConditionDB* Condition(::FlatData::OpenConditionContent* arg)
		{
			return (return (::MX::GameLogic::DBModel::OpenConditionDB*(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_CONDITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetExcel(::FlatData::OpenConditionContent* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_GETEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetOpenConditionsFromCampaignStageId(::System::Int64 arg, ::System::Boolean arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Boolean, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETOPENCONDITIONSFROMCAMPAIGNSTAGEID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetWorldRaidConditionInfo(::System::Int64 arg, ::MX::Data::WorldRaidConditionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::WorldRaidConditionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETWORLDRAIDCONDITIONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidConditionInfo(::System::Int64 arg, ::MX::Data::InteractiveWorldRaidConditionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::InteractiveWorldRaidConditionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidConditionInfoBySeasonId(::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOBYSEASONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidConditionInfoByPhaseId(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOBYPHASEID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidConditionInfo(::System::Int64 arg, ::System::Int64 arg, ::FlatData::WorldRaidConditionType* arg, ::System::Int64 arg, ::MX::Data::InteractiveWorldRaidConditionInfo&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::FlatData::WorldRaidConditionType*, ::System::Int64, ::MX::Data::InteractiveWorldRaidConditionInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFO_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidConditionInfos(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetInteractiveWorldRaidConditionInfos(::FlatData::WorldRaidConditionType* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::WorldRaidConditionType*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETINTERACTIVEWORLDRAIDCONDITIONINFOS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetWorldRaidLockUIConditionList(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_TRYGETWORLDRAIDLOCKUICONDITIONLIST_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_OPENCONDITIONDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

