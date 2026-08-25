#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainerEvent;
class UITexture;
class UISprite;
class UILabel;
class ButtonActivator;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace UnityEngine { class AnimationState; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::Data { class BGMPlayInfo; }
class UIEventCardShopObject;
class UIEventCardShopRewardHistoryPopup;
class UIEventCardShopRewardListPopup;

#define UIEVENTCARDSHOP_OPENEVENTCARDSHOP_OFFSET UNITYSDK_OFFSET(0x2484A10)
#define UIEVENTCARDSHOP_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2484C30)
#define UIEVENTCARDSHOP_ONCLICKTOTALREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0x2484C50)
#define UIEVENTCARDSHOP_GETPURCHASECOSTALLAMOUNT_OFFSET UNITYSDK_OFFSET(0x2484D40)
#define UIEVENTCARDSHOP_HANDLEEVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2484EA0)
#define UIEVENTCARDSHOP_REFRESHCARDSHOPOBJECTSSTATE_OFFSET UNITYSDK_OFFSET(0x24850D0)
#define UIEVENTCARDSHOP_CO_LOADSPINE_OFFSET UNITYSDK_OFFSET(0x24853B0)
#define UIEVENTCARDSHOP_CO_REQUESTCARDSHOPLIST_OFFSET UNITYSDK_OFFSET(0x2485440)
#define UIEVENTCARDSHOP_GETRESETEDANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x24854D0)
#define UIEVENTCARDSHOP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24855A0)
#define UIEVENTCARDSHOP__ONCLICKCARDSELECTALLBUTTON_G__ERROREVENTCONTENTCARDSHOPPURCHASEALL|56_1_OFFSET UNITYSDK_OFFSET(0x2485EA0)
#define UIEVENTCARDSHOP_GETPURCHASECOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x2485F50)
#define UIEVENTCARDSHOP_REFRESHSHUFFLEBUTTON_OFFSET UNITYSDK_OFFSET(0x2486170)
#define UIEVENTCARDSHOP_HANDLEEVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x24862B0)
#define UIEVENTCARDSHOP__ONCLICKTOTALREWARDBUTTON_G__ONEVENTCARDSHOPREWARDLISTPOPUPCLOSE|53_1_OFFSET UNITYSDK_OFFSET(0x24865C0)
#define UIEVENTCARDSHOP___N__0_OFFSET UNITYSDK_OFFSET(0x24865D0)
#define UIEVENTCARDSHOP_CO_SHOWPURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x2486500)
#define UIEVENTCARDSHOP__ONCLICKSHUFFLEBUTTON_G__ERROREVENTCONTENTCARDSHOPSHUFFLE|54_1_OFFSET UNITYSDK_OFFSET(0x2486600)
#define UIEVENTCARDSHOP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24866B0)
#define UIEVENTCARDSHOP_GETPURCHASECOST_OFFSET UNITYSDK_OFFSET(0x2487500)
#define UIEVENTCARDSHOP_REFRESHCOSTICON_OFFSET UNITYSDK_OFFSET(0x2486CF0)
#define UIEVENTCARDSHOP__ONOPENED_G__PLAYDIALOGDELAYED|35_0_OFFSET UNITYSDK_OFFSET(0x2486900)
#define UIEVENTCARDSHOP__ONCLICKREWARDHISTORYBUTTON_G__ONEVENTCARDSHOPREWARDHISTORYPOPUPCLOSE|52_1_OFFSET UNITYSDK_OFFSET(0x24875F0)
#define UIEVENTCARDSHOP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2487600)
#define UIEVENTCARDSHOP_SETDATA_OFFSET UNITYSDK_OFFSET(0x2487810)
#define UIEVENTCARDSHOP_SETREWARDHISTORYINFO_OFFSET UNITYSDK_OFFSET(0x24878D0)
#define UIEVENTCARDSHOP_REFRESHCOSTALL_OFFSET UNITYSDK_OFFSET(0x2486FD0)
#define UIEVENTCARDSHOP_ONCLICKCARDSELECTALLBUTTON_OFFSET UNITYSDK_OFFSET(0x2487960)
#define UIEVENTCARDSHOP_REFRESHCURRENCY_OFFSET UNITYSDK_OFFSET(0x2486970)
#define UIEVENTCARDSHOP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x2487D00)
#define UIEVENTCARDSHOP_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x2487D90)
#define UIEVENTCARDSHOP_SETCARDSHOPELEMENTLIST_OFFSET UNITYSDK_OFFSET(0x2487DC0)
#define UIEVENTCARDSHOP_ONCARDSHOPOBJECTSELECTED_OFFSET UNITYSDK_OFFSET(0x2487DE0)
#define UIEVENTCARDSHOP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2488050)
#define UIEVENTCARDSHOP_ONCLICKSHUFFLEBUTTON_OFFSET UNITYSDK_OFFSET(0x24882C0)
#define UIEVENTCARDSHOP_ONCLICKREWARDHISTORYBUTTON_OFFSET UNITYSDK_OFFSET(0x2488650)
#define UIEVENTCARDSHOP__ONCLICKREWARDHISTORYBUTTON_B__52_0_OFFSET UNITYSDK_OFFSET(0x2488740)
#define UIEVENTCARDSHOP__ONCLICKTOTALREWARDBUTTON_B__53_0_OFFSET UNITYSDK_OFFSET(0x2488C50)
#define UIEVENTCARDSHOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2488FF0)
#define UIEVENTCARDSHOP_ONCLICKCARDSELECTONEBUTTON_OFFSET UNITYSDK_OFFSET(0x24890D0)
#define UIEVENTCARDSHOP_REFRESHSELECTCARDBUTTON_OFFSET UNITYSDK_OFFSET(0x2487050)
#define UIEVENTCARDSHOP_ADDREWARDHISTORY_OFFSET UNITYSDK_OFFSET(0x2486450)
#define UIEVENTCARDSHOP_REFRESHCOSTONE_OFFSET UNITYSDK_OFFSET(0x2486F60)
#define UIEVENTCARDSHOP_HANDLEEVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2489480)
#define UIEVENTCARDSHOP__ONCLICKCARDSELECTONEBUTTON_G__ERROREVENTCONTENTCARDSHOPPURCHASE|55_0_OFFSET UNITYSDK_OFFSET(0x2489540)

