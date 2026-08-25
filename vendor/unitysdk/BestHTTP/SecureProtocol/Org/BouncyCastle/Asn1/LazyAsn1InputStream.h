#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerSequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DefiniteLengthInputStream; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerSet; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DD810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7DD820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_CREATEDERSEQUENCE_OFFSET UNITYSDK_OFFSET(0x7DD830)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_CREATEDERSET_OFFSET UNITYSDK_OFFSET(0x7DD980)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int LazyAsn1InputStream_TypeDefinitionIndex = 22823;

	class LazyAsn1InputStream : public ::Unity::Jobs::IJobBurstSchedulableExtensions
	{
	public:
		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSequence*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_CREATEDERSEQUENCE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSet* CreateDerSet(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerSet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LAZYASN1INPUTSTREAM_CREATEDERSET_OFFSET))(arg, nullptr);
		}

	};
}

