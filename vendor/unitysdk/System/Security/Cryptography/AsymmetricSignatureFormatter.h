#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x918CAE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_SETKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x918CAF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_CREATESIGNATURE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricSignatureFormatter_TypeDefinitionIndex = 24319;

	class AsymmetricSignatureFormatter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_SETKEY_OFFSET))(arg, nullptr);
		}

		::System::Void SetHashAlgorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_SETHASHALGORITHM_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSignature(::System::Security::Cryptography::HashAlgorithm* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::HashAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_CREATESIGNATURE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreateSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICSIGNATUREFORMATTER_CREATESIGNATURE_OFFSET))(arg, nullptr);
		}

	};
}

