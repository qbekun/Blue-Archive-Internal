#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int PbeEncryptionAlgorithm_TypeDefinitionIndex = 24405;

	class PbeEncryptionAlgorithm : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::PbeEncryptionAlgorithm* Unknown; // 0x0
		::System::Security::Cryptography::PbeEncryptionAlgorithm* Aes128Cbc; // 0x0
		::System::Security::Cryptography::PbeEncryptionAlgorithm* Aes192Cbc; // 0x0
		::System::Security::Cryptography::PbeEncryptionAlgorithm* Aes256Cbc; // 0x0
		::System::Security::Cryptography::PbeEncryptionAlgorithm* TripleDes3KeyPkcs12; // 0x0

	};
}

