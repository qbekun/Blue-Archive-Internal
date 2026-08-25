#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9CA8280)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x9CA82B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x9CA84B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9CA86B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9CA88B0)
#define NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CA8B20)

namespace NPA::Editor::Auth
{
	inline static constexpr unsigned int NXPAccountLinkItemFocusRelatedEffect_TypeDefinitionIndex = 27152;

	class NXPAccountLinkItemFocusRelatedEffect : public Il2CppObject
	{
	public:
		Il2CppObject* listeners; // 0x18
		ETheme* style; // 0x20
		::System::Boolean isCursorEntered; // 0x24

		::System::Void Initialize(Il2CppObject* arg, ETheme* arg)
		{
			((::System::Void(*)(Il2CppObject*, ETheme*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTERENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTEREXIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_AUTH_NXPACCOUNTLINKITEMFOCUSRELATEDEFFECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

