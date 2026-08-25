#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RewardTag; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class ScenarioModeRewardExcel; }

#define MX_DATA_SCENARIOMODEREWARDINFO_GET_SCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x185B2B0)
#define MX_DATA_SCENARIOMODEREWARDINFO_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x185B2C0)
#define MX_DATA_SCENARIOMODEREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x185B2D0)
#define MX_DATA_SCENARIOMODEREWARDINFO_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0x185B3C0)
#define MX_DATA_SCENARIOMODEREWARDINFO_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x185B3D0)

namespace MX::Data
{
	inline static constexpr unsigned int ScenarioModeRewardInfo_TypeDefinitionIndex = 15885;

	class ScenarioModeRewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _ScenarioModeRewardId_k__BackingField; // 0x10
		::FlatData::RewardTag* _RewardTag_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x20
		::System::Boolean _IsDisplayed_k__BackingField; // 0x28

		::System::Int64 get_ScenarioModeRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEREWARDINFO_GET_SCENARIOMODEREWARDID_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEREWARDINFO_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ScenarioModeRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ScenarioModeRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEREWARDINFO_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIOMODEREWARDINFO_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

	};
}

