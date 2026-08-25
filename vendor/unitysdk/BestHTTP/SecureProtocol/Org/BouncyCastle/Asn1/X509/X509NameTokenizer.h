#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8112C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8112D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_HASMORETOKENS_OFFSET UNITYSDK_OFFSET(0x811370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_NEXTTOKEN_OFFSET UNITYSDK_OFFSET(0x8113A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	inline static constexpr unsigned int X509NameTokenizer_TypeDefinitionIndex = 22939;

	class X509NameTokenizer : public Il2CppObject
	{
	public:
		::System::String* value; // 0x10
		::System::Int32 index; // 0x18
		::System::Char separator; // 0x1C
		::System::Text::StringBuilder* buffer; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Char arg)
		{
			((::System::Void(*)(::System::String*, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean HasMoreTokens()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_HASMORETOKENS_OFFSET))(nullptr);
		}

		::System::String* NextToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_X509NAMETOKENIZER_NEXTTOKEN_OFFSET))(nullptr);
		}

	};
}

