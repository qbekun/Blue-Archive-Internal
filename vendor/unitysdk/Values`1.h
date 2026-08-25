#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }
namespace UnityEngine::UIElements { class EventBase; }

#define VALUES`1_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_GET_SAMEFUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_CONVERTUNITS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_SWAPFRAMESTATES_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_CLEAREVENTQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_QUEUETRANSITIONRUNEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_QUEUETRANSITIONSTARTEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_QUEUETRANSITIONENDEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_QUEUETRANSITIONCANCELEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_SENDTRANSITIONCANCELEVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_CANCELALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_CANCELALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_CANCELANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_UPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_GETALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_COMPUTEREVERSINGSHORTENINGFACTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_COMPUTEREVERSINGDURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_COMPUTEREVERSINGDELAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_STARTTRANSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_FORCECOMPUTEDSTYLEENDVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_PROCESSEVENTQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES`1_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Values`1_TypeDefinitionIndex = 30193;

	class Values`1 : public Il2CppObject
	{
	public:
		::System::Int64 m_CurrentTimeMs; // 0x0
		Il2CppObject* m_CurrentFrameEventsState; // 0x0
		Il2CppObject* m_NextFrameEventsState; // 0x0
		Il2CppObject* running; // 0x0
		Il2CppObject* completed; // 0x0

		::System::Boolean get_isEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_GET_ISEMPTY_OFFSET))(nullptr);
		}

		Il2CppObject* get_SameFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_GET_SAMEFUNC_OFFSET))(nullptr);
		}

		::System::Boolean ConvertUnits(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_CONVERTUNITS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SwapFrameStates()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_SWAPFRAMESTATES_OFFSET))(nullptr);
		}

		::System::Void QueueEvent(::UnityEngine::UIElements::EventBase* arg, ElementPropertyPair* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ElementPropertyPair*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_QUEUEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearEventQueue(ElementPropertyPair* arg)
		{
			((::System::Void(*)(ElementPropertyPair*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_CLEAREVENTQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void QueueTransitionRunEvent(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_QUEUETRANSITIONRUNEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QueueTransitionStartEvent(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_QUEUETRANSITIONSTARTEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QueueTransitionEndEvent(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_QUEUETRANSITIONENDEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void QueueTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_QUEUETRANSITIONCANCELEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SendTransitionCancelEvent(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_SENDTRANSITIONCANCELEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CancelAllAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_CANCELALLANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_CANCELALLANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_CANCELANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_UPDATEANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetAllAnimations(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_GETALLANIMATIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Single ComputeReversingShorteningFactor(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_COMPUTEREVERSINGSHORTENINGFACTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 ComputeReversingDuration(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_COMPUTEREVERSINGDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 ComputeReversingDelay(::System::Int32 arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_COMPUTEREVERSINGDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean StartTransition(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::System::Int32, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_STARTTRANSITION_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ForceComputedStyleEndValue(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_FORCECOMPUTEDSTYLEENDVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessEventQueue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_PROCESSEVENTQUEUE_OFFSET))(nullptr);
		}

		::System::Void UpdateProgress(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + VALUES`1_UPDATEPROGRESS_OFFSET))(arg, nullptr);
		}

	};

