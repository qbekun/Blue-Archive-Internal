#pragma once
#include "../unitysdk.h"

#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_REFERENCEDRAWERS_OFFSET UNITYSDK_OFFSET(0x95876B0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_EXPOSEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x95876C0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_STANDARDDRAWERS_OFFSET UNITYSDK_OFFSET(0x95876D0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x95876E0)
#define RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_HIDDENVARIABLES_OFFSET UNITYSDK_OFFSET(0x95876F0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int RuntimeInspectorSettings_TypeDefinitionIndex = 35721;

	class RuntimeInspectorSettings : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_standardDrawers; // 0x18
		::Il2CppArray<::System::Object*>* m_referenceDrawers; // 0x20
		::Il2CppArray<::System::Object*>* m_hiddenVariables; // 0x28
		::Il2CppArray<::System::Object*>* m_exposedVariables; // 0x30

		::Il2CppArray<::System::Object*>* get_ReferenceDrawers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_REFERENCEDRAWERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ExposedVariables()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_EXPOSEDVARIABLES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_StandardDrawers()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_STANDARDDRAWERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_HiddenVariables()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_RUNTIMEINSPECTORSETTINGS_GET_HIDDENVARIABLES_OFFSET))(nullptr);
		}

	};
}