	inline static constexpr unsigned int UIEventCardShop_TypeDefinitionIndex = 5709;

	class UIEventCardShop : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		MXButton* totalRewardButton; // 0xE0
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0xE8
		UITexture* bgTexture; // 0xF0
		UITexture* cardPanelBgTexture; // 0xF8
		UISprite* currencyIconSprite; // 0x100
		UILabel* currencyAmountLabel; // 0x108
		UITexture* titleImageTexture; // 0x110
		MXButton* rewardHistoryButton; // 0x118
		::Il2CppArray<::System::Object*>* cardShopObjects; // 0x120
		ButtonActivator* shuffleButton; // 0x128
		::UnityEngine::Animation* shuffleAnimation; // 0x130
		ButtonActivator* cardSelectOneButton; // 0x138
		::Il2CppArray<::System::Object*>* costOneAmountLabels; // 0x140
		ButtonActivator* cardSelectAllButton; // 0x148
		::Il2CppArray<::System::Object*>* costAllAmountLabels; // 0x150
		::Il2CppArray<::System::Object*>* costIconSprites; // 0x158
		::UnityEngine::Transform* spineOffsetTransform; // 0x160
		::UnityEngine::Transform* dialogOffsetTransform; // 0x168
		::System::Boolean useFlipAnimationDelay; // 0x170
		::System::Single flipAnimationDelay; // 0x174
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x178
		Il2CppObject* cardShopElementList; // 0x180
		::Il2CppArray<::System::Object*>* shuffleAnimationClipNames; // 0x188
		Il2CppObject* rewardHistory; // 0x190
		::System::Int32 selectedCardShopObjectIndex; // 0x198
		::System::Boolean preventDuplicateActionFlag; // 0x19C

