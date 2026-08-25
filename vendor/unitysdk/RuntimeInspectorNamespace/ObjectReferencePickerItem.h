#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }
namespace RuntimeInspectorNamespace { class UISkin; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SET_REFERENCE_OFFSET UNITYSDK_OFFSET(0x9585B00)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9584BC0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_GET_REFERENCE_OFFSET UNITYSDK_OFFSET(0x9585B10)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x9585B20)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x9585B30)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SET_SKIN_OFFSET UNITYSDK_OFFSET(0x9584690)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x95854A0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM__AWAKE_B__17_0_OFFSET UNITYSDK_OFFSET(0x9585B40)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_GET_SKIN_OFFSET UNITYSDK_OFFSET(0x9585B50)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x9585B60)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ObjectReferencePickerItem_TypeDefinitionIndex = 35714;

	class ObjectReferencePickerItem : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Image* background; // 0x30
		::UnityEngine::UI::RawImage* texturePreview; // 0x38
		::UnityEngine::UI::LayoutElement* texturePreviewLayoutElement; // 0x40
		::UnityEngine::UI::Text* referenceNameText; // 0x48
		::System::Object* _Reference_k__BackingField; // 0x50
		::System::Int32 m_skinVersion; // 0x58
		::RuntimeInspectorNamespace::UISkin* m_skin; // 0x60
		::System::Boolean m_isSelected; // 0x68

		::System::Void set_Reference(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SET_REFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SET_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Reference()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_GET_REFERENCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSelected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_GET_ISSELECTED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Skin(::RuntimeInspectorNamespace::UISkin* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::UISkin*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SET_SKIN_OFFSET))(arg, nullptr);
		}

		::System::Void SetContent(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_SETCONTENT_OFFSET))(arg, str, nullptr);
		}

		::System::Void _Awake_b__17_0(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM__AWAKE_B__17_0_OFFSET))(arg, nullptr);
		}

		::RuntimeInspectorNamespace::UISkin* get_Skin()
		{
			return (return (::RuntimeInspectorNamespace::UISkin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_GET_SKIN_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEPICKERITEM_AWAKE_OFFSET))(nullptr);
		}

	};
}

