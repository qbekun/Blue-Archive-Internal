#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class UISkin; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x95811F0)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_SET_REFERENCES_OFFSET UNITYSDK_OFFSET(0x9581230)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x9581240)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_GET_REFERENCES_OFFSET UNITYSDK_OFFSET(0x9581280)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9581290)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_.CTOR_OFFSET UNITYSDK_OFFSET(0x9581430)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_CREATEREFERENCEITEMCOROUTINE_OFFSET UNITYSDK_OFFSET(0x95813A0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int DraggedReferenceSourceUI_TypeDefinitionIndex = 35690;

	class DraggedReferenceSourceUI : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_references; // 0x18
		::RuntimeInspectorNamespace::UISkin* draggedReferenceSkin; // 0x20
		::System::Single holdTime; // 0x28
		::System::Collections::IEnumerator* pointerHeldCoroutine; // 0x30

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_ONBEGINDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void set_References(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_SET_REFERENCES_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_ONPOINTERUP_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_References()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_GET_REFERENCES_OFFSET))(nullptr);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_ONPOINTERDOWN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CreateReferenceItemCoroutine(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCESOURCEUI_CREATEREFERENCEITEMCOROUTINE_OFFSET))(arg, nullptr);
		}

	};
}

