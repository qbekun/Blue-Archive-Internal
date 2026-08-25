#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Services { class SharedConfiguration; }

#define MX_CORE_SERVICES_SHAREDCONFIGURATION_GET_ISRELEASECHARACTERONLY_OFFSET UNITYSDK_OFFSET(0x1017490)
#define MX_CORE_SERVICES_SHAREDCONFIGURATION_SETVALUE_OFFSET UNITYSDK_OFFSET(0x10174A0)
#define MX_CORE_SERVICES_SHAREDCONFIGURATION_GET_HOLDER_OFFSET UNITYSDK_OFFSET(0x1017500)
#define MX_CORE_SERVICES_SHAREDCONFIGURATION_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1017550)
#define MX_CORE_SERVICES_SHAREDCONFIGURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x10175E0)
#define MX_CORE_SERVICES_SHAREDCONFIGURATION_LOAD_OFFSET UNITYSDK_OFFSET(0x10175F0)

namespace MX::Core::Services
{
	inline static constexpr unsigned int SharedConfiguration_TypeDefinitionIndex = 12793;

	class SharedConfiguration : public Il2CppObject
	{
	public:
		::System::Boolean isReleaseCharacterOnly; // 0x10
		Il2CppObject* configTable; // 0x18

		::System::Boolean get_IsReleaseCharacterOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SHAREDCONFIGURATION_GET_ISRELEASECHARACTERONLY_OFFSET))(nullptr);
		}

		::System::Void SetValue(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SHAREDCONFIGURATION_SETVALUE_OFFSET))(str, str2, nullptr);
		}

		::MX::Core::Services::SharedConfiguration* get_Holder()
		{
			return ((::MX::Core::Services::SharedConfiguration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SHAREDCONFIGURATION_GET_HOLDER_OFFSET))(nullptr);
		}

		::System::String* GetValue(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SHAREDCONFIGURATION_GETVALUE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SHAREDCONFIGURATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_SHAREDCONFIGURATION_LOAD_OFFSET))(arg, nullptr);
		}

	};
}

