#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IMouseEvent; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDENTERLEAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDMOUSEOVERMOUSEOUT_OFFSET UNITYSDK_OFFSET(0xA3DE9A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventsHelper_TypeDefinitionIndex = 30507;

	class MouseEventsHelper : public Il2CppObject
	{
	public:
		::System::Void SendEnterLeave(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IMouseEvent* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IMouseEvent*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDENTERLEAVE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SendMouseOverMouseOut(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IMouseEvent* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IMouseEvent*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTSHELPER_SENDMOUSEOVERMOUSEOUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

