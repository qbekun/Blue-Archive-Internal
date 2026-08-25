#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECDomainParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class ECPublicKeyParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68DC30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68DDA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68DD10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x68DE40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_GET_Q_OFFSET UNITYSDK_OFFSET(0x68DED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x68DEE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x68DFC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x68E040)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	inline static constexpr unsigned int ECPublicKeyParameters_TypeDefinitionIndex = 22323;

	class ECPublicKeyParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* q; // 0x30

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_Q()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_GET_Q_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PARAMETERS_ECPUBLICKEYPARAMETERS_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

