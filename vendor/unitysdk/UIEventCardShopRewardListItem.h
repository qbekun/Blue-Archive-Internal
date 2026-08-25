#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Transform; }
class UILabel;
class UITexture;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class EventContentCardInfo; }

#define UIEVENTCARDSHOPREWARDLISTITEM_SETTOTALREWARDPOPUPBTNROOTLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x248EE50)
#define UIEVENTCARDSHOPREWARDLISTITEM_ONCLICKTOTALREWARDPOPUPBUTTON_OFFSET UNITYSDK_OFFSET(0x248EFA0)
#define UIEVENTCARDSHOPREWARDLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x248F140)
#define UIEVENTCARDSHOPREWARDLISTITEM_SETREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x248E320)
#define UIEVENTCARDSHOPREWARDLISTITEM_GETTOTALREWARDLIST_OFFSET UNITYSDK_OFFSET(0x248F1C0)
#define UIEVENTCARDSHOPREWARDLISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x248F6C0)
#define UIEVENTCARDSHOPREWARDLISTITEM_SETHISTORYDATA_OFFSET UNITYSDK_OFFSET(0x248E480)
#define UIEVENTCARDSHOPREWARDLISTITEM_SETMAINREWARDCARD_OFFSET UNITYSDK_OFFSET(0x248F840)
#define UIEVENTCARDSHOPREWARDLISTITEM_SETTOTALREWARDDATA_OFFSET UNITYSDK_OFFSET(0x248F9A0)

	inline static constexpr unsigned int UIEventCardShopRewardListItem_TypeDefinitionIndex = 5721;

	class UIEventCardShopRewardListItem : public Il2CppObject
	{
	public:
		MXButton* totalRewardPopupBtn; // 0x18
		::UnityEngine::Transform* totalRewardPopupBtnRoot; // 0x20
		UILabel* cardName; // 0x28
		UITexture* cardImage; // 0x30
		::UnityEngine::GameObject* hasReward; // 0x38
		::UnityEngine::GameObject* emptyReward; // 0x40
		::UnityEngine::GameObject* rewardLine; // 0x48
		Il2CppObject* smallParcelCard; // 0x50
		Il2CppObject* showMoreRewardList; // 0x58

		::System::Void SetTotalRewardPopupBtnRootLocalScale(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_SETTOTALREWARDPOPUPBTNROOTLOCALSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClicktotalRewardPopupButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_ONCLICKTOTALREWARDPOPUPBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRewardState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_SETREWARDSTATE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTotalRewardList(::MX::Data::EventContentCardInfo* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::EventContentCardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_GETTOTALREWARDLIST_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetHistoryData(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_SETHISTORYDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetMainRewardCard(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_SETMAINREWARDCARD_OFFSET))(arg, nullptr);
		}

		::System::Void SetTotalRewardData(::MX::Data::EventContentCardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentCardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOPREWARDLISTITEM_SETTOTALREWARDDATA_OFFSET))(arg, nullptr);
		}

	};

