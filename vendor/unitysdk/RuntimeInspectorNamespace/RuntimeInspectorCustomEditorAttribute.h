#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class RuntimeInspectorCustomEditorAttribute; }

#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_GET_INSPECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x9567C40)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9567C50)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_SYSTEM.ICOMPARABLE_RUNTIMEINSPECTORNAMESPACE.RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_.COMPARETO_OFFSET UNITYSDK_OFFSET(0x9567D20)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_GET_EDITORFORCHILDCLASSES_OFFSET UNITYSDK_OFFSET(0x9567D50)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RuntimeInspectorCustomEditorAttribute_TypeDefinitionIndex = 35643;

	class RuntimeInspectorCustomEditorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* m_inspectedType; // 0x10
		::System::Boolean m_editorForChildClasses; // 0x18
		::System::Int32 m_inspectedTypeDepth; // 0x1C

		::System::Type* get_InspectedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_GET_INSPECTEDTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.IComparable_RuntimeInspectorNamespace.RuntimeInspectorCustomEditorAttribute_.CompareTo(::RuntimeInspectorNamespace::RuntimeInspectorCustomEditorAttribute* arg)
		{
			return (return (::System::Int32(*)(::RuntimeInspectorNamespace::RuntimeInspectorCustomEditorAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_SYSTEM.ICOMPARABLE_RUNTIMEINSPECTORNAMESPACE.RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_.COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EditorForChildClasses()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORCUSTOMEDITORATTRIBUTE_GET_EDITORFORCHILDCLASSES_OFFSET))(nullptr);
		}

	};
}

