#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CipherMode_TypeDefinitionIndex = 24323;

	class CipherMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::CipherMode* CBC; // 0x0
		::System::Security::Cryptography::CipherMode* ECB; // 0x0
		::System::Security::Cryptography::CipherMode* OFB; // 0x0
		::System::Security::Cryptography::CipherMode* CFB; // 0x0
		::System::Security::Cryptography::CipherMode* CTS; // 0x0

	};
}

