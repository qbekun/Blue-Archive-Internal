#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSASignaturePaddingMode_TypeDefinitionIndex = 24313;

	class RSASignaturePaddingMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::RSASignaturePaddingMode* Pkcs1; // 0x0
		::System::Security::Cryptography::RSASignaturePaddingMode* Pss; // 0x0

	};
}

