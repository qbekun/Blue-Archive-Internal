#pragma once
#include "../unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_DESTROYSELF_OFFSET UNITYSDK_OFFSET(0x9580200)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x9580250)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_GET_REFERENCES_OFFSET UNITYSDK_OFFSET(0x95803E0)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_ONDRAG_OFFSET UNITYSDK_OFFSET(0x95803F0)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9580430)
#define RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x9580440)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int DraggedReferenceItem_TypeDefinitionIndex = 35686;

	class DraggedReferenceItem : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_references; // 0x60

		::System::Void DestroySelf()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_DESTROYSELF_OFFSET))(nullptr);
		}

		::System::Void SetContent(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_SETCONTENT_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_References()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_GET_REFERENCES_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_DRAGGEDREFERENCEITEM_ONENDDRAG_OFFSET))(arg, nullptr);
		}

	};
}

