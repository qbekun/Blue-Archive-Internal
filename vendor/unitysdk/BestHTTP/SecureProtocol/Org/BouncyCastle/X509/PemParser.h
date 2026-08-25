#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PEMPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x75CBA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PEMPARSER_READPEMOBJECT_OFFSET UNITYSDK_OFFSET(0x75CCB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PEMPARSER_READLINE_OFFSET UNITYSDK_OFFSET(0x75CEF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int PemParser_TypeDefinitionIndex = 21531;

	class PemParser : public Il2CppObject
	{
	public:
		::System::String* _header1; // 0x10
		::System::String* _header2; // 0x18
		::System::String* _footer1; // 0x20
		::System::String* _footer2; // 0x28

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PEMPARSER_.CTOR_OFFSET))(str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* ReadPemObject(::System::IO::Stream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PEMPARSER_READPEMOBJECT_OFFSET))(arg, nullptr);
		}

		::System::String* ReadLine(::System::IO::Stream* arg)
		{
			return (return (::System::String*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_PEMPARSER_READLINE_OFFSET))(arg, nullptr);
		}

	};
}

