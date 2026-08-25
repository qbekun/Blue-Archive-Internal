#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Clickable; }
namespace UnityEngine::UIElements { class NavigationSubmitEvent; }
namespace UnityEngine::UIElements { class KeyDownEvent; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_BUTTON_GET_CLICKABLE_OFFSET UNITYSDK_OFFSET(0xA3A0190)
#define UNITYENGINE_UIELEMENTS_BUTTON_SET_CLICKABLE_OFFSET UNITYSDK_OFFSET(0xA3A01A0)
#define UNITYENGINE_UIELEMENTS_BUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A0210)
#define UNITYENGINE_UIELEMENTS_BUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A0220)
#define UNITYENGINE_UIELEMENTS_BUTTON_ONNAVIGATIONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA3A0400)
#define UNITYENGINE_UIELEMENTS_BUTTON_ONKEYDOWN_OFFSET UNITYSDK_OFFSET(0xA3A0440)
#define UNITYENGINE_UIELEMENTS_BUTTON_DOMEASURE_OFFSET UNITYSDK_OFFSET(0xA3A0550)
#define UNITYENGINE_UIELEMENTS_BUTTON_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A0620)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Button_TypeDefinitionIndex = 30312;

	class Button : public Il2CppObject
	{
	public:
		::System::String* ussClassName; // 0x0
		::UnityEngine::UIElements::Clickable* m_Clickable; // 0x478
		::System::String* NonEmptyString; // 0x8

		::UnityEngine::UIElements::Clickable* get_clickable()
		{
			return (return (::UnityEngine::UIElements::Clickable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_GET_CLICKABLE_OFFSET))(nullptr);
		}

		::System::Void set_clickable(::UnityEngine::UIElements::Clickable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Clickable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_SET_CLICKABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::NavigationSubmitEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_ONNAVIGATIONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::KeyDownEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_ONKEYDOWN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* DoMeasure(::System::Single arg, MeasureMode* arg, ::System::Single arg, MeasureMode* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Single, MeasureMode*, ::System::Single, MeasureMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_DOMEASURE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BUTTON_.CCTOR_OFFSET))(nullptr);
		}

	};
}

