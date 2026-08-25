#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIWrapContent;
class MXButton;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Coroutine; }
class UIRewardSlot;
namespace UnityEngine { class Vector3; }

#define UIREWARDPOPUP_GETMOVELENGTH_OFFSET UNITYSDK_OFFSET(0x27B51D0)
#define UIREWARDPOPUP_GET_PARCELCOUNT_OFFSET UNITYSDK_OFFSET(0x27B5250)
#define UIREWARDPOPUP_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x27B52A0)
#define UIREWARDPOPUP_GET_ANOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x27B52B0)
#define UIREWARDPOPUP_SET_ANOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x27B52C0)
#define UIREWARDPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x27B52D0)
#define UIREWARDPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x27B5620)
#define UIREWARDPOPUP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27B57A0)
#define UIREWARDPOPUP_PREPAREREWARDS_OFFSET UNITYSDK_OFFSET(0x27B5D90)
#define UIREWARDPOPUP_INITSCROLLPOSITION_OFFSET UNITYSDK_OFFSET(0x27B5B50)
#define UIREWARDPOPUP_SHOWPARCELS_OFFSET UNITYSDK_OFFSET(0x27B5D20)
#define UIREWARDPOPUP_ACTIVATECONTINUE_OFFSET UNITYSDK_OFFSET(0x27B5E90)
#define UIREWARDPOPUP_UPDATENUMBEROFSLOTS_OFFSET UNITYSDK_OFFSET(0x27B6010)
#define UIREWARDPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27B6060)
#define UIREWARDPOPUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27B69E0)
#define UIREWARDPOPUP_ONCLICKCONTINUE_OFFSET UNITYSDK_OFFSET(0x27B56E0)
#define UIREWARDPOPUP_YIELDMOVE_OFFSET UNITYSDK_OFFSET(0x27B6DF0)
#define UIREWARDPOPUP_SKIPREWARDS_OFFSET UNITYSDK_OFFSET(0x27B6E90)
#define UIREWARDPOPUP_ACTIVATESLOTTOOLTIPS_OFFSET UNITYSDK_OFFSET(0x27B7460)
#define UIREWARDPOPUP_REPOSITIONBYTOOLTIP_OFFSET UNITYSDK_OFFSET(0x27B7610)
#define UIREWARDPOPUP_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27B7A90)
#define UIREWARDPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B7C00)
#define UIREWARDPOPUP__REPOSITIONBYTOOLTIP_G__SNAP|38_0_OFFSET UNITYSDK_OFFSET(0x27B79E0)

	inline static constexpr unsigned int UIRewardPopup_TypeDefinitionIndex = 7538;

	class UIRewardPopup : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0xD8
		UIWrapContent* wrapContent; // 0xE0
		MXButton* continueButton; // 0xE8
		UILabel* continueLabel; // 0xF0
		::UnityEngine::GameObject* continueButtonParent; // 0xF8
		MXButton* skipRewards; // 0x100
		::System::Single slotMoveDuration; // 0x108
		::System::Single slotDisplayDelay; // 0x10C
		::System::Int32 slotsDisplayCount; // 0x110
		::System::Action* onClickContinueAction; // 0x118
		::UnityEngine::GameObject* UIChildList; // 0x120
		::Il2CppArray<::System::Object*>* rewardSlots; // 0x128
		Il2CppObject* totalRewards; // 0x130
		::UnityEngine::Coroutine* showCoroutine; // 0x138
		::System::Boolean anotherButton; // 0x140
		Il2CppObject* activatedTooltipButtons; // 0x148

		::System::Single GetMoveLength(::System::Int32 arg)
		{
			return ((::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_GETMOVELENGTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ParcelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_GET_PARCELCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Boolean get_AnotherButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_GET_ANOTHERBUTTON_OFFSET))(nullptr);
		}

		::System::Void set_AnotherButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_SET_ANOTHERBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_PREPAREREWARDS_OFFSET))(nullptr);
		}

		::System::Void InitScrollPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_INITSCROLLPOSITION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ShowParcels()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_SHOWPARCELS_OFFSET))(nullptr);
		}

		::System::Void ActivateContinue(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_ACTIVATECONTINUE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateNumberOfSlots()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_UPDATENUMBEROFSLOTS_OFFSET))(nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClickContinue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_ONCLICKCONTINUE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* YieldMove(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_YIELDMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void SkipRewards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_SKIPREWARDS_OFFSET))(nullptr);
		}

		::System::Void ActivateSlotTooltips()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_ACTIVATESLOTTOOLTIPS_OFFSET))(nullptr);
		}

		::System::Void RepositionByTooltip(UIRewardSlot* arg)
		{
			((::System::Void(*)(UIRewardSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_REPOSITIONBYTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RepositionByTooltip_g__Snap|38_0(::UnityEngine::Vector3* arg, <>c__DisplayClass38_0&* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, <>c__DisplayClass38_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDPOPUP__REPOSITIONBYTOOLTIP_G__SNAP|38_0_OFFSET))(arg, arg2, nullptr);
		}

	};

