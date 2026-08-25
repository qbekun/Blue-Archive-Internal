#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class AssistRewardExcel; }

#define MX_DATA_ASSISTREWARDINFO_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x180FF70)
#define MX_DATA_ASSISTREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x180A340)
#define MX_DATA_ASSISTREWARDINFO_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x180FF80)
#define MX_DATA_ASSISTREWARDINFO_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x180FF90)
#define MX_DATA_ASSISTREWARDINFO_SET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x180FFA0)

namespace MX::Data
{
	inline static constexpr unsigned int AssistRewardInfo_TypeDefinitionIndex = 15713;

	class AssistRewardInfo : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x18

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTREWARDINFO_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AssistRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AssistRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTREWARDINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTREWARDINFO_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTREWARDINFO_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ASSISTREWARDINFO_SET_REWARDPARCEL_OFFSET))(arg, nullptr);
		}

	};
}

