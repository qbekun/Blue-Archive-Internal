#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAEncryptionPaddingMode_TypeDefinitionIndex = 24311;

	class RSAEncryptionPaddingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::RSAEncryptionPaddingMode* Pkcs1; // 0x0
		::System::Security::Cryptography::RSAEncryptionPaddingMode* Oaep; // 0x0

	};
}

