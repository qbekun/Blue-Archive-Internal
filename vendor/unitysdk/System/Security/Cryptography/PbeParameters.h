#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_GET_ENCRYPTIONALGORITHM_OFFSET UNITYSDK_OFFSET(0x91BB8C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_GET_HASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x91BB8D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x91BB8E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x91BB8F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int PbeParameters_TypeDefinitionIndex = 24406;

	class PbeParameters : public Il2CppObject
	{
	public:
		::System::Security::Cryptography::PbeEncryptionAlgorithm* _EncryptionAlgorithm_k__BackingField; // 0x10
		::System::Security::Cryptography::HashAlgorithmName* _HashAlgorithm_k__BackingField; // 0x18
		::System::Int32 _IterationCount_k__BackingField; // 0x20

		::System::Security::Cryptography::PbeEncryptionAlgorithm* get_EncryptionAlgorithm()
		{
			return (return (::System::Security::Cryptography::PbeEncryptionAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_GET_ENCRYPTIONALGORITHM_OFFSET))(nullptr);
		}

		::System::Security::Cryptography::HashAlgorithmName* get_HashAlgorithm()
		{
			return (return (::System::Security::Cryptography::HashAlgorithmName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_GET_HASHALGORITHM_OFFSET))(nullptr);
		}

		::System::Int32 get_IterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_GET_ITERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::PbeEncryptionAlgorithm* arg, ::System::Security::Cryptography::HashAlgorithmName* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::PbeEncryptionAlgorithm*, ::System::Security::Cryptography::HashAlgorithmName*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_PBEPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

