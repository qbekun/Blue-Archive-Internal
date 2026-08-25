#pragma once
#include "../../unitysdk.h"

#define SYSTEM_CONFIGURATION_APPSETTINGSREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB5B70)
#define SYSTEM_CONFIGURATION_APPSETTINGSREADER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9AB5BA0)

namespace System::Configuration
{
	inline static constexpr unsigned int AppSettingsReader_TypeDefinitionIndex = 30018;

	class AppSettingsReader : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPSETTINGSREADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* GetValue(::System::String* str, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPSETTINGSREADER_GETVALUE_OFFSET))(str, arg, nullptr);
		}

	};
}

