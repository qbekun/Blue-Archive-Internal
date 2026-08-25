#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6DA0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6DD0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6E00)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6E30)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyWrongTypeException_TypeDefinitionIndex = 30046;

	class SettingsPropertyWrongTypeException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

