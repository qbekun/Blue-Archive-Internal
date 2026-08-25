#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_SWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFDF40)
#define SYSTEM_DIAGNOSTICS_SWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFE060)
#define SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET UNITYSDK_OFFSET(0x9AFE340)
#define SYSTEM_DIAGNOSTICS_SWITCH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AFE850)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 29240;

	class Switch : public Il2CppObject
	{
	public:
		::System::String* description; // 0x10
		::System::String* displayName; // 0x18
		::System::String* switchValueString; // 0x20
		::System::String* defaultValue; // 0x28
		Il2CppObject* switches; // 0x0
		::System::Int32 s_LastCollectionCount; // 0x8

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_.CTOR_OFFSET))(str, str, str, nullptr);
		}

		::System::Void _pruneCachedSwitches()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH__PRUNECACHEDSWITCHES_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_SWITCH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

