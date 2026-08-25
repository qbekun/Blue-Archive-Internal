#pragma once
#include "../unitysdk.h"

#define SYSTEM_APPCONTEXTDEFAULTVALUES_POPULATEDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x93B0850)
#define SYSTEM_APPCONTEXTDEFAULTVALUES_TRYGETSWITCHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x93B0860)
#define SYSTEM_APPCONTEXTDEFAULTVALUES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93B0870)

namespace System
{
	inline static constexpr unsigned int AppContextDefaultValues_TypeDefinitionIndex = 23947;

	class AppContextDefaultValues : public Il2CppObject
	{
	public:
		::System::String* SwitchEnforceJapaneseEraYearRanges; // 0x0
		::System::String* SwitchFormatJapaneseFirstYearAsANumber; // 0x8
		::System::String* SwitchEnforceLegacyJapaneseDateParsing; // 0x10

		::System::Void PopulateDefaultValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXTDEFAULTVALUES_POPULATEDEFAULTVALUES_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSwitchOverride(::System::String* str, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXTDEFAULTVALUES_TRYGETSWITCHOVERRIDE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPCONTEXTDEFAULTVALUES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

