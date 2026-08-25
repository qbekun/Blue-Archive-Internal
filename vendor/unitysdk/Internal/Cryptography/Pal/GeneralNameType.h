#pragma once
#include "../../../unitysdk.h"

namespace Internal::Cryptography::Pal { class GeneralNameType; }

namespace Internal::Cryptography::Pal
{
	inline static constexpr unsigned int GeneralNameType_TypeDefinitionIndex = 29157;

	class GeneralNameType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Internal::Cryptography::Pal::GeneralNameType* OtherName; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* Rfc822Name; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* Email; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* DnsName; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* X400Address; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* DirectoryName; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* EdiPartyName; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* UniformResourceIdentifier; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* IPAddress; // 0x0
		::Internal::Cryptography::Pal::GeneralNameType* RegisteredId; // 0x0

	};
}

