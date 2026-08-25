#pragma once
#include "../../../unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsnDecodeStatus_TypeDefinitionIndex = 29273;

	class AsnDecodeStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Security::Cryptography::AsnDecodeStatus* NotDecoded; // 0x0
		::System::Security::Cryptography::AsnDecodeStatus* Ok; // 0x0
		::System::Security::Cryptography::AsnDecodeStatus* BadAsn; // 0x0
		::System::Security::Cryptography::AsnDecodeStatus* BadTag; // 0x0
		::System::Security::Cryptography::AsnDecodeStatus* BadLength; // 0x0
		::System::Security::Cryptography::AsnDecodeStatus* InformationNotAvailable; // 0x0

	};
}

