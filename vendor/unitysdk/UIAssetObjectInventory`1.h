#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define UIASSETOBJECTINVENTORY`1__ONCLICKCLOSEBUTTONOFITEMGRIDCLOSED_B__27_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKCLOSEBUTTONOFITEMGRIDOPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKFILTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1___N__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKLEVELUPBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKTRANSCENDENCEBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1__ONCLICKCLOSEBUTTONOFITEMGRIDOPEN_B__26_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_GET_GRIDOPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKLIMITBREAKBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONOPENED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1__ONCLICKSORTINGORDERCALLBACK_B__32_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKSORTINGORDERCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKCLOSEBUTTONOFITEMGRIDCLOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONGRIDCONTROLANIEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_YIELDCLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKSORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_PLAYGRIDCONTROLANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_ONCLICKENCHANTBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1__ONCLICKSORTINGORDERCALLBACK_B__32_1_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTINVENTORY`1_GET_GRIDCLOSED_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIAssetObjectInventory`1_TypeDefinitionIndex = 4319;

	class UIAssetObjectInventory`1 : public Il2CppObject
	{
	public:
		MXButton* LevelUpButton; // 0x0
		MXButton* LimitBreakButton; // 0x0
		MXButton* TranscendenceButton; // 0x0
		MXButton* SkillButton; // 0x0
		MXButton* EnchantButton; // 0x0
		Il2CppObject* gridClosed; // 0x0
		Il2CppObject* gridOpen; // 0x0
		::UnityEngine::Animation* GridControlAni; // 0x0
		::UnityEngine::GameObject* ItemEmptyIndicator; // 0x0
		::UnityEngine::GameObject* ItemNotEmptyIndicator; // 0x0
		::System::Boolean NeedGridAnimation; // 0x0
		::System::Int64 curSelected; // 0x0

		::System::Void _OnClickCloseButtonOfItemGridClosed_b__27_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1__ONCLICKCLOSEBUTTONOFITEMGRIDCLOSED_B__27_0_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButtonOfItemGridOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKCLOSEBUTTONOFITEMGRIDOPEN_OFFSET))(nullptr);
		}

		::System::Void OnClickFilterCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKFILTERCALLBACK_OFFSET))(nullptr);
		}

		::System::Void __n__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickLevelUpButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKLEVELUPBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickTranscendenceButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKTRANSCENDENCEBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickCloseButtonOfItemGridOpen_b__26_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1__ONCLICKCLOSEBUTTONOFITEMGRIDOPEN_B__26_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_GridOpen()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_GET_GRIDOPEN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickLimitBreakButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKLIMITBREAKBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSkillButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKSKILLBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void _OnClickSortingOrderCallback_b__32_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1__ONCLICKSORTINGORDERCALLBACK_B__32_0_OFFSET))(nullptr);
		}

		::System::Void OnClickSortingOrderCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKSORTINGORDERCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButtonOfItemGridClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKCLOSEBUTTONOFITEMGRIDCLOSED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OnGridControlAniEnd(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONGRIDCONTROLANIEND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* YieldClose(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_YIELDCLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSortCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKSORTCALLBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayGridControlAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_PLAYGRIDCONTROLANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEnchantButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_ONCLICKENCHANTBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OnClickSortingOrderCallback_b__32_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1__ONCLICKSORTINGORDERCALLBACK_B__32_1_OFFSET))(nullptr);
		}

		Il2CppObject* get_GridClosed()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTINVENTORY`1_GET_GRIDCLOSED_OFFSET))(nullptr);
		}

	};

