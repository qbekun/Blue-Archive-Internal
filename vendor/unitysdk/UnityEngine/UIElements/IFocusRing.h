#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_IFOCUSRING_GETFOCUSCHANGEDIRECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IFOCUSRING_GETNEXTFOCUSABLE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IFocusRing_TypeDefinitionIndex = 30098;

	class IFocusRing : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IFOCUSRING_GETFOCUSCHANGEDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IFOCUSRING_GETNEXTFOCUSABLE_OFFSET))(arg, arg, nullptr);
		}

	};
}