		::System::Void OpenEventCardShop(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_OPENEVENTCARDSHOP_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickTotalRewardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONCLICKTOTALREWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Int64 GetPurchaseCostAllAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_GETPURCHASECOSTALLAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentCardShopShuffleResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_HANDLEEVENTCONTENTCARDSHOPSHUFFLERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCardShopObjectsState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_REFRESHCARDSHOPOBJECTSSTATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_CO_LOADSPINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_RequestCardShopList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_CO_REQUESTCARDSHOPLIST_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationState* GetResetedAnimationState(::System::Int32 arg)
		{
			return ((::UnityEngine::AnimationState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_GETRESETEDANIMATIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean _OnClickCardSelectAllButton_g__ErrorEventContentCardShopPurchaseAll|56_1(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONCLICKCARDSELECTALLBUTTON_G__ERROREVENTCONTENTCARDSHOPPURCHASEALL|56_1_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetPurchaseCostAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_GETPURCHASECOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Void RefreshShuffleButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_REFRESHSHUFFLEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentCardShopPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_HANDLEEVENTCONTENTCARDSHOPPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickTotalRewardButton_g__OnEventCardShopRewardListPopupClose|53_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONCLICKTOTALREWARDBUTTON_G__ONEVENTCARDSHOPREWARDLISTPOPUPCLOSE|53_1_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP___N__0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_ShowPurchasedResult(Il2CppObject* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::MX::GameLogic::Parcel::ParcelResultDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_CO_SHOWPURCHASEDRESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean _OnClickShuffleButton_g__ErrorEventContentCardShopShuffle|54_1(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONCLICKSHUFFLEBUTTON_G__ERROREVENTCONTENTCARDSHOPSHUFFLE|54_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetPurchaseCost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_GETPURCHASECOST_OFFSET))(nullptr);
		}

		::System::Void RefreshCostIcon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_REFRESHCOSTICON_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnOpened_g__PlayDialogDelayed|35_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONOPENED_G__PLAYDIALOGDELAYED|35_0_OFFSET))(nullptr);
		}

		::System::Void _OnClickRewardHistoryButton_g__OnEventCardShopRewardHistoryPopupClose|52_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONCLICKREWARDHISTORYBUTTON_G__ONEVENTCARDSHOPREWARDHISTORYPOPUPCLOSE|52_1_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewardHistoryInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_SETREWARDHISTORYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCostAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_REFRESHCOSTALL_OFFSET))(nullptr);
		}

		::System::Void OnClickCardSelectAllButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONCLICKCARDSELECTALLBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshCurrency()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_REFRESHCURRENCY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_CO_LOADING_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void SetCardShopElementList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_SETCARDSHOPELEMENTLIST_OFFSET))(arg, nullptr);
		}

		::System::Void OnCardShopObjectSelected(UIEventCardShopObject* arg)
		{
			((::System::Void(*)(UIEventCardShopObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONCARDSHOPOBJECTSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickShuffleButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONCLICKSHUFFLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickRewardHistoryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONCLICKREWARDHISTORYBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickRewardHistoryButton_b__52_0(UIEventCardShopRewardHistoryPopup* arg)
		{
			((::System::Void(*)(UIEventCardShopRewardHistoryPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONCLICKREWARDHISTORYBUTTON_B__52_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickTotalRewardButton_b__53_0(UIEventCardShopRewardListPopup* arg)
		{
			((::System::Void(*)(UIEventCardShopRewardListPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONCLICKTOTALREWARDBUTTON_B__53_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickCardSelectOneButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ONCLICKCARDSELECTONEBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshSelectCardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_REFRESHSELECTCARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void AddRewardHistory(::System::Int64 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_ADDREWARDHISTORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshCostOne()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_REFRESHCOSTONE_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventContentCardShopPurchaseAllResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP_HANDLEEVENTCONTENTCARDSHOPPURCHASEALLRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnClickCardSelectOneButton_g__ErrorEventContentCardShopPurchase|55_0(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTCARDSHOP__ONCLICKCARDSELECTONEBUTTON_G__ERROREVENTCONTENTCARDSHOPPURCHASE|55_0_OFFSET))(arg, nullptr);
		}

	};

