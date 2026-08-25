#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3870D0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA387170)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GET_DEFAULTFOCUSORDER_OFFSET UNITYSDK_OFFSET(0xA3871A0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_SET_DEFAULTFOCUSORDER_OFFSET UNITYSDK_OFFSET(0xA3871B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_FOCUSRINGAUTOINDEXSORT_OFFSET UNITYSDK_OFFSET(0xA3871C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_FOCUSRINGSORT_OFFSET UNITYSDK_OFFSET(0xA387800)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_DOUPDATE_OFFSET UNITYSDK_OFFSET(0xA387900)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_BUILDRINGFORSCOPERECURSIVE_OFFSET UNITYSDK_OFFSET(0xA3879E0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_SORTANDFLATTENSCOPELISTS_OFFSET UNITYSDK_OFFSET(0xA387D70)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETFOCUSABLEINTERNALINDEX_OFFSET UNITYSDK_OFFSET(0xA388080)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETFOCUSCHANGEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA388120)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETKEYDOWNFOCUSCHANGEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA3883C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETNEXTFOCUSABLE_OFFSET UNITYSDK_OFFSET(0xA388660)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETNEXTFOCUSABLEINTREE_OFFSET UNITYSDK_OFFSET(0xA388BA0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETPREVIOUSFOCUSABLEINTREE_OFFSET UNITYSDK_OFFSET(0xA388C70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusRing_TypeDefinitionIndex = 30255;

	class VisualElementFocusRing : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* root; // 0x10
		DefaultFocusOrder* _defaultFocusOrder_k__BackingField; // 0x18
		Il2CppObject* m_FocusRing; // 0x20

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg, DefaultFocusOrder* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, DefaultFocusOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return (return (::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GET_FOCUSCONTROLLER_OFFSET))(nullptr);
		}

		DefaultFocusOrder* get_defaultFocusOrder()
		{
			return (return (DefaultFocusOrder*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GET_DEFAULTFOCUSORDER_OFFSET))(nullptr);
		}

		::System::Void set_defaultFocusOrder(DefaultFocusOrder* arg)
		{
			((::System::Void(*)(DefaultFocusOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_SET_DEFAULTFOCUSORDER_OFFSET))(arg, nullptr);
		}

		::System::Int32 FocusRingAutoIndexSort(FocusRingRecord* arg, FocusRingRecord* arg)
		{
			return (return (::System::Int32(*)(FocusRingRecord*, FocusRingRecord*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_FOCUSRINGAUTOINDEXSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 FocusRingSort(FocusRingRecord* arg, FocusRingRecord* arg)
		{
			return (return (::System::Int32(*)(FocusRingRecord*, FocusRingRecord*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_FOCUSRINGSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_DOUPDATE_OFFSET))(nullptr);
		}

		::System::Void BuildRingForScopeRecursive(::UnityEngine::UIElements::VisualElement* arg, int32_t&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, int32_t&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_BUILDRINGFORSCOPERECURSIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SortAndFlattenScopeLists(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_SORTANDFLATTENSCOPELISTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetFocusableInternalIndex(::UnityEngine::UIElements::Focusable* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::UIElements::Focusable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETFOCUSABLEINTERNALINDEX_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETFOCUSCHANGEDIRECTION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::FocusChangeDirection* GetKeyDownFocusChangeDirection(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::UnityEngine::UIElements::FocusChangeDirection*(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETKEYDOWNFOCUSCHANGEDIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* arg, ::UnityEngine::UIElements::FocusChangeDirection* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETNEXTFOCUSABLE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetNextFocusableInTree(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETNEXTFOCUSABLEINTREE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::Focusable* GetPreviousFocusableInTree(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::UnityEngine::UIElements::Focusable*(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSRING_GETPREVIOUSFOCUSABLEINTREE_OFFSET))(arg, nullptr);
		}

	};
}

