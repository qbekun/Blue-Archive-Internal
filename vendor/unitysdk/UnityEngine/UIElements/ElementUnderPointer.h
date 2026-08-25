#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Vector2&; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class ContextType; }

#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3DCE60)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3DCEC0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3DCEF0)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETEVENTPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xA3DD080)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETTEMPORARYELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3DD260)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3DD520)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET UNITYSDK_OFFSET(0xA3DD280)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_COMMITELEMENTUNDERPOINTERS_OFFSET UNITYSDK_OFFSET(0xA3DD540)
#define UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DED70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ElementUnderPointer_TypeDefinitionIndex = 30457;

	class ElementUnderPointer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_PendingTopElementUnderPointer; // 0x10
		::Il2CppArray<::System::Object*>* m_TopElementUnderPointer; // 0x18
		::Il2CppArray<::System::Object*>* m_TriggerPointerEvent; // 0x20
		::Il2CppArray<::System::Object*>* m_TriggerMouseEvent; // 0x28
		::Il2CppArray<::System::Object*>* m_PickingPointerPositions; // 0x30
		::Il2CppArray<::System::Object*>* m_IsPickingPointerTemporaries; // 0x38

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(::System::Int32 arg, ::UnityEngine::Vector2&* arg, bool&* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::System::Int32, ::UnityEngine::Vector2&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* GetTopElementUnderPointer(::System::Int32 arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETTOPELEMENTUNDERPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetEventPointerPosition(::UnityEngine::UIElements::EventBase* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_GETEVENTPOINTERPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void SetTemporaryElementUnderPointer(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETTEMPORARYELEMENTUNDERPOINTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetElementUnderPointer(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::UnityEngine::UIElements::EventBase* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::UnityEngine::UIElements::EventBase*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_SETELEMENTUNDERPOINTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void CommitElementUnderPointers(::UnityEngine::UIElements::EventDispatcher* arg, ::UnityEngine::UIElements::ContextType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventDispatcher*, ::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_COMMITELEMENTUNDERPOINTERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ELEMENTUNDERPOINTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

