#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_RSAOAEPWRAPPERPROVIDER_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.OPERATORS.WRAPPERPROVIDER.CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x699340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_RSAOAEPWRAPPERPROVIDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x698BF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Operators
{
	inline static constexpr unsigned int RsaOaepWrapperProvider_TypeDefinitionIndex = 22393;

	class RsaOaepWrapperProvider : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestOid; // 0x10

		::System::Object* BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Operators.WrapperProvider.CreateWrapper(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			return (return (::System::Object*(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_RSAOAEPWRAPPERPROVIDER_BESTHTTP.SECUREPROTOCOL.ORG.BOUNCYCASTLE.CRYPTO.OPERATORS.WRAPPERPROVIDER.CREATEWRAPPER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_OPERATORS_RSAOAEPWRAPPERPROVIDER_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

