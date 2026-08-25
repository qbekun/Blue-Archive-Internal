#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IKeyWrapper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IBlockResult; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1KEYWRAPPER_GET_ALGORITHMDETAILS_OFFSET UNITYSDK_OFFSET(0x698290)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1KEYWRAPPER_WRAP_OFFSET UNITYSDK_OFFSET(0x698330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1KEYWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x6983E0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	inline static constexpr unsigned int Asn1KeyWrapper_TypeDefinitionIndex = 22389;

	class Asn1KeyWrapper : public Il2CppObject
	{
	public:
		::System::String* algorithm; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper; // 0x18

		::System::Object* get_AlgorithmDetails()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1KEYWRAPPER_GET_ALGORITHMDETAILS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockResult* Wrap(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockResult*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1KEYWRAPPER_WRAP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_ASN1KEYWRAPPER_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

