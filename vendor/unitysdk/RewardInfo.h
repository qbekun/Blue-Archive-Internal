#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }

#define REWARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1830BC0)
#define REWARDINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1830BD0)
#define REWARDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1830BE0)
#define REWARDINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1830BF0)
#define REWARDINFO_SET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1830C00)
#define REWARDINFO_GET_REWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x1830C10)

	inline static constexpr unsigned int RewardInfo_TypeDefinitionIndex = 15721;

	class RewardInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _Level_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelInfo* _RewardParcel_k__BackingField; // 0x20

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Level(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REWARDINFO_SET_LEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REWARDINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Level()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDINFO_GET_LEVEL_OFFSET))(nullptr);
		}

		::System::Void set_RewardParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + REWARDINFO_SET_REWARDPARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + REWARDINFO_GET_REWARDPARCEL_OFFSET))(nullptr);
		}

	};

