#pragma once
#include "unitysdk.h"

class MXButton;
class SpineChatDialogContainerEvent;
namespace UnityEngine { class Transform; }
class UITexture;
class UILabel;
class UISprite;
namespace UnityEngine { class Animation; }
class ButtonActivator;
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class EventContentFortuneGachaModifyInfo; }
namespace MX::Data { class EventContentFortuneGachaShopInfo; }
namespace MX::Data { class EventContentFortuneGachaInfo; }
namespace MX::Data { class BGMPlayInfo; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace UnityEngine { class AnimationState; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define UIEVENTFORTUNEGACHASHOP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24A82B0)
#define UIEVENTFORTUNEGACHASHOP_ONCLICKROLLBARREL_OFFSET UNITYSDK_OFFSET(0x24A8540)
#define UIEVENTFORTUNEGACHASHOP_REFRESHCURRENCY_OFFSET UNITYSDK_OFFSET(0x24A8750)
#define UIEVENTFORTUNEGACHASHOP_ONCLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x24A8C10)
#define UIEVENTFORTUNEGACHASHOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A8C30)
#define UIEVENTFORTUNEGACHASHOP_GETBGMPLAYINFO_OFFSET UNITYSDK_OFFSET(0x24A8C40)
#define UIEVENTFORTUNEGACHASHOP_CO_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0x24A8C70)
#define UIEVENTFORTUNEGACHASHOP_CO_LOADSPINE_OFFSET UNITYSDK_OFFSET(0x24A8D10)
#define UIEVENTFORTUNEGACHASHOP_CO_STARTPURCHASEDINFO_OFFSET UNITYSDK_OFFSET(0x24A8DA0)
#define UIEVENTFORTUNEGACHASHOP_GETPURCHASECOST_OFFSET UNITYSDK_OFFSET(0x24A8AD0)
#define UIEVENTFORTUNEGACHASHOP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x24A8E40)
#define UIEVENTFORTUNEGACHASHOP_GETRESETEDANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x24A8F50)
#define UIEVENTFORTUNEGACHASHOP_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIEVENTFORTUNEGACHASHOP_OPENEVENTFORTUNEGACHASHOP_OFFSET UNITYSDK_OFFSET(0x24A9060)
#define UIEVENTFORTUNEGACHASHOP_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x24A9240)
#define UIEVENTFORTUNEGACHASHOP_CO_STARTSHOWPURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x24A9510)
#define UIEVENTFORTUNEGACHASHOP___N__0_OFFSET UNITYSDK_OFFSET(0x24A95B0)
#define UIEVENTFORTUNEGACHASHOP_WEBAPIERROREVENTCONTENTFORTUNEGACHASHOPPURCHASE_OFFSET UNITYSDK_OFFSET(0x24A95C0)
#define UIEVENTFORTUNEGACHASHOP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24A9680)
#define UIEVENTFORTUNEGACHASHOP_PURCHASEDRESULT_OFFSET UNITYSDK_OFFSET(0x24A96C0)
#define UIEVENTFORTUNEGACHASHOP_HASENOUGHRESOURCE_OFFSET UNITYSDK_OFFSET(0x24A99C0)
#define UIEVENTFORTUNEGACHASHOP_REQUESTEVENTCONTENTFORTUNEGACHAPURCHASE_OFFSET UNITYSDK_OFFSET(0x24A86A0)
#define UIEVENTFORTUNEGACHASHOP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x24A9C80)
#define UIEVENTFORTUNEGACHASHOP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x24A9EF0)
#define UIEVENTFORTUNEGACHASHOP__ONOPENED_G__PLAYDIALOGDELAYED|22_0_OFFSET UNITYSDK_OFFSET(0x24A9E80)
#define UIEVENTFORTUNEGACHASHOP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x24A9FA0)

	inline static constexpr unsigned int UIEventFortuneGachaShop_TypeDefinitionIndex = 5828;

	class UIEventFortuneGachaShop : public Il2CppObject
	{
	public:
		MXButton* backButton; // 0xD8
		SpineChatDialogContainerEvent* spineChatContainerEvent; // 0xE0
		::UnityEngine::Transform* spineOffsetTransform; // 0xE8
		::UnityEngine::Transform* dialogOffsetTransform; // 0xF0
		UITexture* titleImageTexture; // 0xF8
		UITexture* mainBgImageTexture; // 0x100
		UITexture* shopBgImageTexture; // 0x108
		UITexture* bucketImageTexture; // 0x110
		UILabel* titleLabel; // 0x118
		UISprite* currencyIconSprite; // 0x120
		UILabel* currencyAmountLabel; // 0x128
		::Il2CppArray<::System::Object*>* costIconSprites; // 0x130
		::Il2CppArray<::System::Object*>* costAmountLabels; // 0x138
		::UnityEngine::Animation* omikujiAnimation; // 0x140
		UITexture* omikujiPaperTexture; // 0x148
		ButtonActivator* rollBarrelButton; // 0x150
		::Il2CppArray<::System::Object*>* animationClipNames; // 0x158
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x160
		::MX::Data::EventContentFortuneGachaModifyInfo* fortuneGachModifyInfo; // 0x168
		::MX::Data::EventContentFortuneGachaShopInfo* fortuneGachaShopInfo; // 0x170
		::MX::Data::EventContentFortuneGachaInfo* fortuneGachaInfo; // 0x178

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickRollBarrel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_ONCLICKROLLBARREL_OFFSET))(nullptr);
		}

		::System::Void RefreshCurrency()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_REFRESHCURRENCY_OFFSET))(nullptr);
		}

		::System::Void OnClickBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_ONCLICKBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::BGMPlayInfo* GetBGMPlayInfo()
		{
			return ((::MX::Data::BGMPlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_GETBGMPLAYINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayAnimation(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_CO_PLAYANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadSpine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_CO_LOADSPINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_StartPurchasedInfo(::System::Int64 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_CO_STARTPURCHASEDINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* GetPurchaseCost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_GETPURCHASECOST_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_ONENABLE_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationState* GetResetedAnimationState(::System::Int32 arg)
		{
			return ((::UnityEngine::AnimationState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_GETRESETEDANIMATIONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentFortuneGachaPurchaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_HANDLEEVENTCONTENTFORTUNEGACHAPURCHASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenEventFortuneGachaShop(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_OPENEVENTFORTUNEGACHASHOP_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshCost()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_REFRESHCOST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_StartShowPurchasedResult(::System::Int32 arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_CO_STARTSHOWPURCHASEDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP___N__0_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorEventContentFortuneGachaShopPurchase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_WEBAPIERROREVENTCONTENTFORTUNEGACHASHOPPURCHASE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg, ::MX::Data::EventContentFortuneGachaModifyInfo* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::MX::Data::EventContentFortuneGachaModifyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PurchasedResult(::MX::Data::EventContentFortuneGachaShopInfo* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentFortuneGachaShopInfo*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_PURCHASEDRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasEnoughResource()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_HASENOUGHRESOURCE_OFFSET))(nullptr);
		}

		::System::Void RequestEventContentFortuneGachaPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_REQUESTEVENTCONTENTFORTUNEGACHAPURCHASE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _OnOpened_g__PlayDialogDelayed|22_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP__ONOPENED_G__PLAYDIALOGDELAYED|22_0_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTFORTUNEGACHASHOP_ONDISABLE_OFFSET))(nullptr);
		}

	};

