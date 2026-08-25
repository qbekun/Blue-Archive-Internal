#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IPointerEvent; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDENTERLEAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDOVEROUT_OFFSET UNITYSDK_OFFSET(0xA3DE5D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerEventsHelper_TypeDefinitionIndex = 30508;

	class PointerEventsHelper : public Il2CppObject
	{
	public:
		::System::Void SendEnterLeave(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IPointerEvent* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IPointerEvent*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDENTERLEAVE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SendOverOut(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IPointerEvent* arg, ::UnityEngine::Vector2* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IPointerEvent*, ::UnityEngine::Vector2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTEREVENTSHELPER_SENDOVEROUT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

