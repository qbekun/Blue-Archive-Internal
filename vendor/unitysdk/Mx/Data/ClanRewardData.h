#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class ClanRewardExcel; }

#define MX_DATA_CLANREWARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1838CD0)
#define MX_DATA_CLANREWARDDATA_SET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1838D90)
#define MX_DATA_CLANREWARDDATA_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1838DA0)
#define MX_DATA_CLANREWARDDATA_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x1838DB0)
#define MX_DATA_CLANREWARDDATA_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1838DC0)

namespace MX::Data
{
	inline static constexpr unsigned int ClanRewardData_TypeDefinitionIndex = 15752;

	class ClanRewardData : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x18

		::System::Void .ctor(::MX::Data::Excel::ClanRewardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ClanRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANREWARDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RewardParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANREWARDDATA_SET_REWARDPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANREWARDDATA_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return (return (::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANREWARDDATA_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CLANREWARDDATA_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

	};
}

