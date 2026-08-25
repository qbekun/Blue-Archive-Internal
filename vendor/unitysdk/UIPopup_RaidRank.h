#pragma once
#include "unitysdk.h"

class UILabel;
class IntTabController;
class UIPopup_RaidRankDetail;
class UIPopup_RaidRewardDetail;
class UIRaidRedDot;
namespace FlatData { class ContentType; }

#define UIPOPUP_RAIDRANK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x279AB20)
#define UIPOPUP_RAIDRANK_CANJUMP_OFFSET UNITYSDK_OFFSET(0x279AF20)
#define UIPOPUP_RAIDRANK_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x279AFF0)
#define UIPOPUP_RAIDRANK___N__0_OFFSET UNITYSDK_OFFSET(0x279B2C0)
#define UIPOPUP_RAIDRANK_ONOPENED_OFFSET UNITYSDK_OFFSET(0x279B2D0)
#define UIPOPUP_RAIDRANK_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x279B990)
#define UIPOPUP_RAIDRANK_SET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x279BA20)
#define UIPOPUP_RAIDRANK_GET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x279BA30)
#define UIPOPUP_RAIDRANK_.CTOR_OFFSET UNITYSDK_OFFSET(0x279BA40)

	inline static constexpr unsigned int UIPopup_RaidRank_TypeDefinitionIndex = 7459;

	class UIPopup_RaidRank : public Il2CppObject
	{
	public:
		UILabel* TitleLabel; // 0xD8
		IntTabController* TabController; // 0xE0
		UIPopup_RaidRankDetail* RaidRank; // 0xE8
		UIPopup_RaidRewardDetail* RaidReward; // 0xF0
		UIRaidRedDot* RewardRedDot; // 0xF8
		::FlatData::ContentType* _CurrentRaidType_k__BackingField; // 0x100

		::System::Void Initialize(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanJump()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_CANJUMP_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK___N__0_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRaidType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_SET_CURRENTRAIDTYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_CurrentRaidType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_GET_CURRENTRAIDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDRANK_.CTOR_OFFSET))(nullptr);
		}

	};

