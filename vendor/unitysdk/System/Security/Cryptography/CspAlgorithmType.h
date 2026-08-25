#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CspAlgorithmType_TypeDefinitionIndex = 24386;

	class CspAlgorithmType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::CspAlgorithmType* Rsa; // 0x0
		::System::Security::Cryptography::CspAlgorithmType* Dss; // 0x0

	};
}

