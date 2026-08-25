#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventCallbackList; }
namespace UnityEngine::UIElements { class CallbackPhase; }
namespace UnityEngine::UIElements { class EventCallbackFunctorBase; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_TRICKLEDOWNCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA3DFEE0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_TRICKLEDOWNCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA3DFEF0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_BUBBLEUPCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA3DFF00)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_BUBBLEUPCALLBACKCOUNT_OFFSET UNITYSDK_OFFSET(0xA3DFF10)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DFB00)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DFA60)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA3DFF20)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_FIND_OFFSET UNITYSDK_OFFSET(0xA3DFF40)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0xA3E0010)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADD_OFFSET UNITYSDK_OFFSET(0xA3E0100)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0xA3DFB90)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA3E01C0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA3E0200)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0xA3DFDF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackList_TypeDefinitionIndex = 30469;

	class EventCallbackList : public Il2CppObject
	{
	public:
		Il2CppObject* m_List; // 0x10
		::System::Int32 _trickleDownCallbackCount_k__BackingField; // 0x18
		::System::Int32 _bubbleUpCallbackCount_k__BackingField; // 0x1C

		::System::Int32 get_trickleDownCallbackCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_TRICKLEDOWNCALLBACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_trickleDownCallbackCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_TRICKLEDOWNCALLBACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_bubbleUpCallbackCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_BUBBLEUPCALLBACKCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_bubbleUpCallbackCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_SET_BUBBLEUPCALLBACKCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::EventCallbackList* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventCallbackList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg, ::System::Delegate* arg, ::UnityEngine::UIElements::CallbackPhase* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CONTAINS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::EventCallbackFunctorBase* Find(::System::Int64 arg, ::System::Delegate* arg, ::UnityEngine::UIElements::CallbackPhase* arg)
		{
			return (return (::UnityEngine::UIElements::EventCallbackFunctorBase*(*)(::System::Int64, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_FIND_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Remove(::System::Int64 arg, ::System::Delegate* arg, ::UnityEngine::UIElements::CallbackPhase* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Delegate*, ::UnityEngine::UIElements::CallbackPhase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_REMOVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Add(::UnityEngine::UIElements::EventCallbackFunctorBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventCallbackFunctorBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddRange(::UnityEngine::UIElements::EventCallbackList* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventCallbackList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_ADDRANGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_COUNT_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventCallbackFunctorBase* get_Item(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::EventCallbackFunctorBase*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLIST_CLEAR_OFFSET))(nullptr);
		}

	};
}

