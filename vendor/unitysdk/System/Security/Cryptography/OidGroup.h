#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int OidGroup_TypeDefinitionIndex = 29272;

	class OidGroup : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::OidGroup* All; // 0x0
		::System::Security::Cryptography::OidGroup* HashAlgorithm; // 0x0
		::System::Security::Cryptography::OidGroup* EncryptionAlgorithm; // 0x0
		::System::Security::Cryptography::OidGroup* PublicKeyAlgorithm; // 0x0
		::System::Security::Cryptography::OidGroup* SignatureAlgorithm; // 0x0
		::System::Security::Cryptography::OidGroup* Attribute; // 0x0
		::System::Security::Cryptography::OidGroup* ExtensionOrAttribute; // 0x0
		::System::Security::Cryptography::OidGroup* EnhancedKeyUsage; // 0x0
		::System::Security::Cryptography::OidGroup* Policy; // 0x0
		::System::Security::Cryptography::OidGroup* Template; // 0x0
		::System::Security::Cryptography::OidGroup* KeyDerivationFunction; // 0x0

	};
}

