#pragma once
#include "../../../unitysdk.h"

#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x910C280)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET UNITYSDK_OFFSET(0x910C2C0)
#define MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET UNITYSDK_OFFSET(0x910C2D0)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int ValidationResult_TypeDefinitionIndex = 35791;

	class ValidationResult : public Il2CppObject
	{
	public:
		::System::Boolean trusted; // 0x10
		::System::Boolean user_denied; // 0x11
		::System::Int32 error_code; // 0x14
		Il2CppObject* policy_errors; // 0x18

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_Trusted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_TRUSTED_OFFSET))(nullptr);
		}

		::System::Boolean get_UserDenied()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_VALIDATIONRESULT_GET_USERDENIED_OFFSET))(nullptr);
		}

	};
}

