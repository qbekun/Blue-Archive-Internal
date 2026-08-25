#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AC470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION_CREATEDEFORMATTER_OFFSET UNITYSDK_OFFSET(0x91AC530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION_CREATEFORMATTER_OFFSET UNITYSDK_OFFSET(0x91AC570)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SignatureDescription_TypeDefinitionIndex = 24377;

	class RSAPKCS1SignatureDescription : public Il2CppObject
	{
	public:
		::System::String* _hashAlgorithm; // 0x30

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Security::Cryptography::AsymmetricSignatureDeformatter* CreateDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Security::Cryptography::AsymmetricSignatureDeformatter*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION_CREATEDEFORMATTER_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::AsymmetricSignatureFormatter* CreateFormatter(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::System::Security::Cryptography::AsymmetricSignatureFormatter*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SIGNATUREDESCRIPTION_CREATEFORMATTER_OFFSET))(arg, nullptr);
		}

	};
}

