#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MissionCompleteUIPrefabType; }
namespace MX::Data::Excel { class WelcomeCampaignMissionExcel; }
namespace MX::Data { class WelcomeCampaignSeasonInfo; }

#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_ISCOMPLETECONDITIONDAYBLOCK_OFFSET UNITYSDK_OFFSET(0x1863690)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_ISCOMPLETECONDITIONDAYBLOCK_OFFSET UNITYSDK_OFFSET(0x18636A0)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x18636B0)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_DAY_OFFSET UNITYSDK_OFFSET(0x18636C0)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18636D0)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x1864120)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_COMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET UNITYSDK_OFFSET(0x18641B0)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_COMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET UNITYSDK_OFFSET(0x18641C0)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_DAY_OFFSET UNITYSDK_OFFSET(0x18641D0)
#define MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x18641E0)

namespace MX::Data
{
	inline static constexpr unsigned int WelcomeCampaignMissionInfo_TypeDefinitionIndex = 15918;

	class WelcomeCampaignMissionInfo : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0xF8
		::System::Int32 _Day_k__BackingField; // 0x100
		::System::Boolean _IsCompleteConditionDayBlock_k__BackingField; // 0x104
		::FlatData::MissionCompleteUIPrefabType* _CompleteConditionParameterUIPrefabType_k__BackingField; // 0x108

		::System::Void set_IsCompleteConditionDayBlock(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_ISCOMPLETECONDITIONDAYBLOCK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleteConditionDayBlock()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_ISCOMPLETECONDITIONDAYBLOCK_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int32 get_Day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_DAY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WelcomeCampaignMissionExcel* arg, ::MX::Data::WelcomeCampaignSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WelcomeCampaignMissionExcel*, ::MX::Data::WelcomeCampaignSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

		::FlatData::MissionCompleteUIPrefabType* get_CompleteConditionParameterUIPrefabType()
		{
			return (return (::FlatData::MissionCompleteUIPrefabType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_GET_COMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CompleteConditionParameterUIPrefabType(::FlatData::MissionCompleteUIPrefabType* arg)
		{
			((::System::Void(*)(::FlatData::MissionCompleteUIPrefabType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_COMPLETECONDITIONPARAMETERUIPREFABTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Day(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_DAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WELCOMECAMPAIGNMISSIONINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

	};
}

