#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class ObjectField; }

#define RUNTIMEINSPECTORNAMESPACE_IRUNTIMEINSPECTORCUSTOMEDITOR_REFRESH_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_IRUNTIMEINSPECTORCUSTOMEDITOR_CLEANUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_IRUNTIMEINSPECTORCUSTOMEDITOR_GENERATEELEMENTS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int IRuntimeInspectorCustomEditor_TypeDefinitionIndex = 35644;

	class IRuntimeInspectorCustomEditor : public Il2CppObject
	{
	public:
		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_IRUNTIMEINSPECTORCUSTOMEDITOR_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Cleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_IRUNTIMEINSPECTORCUSTOMEDITOR_CLEANUP_OFFSET))(nullptr);
		}

		::System::Void GenerateElements(::RuntimeInspectorNamespace::ObjectField* arg)
		{
			((::System::Void(*)(::RuntimeInspectorNamespace::ObjectField*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_IRUNTIMEINSPECTORCUSTOMEDITOR_GENERATEELEMENTS_OFFSET))(arg, nullptr);
		}

	};
}

