#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Rect; }

#define FOCUSABLEHIERARCHYTRAVERSAL_VALIDATEHIERARCHYTRAVERSAL_OFFSET UNITYSDK_OFFSET(0xA4007A0)
#define FOCUSABLEHIERARCHYTRAVERSAL_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0xA400840)
#define FOCUSABLEHIERARCHYTRAVERSAL_ORDER_OFFSET UNITYSDK_OFFSET(0xA400940)
#define FOCUSABLEHIERARCHYTRAVERSAL_STRICTORDER_OFFSET UNITYSDK_OFFSET(0xA400DD0)
#define FOCUSABLEHIERARCHYTRAVERSAL_STRICTORDER_OFFSET UNITYSDK_OFFSET(0xA400A00)
#define FOCUSABLEHIERARCHYTRAVERSAL_TIEBREAKER_OFFSET UNITYSDK_OFFSET(0xA400C80)
#define FOCUSABLEHIERARCHYTRAVERSAL_GETBESTOVERALL_OFFSET UNITYSDK_OFFSET(0xA4001C0)

	inline static constexpr unsigned int FocusableHierarchyTraversal_TypeDefinitionIndex = 30560;

	class FocusableHierarchyTraversal : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* currentFocusable; // 0x10
		::UnityEngine::Rect* validRect; // 0x18
		::System::Boolean firstPass; // 0x28
		ChangeDirection* direction; // 0x30

		::System::Boolean ValidateHierarchyTraversal(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSABLEHIERARCHYTRAVERSAL_VALIDATEHIERARCHYTRAVERSAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSABLEHIERARCHYTRAVERSAL_VALIDATEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 Order(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSABLEHIERARCHYTRAVERSAL_ORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 StrictOrder(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSABLEHIERARCHYTRAVERSAL_STRICTORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 StrictOrder(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSABLEHIERARCHYTRAVERSAL_STRICTORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 TieBreaker(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSABLEHIERARCHYTRAVERSAL_TIEBREAKER_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* GetBestOverall(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + FOCUSABLEHIERARCHYTRAVERSAL_GETBESTOVERALL_OFFSET))(arg, arg, nullptr);
		}

	};

