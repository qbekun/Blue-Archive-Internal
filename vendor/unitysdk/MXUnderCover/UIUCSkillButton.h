#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;
class UIButtonBindType;
namespace MXUnderCover { class UCItemModel; }
class CoroutineAsyncOperation;
class RefreshEventType;
namespace MXUnderCover { class ItemDataAsset; }
namespace MXUnderCover { class SkillUseParameter; }
namespace MXUnderCover { class BulletTimeEndMessage; }
namespace MXUnderCover { class AcquireItemMessage; }
class UCButtonVisualState;
namespace MXUnderCover { class StartLoadInvenMessage; }
namespace MXUnderCover { class UIUCMainButtonController; }
namespace MXUnderCover { class LoadItemMessage; }
namespace MXUnderCover { class SwitchedPlayerMessage; }

#define MXUNDERCOVER_UIUCSKILLBUTTON_APPLYREFRESHEVENT_OFFSET UNITYSDK_OFFSET(0xDC6240)
#define MXUNDERCOVER_UIUCSKILLBUTTON__SETEMPTY_B__18_1_OFFSET UNITYSDK_OFFSET(0xDC6560)
#define MXUNDERCOVER_UIUCSKILLBUTTON_AFTERCOOLTIME_OFFSET UNITYSDK_OFFSET(0xDC65B0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_REFRESHBUTTONEFFECT_OFFSET UNITYSDK_OFFSET(0xDC64B0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_SETCOOLTIME_OFFSET UNITYSDK_OFFSET(0xDC66E0)
#define MXUNDERCOVER_UIUCSKILLBUTTON__ONPRESSEND_B__32_0_OFFSET UNITYSDK_OFFSET(0xDC67E0)
#define MXUNDERCOVER_UIUCSKILLBUTTON__APPLYREFRESHEVENT_G__REFRESHBYPOLYMORPHON|22_0_OFFSET UNITYSDK_OFFSET(0xDC63F0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xDC1E30)
#define MXUNDERCOVER_UIUCSKILLBUTTON_BINDITEM_OFFSET UNITYSDK_OFFSET(0xDC20A0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_CHECKBINDTYPECORRECT_OFFSET UNITYSDK_OFFSET(0xDC6860)
#define MXUNDERCOVER_UIUCSKILLBUTTON__ONDRAGOUTINTERNAL_B__33_0_OFFSET UNITYSDK_OFFSET(0xDC68E0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_SET_ITEMMODEL_OFFSET UNITYSDK_OFFSET(0xDC6950)
#define MXUNDERCOVER_UIUCSKILLBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDC1D80)
#define MXUNDERCOVER_UIUCSKILLBUTTON_CO_USESKILL_OFFSET UNITYSDK_OFFSET(0xDC6970)
#define MXUNDERCOVER_UIUCSKILLBUTTON_SETCOUNTLABELS_OFFSET UNITYSDK_OFFSET(0xDC3380)
#define MXUNDERCOVER_UIUCSKILLBUTTON_ONBULLETTIMEEND_OFFSET UNITYSDK_OFFSET(0xDC6A20)
#define MXUNDERCOVER_UIUCSKILLBUTTON__ONPRESSEND_G__CHECKCANCEL|32_1_OFFSET UNITYSDK_OFFSET(0xDC6B50)
#define MXUNDERCOVER_UIUCSKILLBUTTON_SETBUTTONAFTERUSE_OFFSET UNITYSDK_OFFSET(0xDC6BE0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC6C70)
#define MXUNDERCOVER_UIUCSKILLBUTTON_ONPRESSEND_OFFSET UNITYSDK_OFFSET(0xDC6FD0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_GET_ITEMMODEL_OFFSET UNITYSDK_OFFSET(0xDC7210)
#define MXUNDERCOVER_UIUCSKILLBUTTON__ONPRESSEND_B__32_2_OFFSET UNITYSDK_OFFSET(0xDC7220)
#define MXUNDERCOVER_UIUCSKILLBUTTON_HANDLEACQUIREITEM_OFFSET UNITYSDK_OFFSET(0xDC7520)
#define MXUNDERCOVER_UIUCSKILLBUTTON_SETBUTTONVISUALSTATE_OFFSET UNITYSDK_OFFSET(0xDC75B0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_HANDLELOADINVEN_OFFSET UNITYSDK_OFFSET(0xDC3590)
#define MXUNDERCOVER_UIUCSKILLBUTTON_SETENABLE_OFFSET UNITYSDK_OFFSET(0xDC75E0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_ONDRAGOUTINTERNAL_OFFSET UNITYSDK_OFFSET(0xDC7600)
#define MXUNDERCOVER_UIUCSKILLBUTTON_INIT_OFFSET UNITYSDK_OFFSET(0xDC27D0)
#define MXUNDERCOVER_UIUCSKILLBUTTON_ONDESTROYINTERNAL_OFFSET UNITYSDK_OFFSET(0xDC7750)
#define MXUNDERCOVER_UIUCSKILLBUTTON_HANDLELOADITEM_OFFSET UNITYSDK_OFFSET(0xDC7960)
#define MXUNDERCOVER_UIUCSKILLBUTTON_ONSWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0xDC79F0)
#define MXUNDERCOVER_UIUCSKILLBUTTON__SETEMPTY_B__18_0_OFFSET UNITYSDK_OFFSET(0xDC7B00)
#define MXUNDERCOVER_UIUCSKILLBUTTON_RESETPRESS_OFFSET UNITYSDK_OFFSET(0xDC7B50)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCSkillButton_TypeDefinitionIndex = 10031;

	class UIUCSkillButton : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* CoolTimeObject; // 0xA8
		UITexture* CoolTimeBG; // 0xB0
		UILabel* CoolTimeLabel; // 0xB8
		::Il2CppArray<::System::Object*>* countLabels; // 0xC0
		::UnityEngine::GameObject* effect; // 0xC8
		UIButtonBindType* bindType; // 0xD0
		::MXUnderCover::UCItemModel* _ItemModel_k__BackingField; // 0xD8
		CoroutineAsyncOperation* useOperation; // 0xE0
		Il2CppObject* immediateSkillTargets; // 0xE8
		RefreshEventType* afterCooltimeRefresh; // 0xF0

		::System::Void ApplyRefreshEvent(RefreshEventType* arg)
		{
			((::System::Void(*)(RefreshEventType*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_APPLYREFRESHEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetEmpty_b__18_1(::MXUnderCover::ItemDataAsset* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON__SETEMPTY_B__18_1_OFFSET))(arg, nullptr);
		}

		::System::Void AfterCoolTime(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_AFTERCOOLTIME_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshButtonEffect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_REFRESHBUTTONEFFECT_OFFSET))(nullptr);
		}

		::System::Void SetCooltime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_SETCOOLTIME_OFFSET))(arg, nullptr);
		}

		::System::Void _OnPressEnd_b__32_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON__ONPRESSEND_B__32_0_OFFSET))(nullptr);
		}

		::System::Void _ApplyRefreshEvent_g__RefreshByPolymorphOn|22_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON__APPLYREFRESHEVENT_G__REFRESHBYPOLYMORPHON|22_0_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void BindItem(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_BINDITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckBindTypeCorrect(::MXUnderCover::UCItemModel* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_CHECKBINDTYPECORRECT_OFFSET))(arg, nullptr);
		}

		::System::Void _OnDragOutInternal_b__33_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON__ONDRAGOUTINTERNAL_B__33_0_OFFSET))(nullptr);
		}

		::System::Void set_ItemModel(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_SET_ITEMMODEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_UseSkill(::MXUnderCover::SkillUseParameter* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::SkillUseParameter*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_CO_USESKILL_OFFSET))(arg, nullptr);
		}

		::System::Void SetCountLabels()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_SETCOUNTLABELS_OFFSET))(nullptr);
		}

		::System::Void OnBulletTimeEnd(::MXUnderCover::BulletTimeEndMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::BulletTimeEndMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_ONBULLETTIMEEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnPressEnd_g__CheckCancel|32_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON__ONPRESSEND_G__CHECKCANCEL|32_1_OFFSET))(nullptr);
		}

		::System::Void SetButtonAfterUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_SETBUTTONAFTERUSE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnPressEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_ONPRESSEND_OFFSET))(nullptr);
		}

		::MXUnderCover::UCItemModel* get_ItemModel()
		{
			return ((::MXUnderCover::UCItemModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_GET_ITEMMODEL_OFFSET))(nullptr);
		}

		::System::Void _OnPressEnd_b__32_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON__ONPRESSEND_B__32_2_OFFSET))(nullptr);
		}

		::System::Void HandleAcquireItem(::MXUnderCover::AcquireItemMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::AcquireItemMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_HANDLEACQUIREITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonVisualState(UCButtonVisualState* arg)
		{
			((::System::Void(*)(UCButtonVisualState*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_SETBUTTONVISUALSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleLoadInven(::MXUnderCover::StartLoadInvenMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::StartLoadInvenMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_HANDLELOADINVEN_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_SETENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragOutInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_ONDRAGOUTINTERNAL_OFFSET))(nullptr);
		}

		::System::Void Init(::MXUnderCover::UIUCMainButtonController* arg)
		{
			((::System::Void(*)(::MXUnderCover::UIUCMainButtonController*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroyInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_ONDESTROYINTERNAL_OFFSET))(nullptr);
		}

		::System::Void HandleLoadItem(::MXUnderCover::LoadItemMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::LoadItemMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_HANDLELOADITEM_OFFSET))(arg, nullptr);
		}

		::System::Void OnSwitchPlayer(::MXUnderCover::SwitchedPlayerMessage* arg)
		{
			((::System::Void(*)(::MXUnderCover::SwitchedPlayerMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_ONSWITCHPLAYER_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SetEmpty_b__18_0(::MXUnderCover::ItemDataAsset* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON__SETEMPTY_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void ResetPress()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCSKILLBUTTON_RESETPRESS_OFFSET))(nullptr);
		}

	};
}

