#pragma once
#include "unitysdk.h"

class UIGrid;
class UIGachaItem;
namespace UnityEngine { class GameObject; }
class MXButton;
class UIGachaPopupRetry;
class UITexture;
class UILabel;
class UIBeforehandGacha;
namespace UnityEngine { class Transform; }
class UIRewardPopup;
namespace MX::Data::Excel { class ShopRecruitExcel; }
namespace MX::Data { class PickupDuplicateBonusExcelData; }

#define UIGACHARESULT_AWAKE_OFFSET UNITYSDK_OFFSET(0xA95130)
#define UIGACHARESULT_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA95460)
#define UIGACHARESULT_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0xA954E0)
#define UIGACHARESULT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA95570)
#define UIGACHARESULT_INITIALIZEBEFOREHANDGACHA_OFFSET UNITYSDK_OFFSET(0xA96040)
#define UIGACHARESULT_SETUI_OFFSET UNITYSDK_OFFSET(0xA95A00)
#define UIGACHARESULT_SETRECRUITPOINT_OFFSET UNITYSDK_OFFSET(0xA96D30)
#define UIGACHARESULT_ISHIDERETRYBUTTON_OFFSET UNITYSDK_OFFSET(0xA97090)
#define UIGACHARESULT_BEFOREHANDGACHACOMPLETE_OFFSET UNITYSDK_OFFSET(0xA97380)
#define UIGACHARESULT_REFRESHGACHAITEMLIST_OFFSET UNITYSDK_OFFSET(0xA96570)
#define UIGACHARESULT_REFRESHGACHAITEMLIST_OFFSET UNITYSDK_OFFSET(0xA95B50)
#define UIGACHARESULT_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0xA975E0)
#define UIGACHARESULT_ONCLICKSHOWREWARDBUTTON_OFFSET UNITYSDK_OFFSET(0xA97710)
#define UIGACHARESULT_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA97920)
#define UIGACHARESULT_ONCLICKRETRYBUTTON_OFFSET UNITYSDK_OFFSET(0xA97BF0)
#define UIGACHARESULT_SETREWARDPOPUPSTATE_OFFSET UNITYSDK_OFFSET(0xA97EE0)
#define UIGACHARESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA98000)
#define UIGACHARESULT__REFRESHGACHAITEMLIST_B__31_0_OFFSET UNITYSDK_OFFSET(0xA98130)
#define UIGACHARESULT__ONCLICKSHOWREWARDBUTTON_B__34_0_OFFSET UNITYSDK_OFFSET(0xA98170)

	inline static constexpr unsigned int UIGachaResult_TypeDefinitionIndex = 7949;

	class UIGachaResult : public Il2CppObject
	{
	public:
		UIGrid* gachaItemGrid; // 0xD8
		UIGachaItem* gachaItemPrefab; // 0xE0
		::UnityEngine::GameObject* RewardPhaseButtonRoot; // 0xE8
		MXButton* showRewardButton; // 0xF0
		::UnityEngine::GameObject* EndPhaseButtonRoot; // 0xF8
		UIGrid* endPhaseButtonGrid; // 0x100
		MXButton* closeButton; // 0x108
		MXButton* retryButton; // 0x110
		UIGachaPopupRetry* retryPopup; // 0x118
		::UnityEngine::GameObject* recruitPointRoot; // 0x120
		UITexture* recruitPointIcon; // 0x128
		UILabel* recruitPointNameLabel; // 0x130
		UILabel* recruitPointLabel; // 0x138
		::UnityEngine::GameObject* normalBtn; // 0x140
		UIBeforehandGacha* beforehandGacha; // 0x148
		::UnityEngine::Transform* defaultEndPhaseButtonRootParent; // 0x150
		Il2CppObject* gachaItemList; // 0x158
		Il2CppObject* rewardList; // 0x160
		::System::Boolean hasReward; // 0x168
		UIRewardPopup* rewardPopup; // 0x170
		::MX::Data::Excel::ShopRecruitExcel* curShopRecruitExcel; // 0x178
		Il2CppObject* rewardConfirmDataList; // 0x188

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Directing()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_CO_DIRECTING_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeBeforehandGacha()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_INITIALIZEBEFOREHANDGACHA_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_SETUI_OFFSET))(nullptr);
		}

		::System::Void SetRecruitPoint()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_SETRECRUITPOINT_OFFSET))(nullptr);
		}

		::System::Boolean IsHideRetryButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_ISHIDERETRYBUTTON_OFFSET))(nullptr);
		}

		::System::Void BeforehandGachaComplete(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_BEFOREHANDGACHACOMPLETE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshGachaItemList(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_REFRESHGACHAITEMLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshGachaItemList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_REFRESHGACHAITEMLIST_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickShowRewardButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_ONCLICKSHOWREWARDBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickRetryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_ONCLICKRETRYBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetRewardPopupState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_SETREWARDPOPUPSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshGachaItemList_b__31_0(::MX::Data::PickupDuplicateBonusExcelData* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::PickupDuplicateBonusExcelData*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT__REFRESHGACHAITEMLIST_B__31_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickShowRewardButton_b__34_0(UIRewardPopup* arg)
		{
			((::System::Void(*)(UIRewardPopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIGACHARESULT__ONCLICKSHOWREWARDBUTTON_B__34_0_OFFSET))(arg, nullptr);
		}

	};

