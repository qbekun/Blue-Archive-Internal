#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int PaddingMode_TypeDefinitionIndex = 24324;

	class PaddingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::PaddingMode* None; // 0x0
		::System::Security::Cryptography::PaddingMode* PKCS7; // 0x0
		::System::Security::Cryptography::PaddingMode* Zeros; // 0x0
		::System::Security::Cryptography::PaddingMode* ANSIX923; // 0x0
		::System::Security::Cryptography::PaddingMode* ISO10126; // 0x0

	};
}

