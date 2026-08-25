#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RectTransform; }
namespace RuntimeInspectorNamespace { class PointerEventListener; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine { class Object; }

#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x9576490)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9576520)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_INSPECTREFERENCE_OFFSET UNITYSDK_OFFSET(0x9576540)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x9576600)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONDROP_OFFSET UNITYSDK_OFFSET(0x9576910)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_SHOWREFERENCEPICKER_OFFSET UNITYSDK_OFFSET(0x9576A00)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_REFRESH_OFFSET UNITYSDK_OFFSET(0x9576D60)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONREFERENCECHANGED_OFFSET UNITYSDK_OFFSET(0x9576E00)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9576FF0)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9577080)
#define RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD__SHOWREFERENCEPICKER_B__8_0_OFFSET UNITYSDK_OFFSET(0x95772D0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ObjectReferenceField_TypeDefinitionIndex = 35670;

	class ObjectReferenceField : public Il2CppObject
	{
	public:
		::UnityEngine::RectTransform* referencePickerArea; // 0x78
		::RuntimeInspectorNamespace::PointerEventListener* input; // 0x80
		::RuntimeInspectorNamespace::PointerEventListener* inspectReferenceButton; // 0x88
		::UnityEngine::UI::Image* inspectReferenceImage; // 0x90
		::UnityEngine::UI::Image* background; // 0x98
		::UnityEngine::UI::Text* referenceNameText; // 0xA0

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InspectReference(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_INSPECTREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void ShowReferencePicker(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_SHOWREFERENCEPICKER_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnReferenceChanged(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_ONREFERENCECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void _ShowReferencePicker_b__8_0(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_OBJECTREFERENCEFIELD__SHOWREFERENCEPICKER_B__8_0_OFFSET))(arg, nullptr);
		}

	};
}

