#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6CE0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6D10)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6D40)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB6D70)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyNotFoundException_TypeDefinitionIndex = 30045;

	class SettingsPropertyNotFoundException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

