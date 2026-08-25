#pragma once
#include "unitysdk.h"

class TooltipTargetParcelTracker;
namespace FlatData { class RewardTag; }
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define CAMPAIGNSTAGEUIOPENER_SET_ISCAMPAIGNMAINSTAGESTRATEGYFORCELY_OFFSET UNITYSDK_OFFSET(0x26BC120)
#define CAMPAIGNSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26BC130)
#define CAMPAIGNSTAGEUIOPENER_SET_PARCELTRACKER_OFFSET UNITYSDK_OFFSET(0x26BC140)
#define CAMPAIGNSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26BC150)
#define CAMPAIGNSTAGEUIOPENER_GET_MYREWARDTAG_OFFSET UNITYSDK_OFFSET(0x26BC160)
#define CAMPAIGNSTAGEUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26BC170)
#define CAMPAIGNSTAGEUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26BC230)
#define CAMPAIGNSTAGEUIOPENER_SET_MYREWARDTAG_OFFSET UNITYSDK_OFFSET(0x26BC4C0)
#define CAMPAIGNSTAGEUIOPENER_GET_ISCAMPAIGNMAINSTAGESTRATEGYFORCELY_OFFSET UNITYSDK_OFFSET(0x26BC4D0)

	inline static constexpr unsigned int CampaignStageUIOpener_TypeDefinitionIndex = 6922;

	class CampaignStageUIOpener : public Il2CppObject
	{
	public:
		TooltipTargetParcelTracker* _ParcelTracker_k__BackingField; // 0x18
		::FlatData::RewardTag* _MyRewardTag_k__BackingField; // 0x20
		::System::Boolean _IsCampaignMainStageStrategyForcely_k__BackingField; // 0x24

		::System::Void set_IsCampaignMainStageStrategyForcely(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_SET_ISCAMPAIGNMAINSTAGESTRATEGYFORCELY_OFFSET))(arg, nullptr);
		}

		TooltipTargetParcelTracker* get_ParcelTracker()
		{
			return ((TooltipTargetParcelTracker*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_GET_PARCELTRACKER_OFFSET))(nullptr);
		}

		::System::Void set_ParcelTracker(TooltipTargetParcelTracker* arg)
		{
			((::System::Void(*)(TooltipTargetParcelTracker*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_SET_PARCELTRACKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_MyRewardTag()
		{
			return ((::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_GET_MYREWARDTAG_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, ::System::Int64 arg3, ::FlatData::RewardTag* arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::FlatData::RewardTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void set_MyRewardTag(::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_SET_MYREWARDTAG_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCampaignMainStageStrategyForcely()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNSTAGEUIOPENER_GET_ISCAMPAIGNMAINSTAGESTRATEGYFORCELY_OFFSET))(nullptr);
		}

	};

