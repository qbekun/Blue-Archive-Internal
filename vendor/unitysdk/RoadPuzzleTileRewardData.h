#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class RoadPuzzleTileRewardData;

#define ROADPUZZLETILEREWARDDATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x2187860)
#define ROADPUZZLETILEREWARDDATA_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x2187880)
#define ROADPUZZLETILEREWARDDATA_GET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0x2187890)
#define ROADPUZZLETILEREWARDDATA_SET_REWARDINFO_OFFSET UNITYSDK_OFFSET(0x21878A0)
#define ROADPUZZLETILEREWARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x21878B0)
#define ROADPUZZLETILEREWARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x21878C0)
#define ROADPUZZLETILEREWARDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2187950)

	inline static constexpr unsigned int RoadPuzzleTileRewardData_TypeDefinitionIndex = 4067;

	class RoadPuzzleTileRewardData : public Il2CppObject
	{
	public:
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _RewardInfo_k__BackingField; // 0x20

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEREWARDDATA_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEREWARDDATA_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RewardInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEREWARDDATA_GET_REWARDINFO_OFFSET))(nullptr);
		}

		::System::Void set_RewardInfo(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEREWARDDATA_SET_REWARDINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEREWARDDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexLocation* arg, ::MX::GameLogic::Parcel::ParcelInfo* arg2)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEREWARDDATA_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(RoadPuzzleTileRewardData* arg)
		{
			((::System::Void(*)(RoadPuzzleTileRewardData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEREWARDDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};

