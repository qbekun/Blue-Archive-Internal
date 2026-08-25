#pragma once
#include "../../../unitysdk.h"

class MXButton;
class ButtonActivator;
namespace UnityEngine { class GameObject; }
namespace MXField::UI::Inventory { class UIEvidenceInventory; }
namespace MXField::UI::Inventory { class UIKeywordInventory; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xEAF3B0)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONOPENEDINTERNAL_OFFSET UNITYSDK_OFFSET(0xEAF440)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SETBUTTONSACTIVE_OFFSET UNITYSDK_OFFSET(0xEAF590)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0xEAF7D0)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY__ONCLICKEVIDENCE_G__SETACTIVE|29_0_OFFSET UNITYSDK_OFFSET(0xEAF800)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONCLICKKEYWORD_OFFSET UNITYSDK_OFFSET(0xEAF870)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEAFA30)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SET_PLAYUNLOCKEVIDENCEINVENTORY_OFFSET UNITYSDK_OFFSET(0xEAFA60)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY___N__0_OFFSET UNITYSDK_OFFSET(0xEAFA70)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY__ONCLICKKEYWORD_G__SETACTIVE|28_0_OFFSET UNITYSDK_OFFSET(0xEAFA80)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONCLICKEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEAFB00)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_COPLAYUNLOCKEVIDENCEINVENTORY_OFFSET UNITYSDK_OFFSET(0xEB0000)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SETSUBINVENTORYACTIVE_OFFSET UNITYSDK_OFFSET(0xEAF460)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_CO_LOADINGINTERNAL_OFFSET UNITYSDK_OFFSET(0xEB0090)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_INITOPENSEQUENCE_OFFSET UNITYSDK_OFFSET(0xEB0120)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_GET_PLAYUNLOCKEVIDENCEINVENTORY_OFFSET UNITYSDK_OFFSET(0xEB01E0)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_COPLAYINVENTORYSWITCHANIMATION_OFFSET UNITYSDK_OFFSET(0xEAF9A0)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SET_SWITCHANIMATIONCOROUTINE_OFFSET UNITYSDK_OFFSET(0xEB0210)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEB0230)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_START_OFFSET UNITYSDK_OFFSET(0xEB0270)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONDISABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xEB0560)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_GET_SWITCHANIMATIONCOROUTINE_OFFSET UNITYSDK_OFFSET(0xEB0660)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB0670)
#define MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_AWAKEINTERNAL_OFFSET UNITYSDK_OFFSET(0xEB0680)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIPopup_FieldInventory_TypeDefinitionIndex = 10796;

	class UIPopup_FieldInventory : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xE8
		ButtonActivator* evidenceButton; // 0xF0
		ButtonActivator* keywordButton; // 0xF8
		::UnityEngine::GameObject* evidenceTabLock; // 0x100
		::UnityEngine::GameObject* evidenceButtonObject; // 0x108
		::UnityEngine::GameObject* keywordButtonObject; // 0x110
		::MXField::UI::Inventory::UIEvidenceInventory* evidenceInventory; // 0x118
		::MXField::UI::Inventory::UIKeywordInventory* keywordInventory; // 0x120
		::UnityEngine::Animation* anim; // 0x128
		::UnityEngine::Animation* evidenceTabUnlockAnimation; // 0x130
		::UnityEngine::Animation* inventorySwitchAnimation; // 0x138
		::System::Boolean _PlayUnlockEvidenceInventory_k__BackingField; // 0x140
		::UnityEngine::Coroutine* _SwitchAnimationCoroutine_k__BackingField; // 0x148

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void OnOpenedInternal(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONOPENEDINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonsActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SETBUTTONSACTIVE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickEvidence_g__SetActive|29_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY__ONCLICKEVIDENCE_G__SETACTIVE|29_0_OFFSET))(nullptr);
		}

		::System::Void OnClickKeyword()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONCLICKKEYWORD_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_PlayUnlockEvidenceInventory(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SET_PLAYUNLOCKEVIDENCEINVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY___N__0_OFFSET))(nullptr);
		}

		::System::Void _OnClickKeyword_g__SetActive|28_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY__ONCLICKKEYWORD_G__SETACTIVE|28_0_OFFSET))(nullptr);
		}

		::System::Void OnClickEvidence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONCLICKEVIDENCE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayUnlockEvidenceInventory()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_COPLAYUNLOCKEVIDENCEINVENTORY_OFFSET))(nullptr);
		}

		::System::Void SetSubInventoryActive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SETSUBINVENTORYACTIVE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_LoadingInternal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_CO_LOADINGINTERNAL_OFFSET))(nullptr);
		}

		::System::Void InitOpenSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_INITOPENSEQUENCE_OFFSET))(nullptr);
		}

		::System::Boolean get_PlayUnlockEvidenceInventory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_GET_PLAYUNLOCKEVIDENCEINVENTORY_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayInventorySwitchAnimation(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_COPLAYINVENTORYSWITCHANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_SwitchAnimationCoroutine(::UnityEngine::Coroutine* arg)
		{
			((::System::Void(*)(::UnityEngine::Coroutine*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_SET_SWITCHANIMATIONCOROUTINE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_START_OFFSET))(nullptr);
		}

		::System::Void OnDisableInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_ONDISABLEINTERNAL_OFFSET))(nullptr);
		}

		::UnityEngine::Coroutine* get_SwitchAnimationCoroutine()
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_GET_SWITCHANIMATIONCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AwakeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_FIELDINVENTORY_AWAKEINTERNAL_OFFSET))(nullptr);
		}

	};
}

