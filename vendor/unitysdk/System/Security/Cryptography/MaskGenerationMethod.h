#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD_GENERATEMASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9194EB0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MaskGenerationMethod_TypeDefinitionIndex = 24348;

	class MaskGenerationMethod : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* GenerateMask(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD_GENERATEMASK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MASKGENERATIONMETHOD_.CTOR_OFFSET))(nullptr);
		}

	};
}

