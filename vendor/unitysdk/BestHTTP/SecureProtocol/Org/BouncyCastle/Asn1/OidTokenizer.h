#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OIDTOKENIZER_GET_HASMORETOKENS_OFFSET UNITYSDK_OFFSET(0x7D98F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OIDTOKENIZER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x7D9870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OIDTOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D9840)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int OidTokenizer_TypeDefinitionIndex = 22827;

	class OidTokenizer : public Il2CppObject
	{
	public:
		::System::String* oid; // 0x10
		::System::Int32 index; // 0x18

		::System::Boolean get_HasMoreTokens()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OIDTOKENIZER_GET_HASMORETOKENS_OFFSET))(nullptr);
		}

		::System::String* NextToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OIDTOKENIZER_NEXTTOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_OIDTOKENIZER_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

