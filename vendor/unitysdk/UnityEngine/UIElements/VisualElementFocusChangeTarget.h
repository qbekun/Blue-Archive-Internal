#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class VisualElementFocusChangeTarget; }
namespace UnityEngine::UIElements { class FocusController; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_GETPOOLED_OFFSET UNITYSDK_OFFSET(0xA386DC0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA386E80)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_APPLYTO_OFFSET UNITYSDK_OFFSET(0xA386F10)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA386F40)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xA387010)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xA387020)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA387030)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusChangeTarget_TypeDefinitionIndex = 30252;

	class VisualElementFocusChangeTarget : public Il2CppObject
	{
	public:
		Il2CppObject* Pool; // 0x0
		::UnityEngine::UIElements::Focusable* _target_k__BackingField; // 0x18

		::UnityEngine::UIElements::VisualElementFocusChangeTarget* GetPooled(::UnityEngine::UIElements::Focusable* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElementFocusChangeTarget*(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_GETPOOLED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ApplyTo(::UnityEngine::UIElements::FocusController* arg, ::UnityEngine::UIElements::Focusable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::FocusController*, ::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_APPLYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::Focusable* get_target()
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void set_target(::UnityEngine::UIElements::Focusable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGETARGET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

