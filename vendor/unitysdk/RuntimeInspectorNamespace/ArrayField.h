#pragma once
#include "../unitysdk.h"

namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }
namespace RuntimeInspectorNamespace { class BoundInputField; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONBOUND_OFFSET UNITYSDK_OFFSET(0x9567D60)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9567E10)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONUNBOUND_OFFSET UNITYSDK_OFFSET(0x9567FF0)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_CLEARELEMENTS_OFFSET UNITYSDK_OFFSET(0x9568070)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x9568250)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_SUPPORTSTYPE_OFFSET UNITYSDK_OFFSET(0x9568D80)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_GETTEMPLATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9568760)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_GENERATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x9568E60)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9569690)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONSKINCHANGED_OFFSET UNITYSDK_OFFSET(0x95697D0)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_OFFSET UNITYSDK_OFFSET(0x95698E0)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONSIZEINPUTBEINGCHANGED_OFFSET UNITYSDK_OFFSET(0x9569B80)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONDEPTHCHANGED_OFFSET UNITYSDK_OFFSET(0x9569C00)
#define RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9569C60)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int ArrayField_TypeDefinitionIndex = 35647;

	class ArrayField : public Il2CppObject
	{
	public:
		::UnityEngine::UI::LayoutElement* sizeLayoutElement; // 0xB8
		::UnityEngine::UI::Text* sizeText; // 0xC0
		::RuntimeInspectorNamespace::BoundInputField* sizeInput; // 0xC8
		::System::Boolean isArray; // 0xD0
		::System::Type* elementType; // 0xD8
		Il2CppObject* elementsExpandedStates; // 0xE0

		::System::Void OnBound(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONBOUND_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void OnUnbound()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONUNBOUND_OFFSET))(nullptr);
		}

		::System::Void ClearElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_CLEARELEMENTS_OFFSET))(nullptr);
		}

		::System::Boolean OnSizeChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONSIZECHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean SupportsType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_SUPPORTSTYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetTemplateElement(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_GETTEMPLATEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_GENERATEELEMENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void OnSkinChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONSKINCHANGED_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.EventSystems.IDropHandler.OnDrop(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_UNITYENGINE.EVENTSYSTEMS.IDROPHANDLER.ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Boolean OnSizeInputBeingChanged(::RuntimeInspectorNamespace::BoundInputField* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::RuntimeInspectorNamespace::BoundInputField*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONSIZEINPUTBEINGCHANGED_OFFSET))(arg, str, nullptr);
		}

		::System::Void OnDepthChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_ONDEPTHCHANGED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_ARRAYFIELD_.CTOR_OFFSET))(nullptr);
		}

	};
}

