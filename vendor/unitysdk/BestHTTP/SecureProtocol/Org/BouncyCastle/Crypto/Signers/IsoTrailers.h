#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IDigest; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_CREATETRAILERMAP_OFFSET UNITYSDK_OFFSET(0x676E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x677450)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_NOTRAILERAVAILABLE_OFFSET UNITYSDK_OFFSET(0x6726B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_GETTRAILER_OFFSET UNITYSDK_OFFSET(0x672810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x6774A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	inline static constexpr unsigned int IsoTrailers_TypeDefinitionIndex = 22267;

	class IsoTrailers : public Il2CppObject
	{
	public:
		::System::Int32 TRAILER_IMPLICIT; // 0x0
		::System::Int32 TRAILER_RIPEMD160; // 0x0
		::System::Int32 TRAILER_RIPEMD128; // 0x0
		::System::Int32 TRAILER_SHA1; // 0x0
		::System::Int32 TRAILER_SHA256; // 0x0
		::System::Int32 TRAILER_SHA512; // 0x0
		::System::Int32 TRAILER_SHA384; // 0x0
		::System::Int32 TRAILER_WHIRLPOOL; // 0x0
		::System::Int32 TRAILER_SHA224; // 0x0
		::System::Int32 TRAILER_SHA512_224; // 0x0
		::System::Int32 TRAILER_SHA512_256; // 0x0
		::System::Collections::IDictionary* trailerMap; // 0x0

		::System::Collections::IDictionary* CreateTrailerMap()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_CREATETRAILERMAP_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean NoTrailerAvailable(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_NOTRAILERAVAILABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetTrailer(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_GETTRAILER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_SIGNERS_ISOTRAILERS_.CTOR_OFFSET))(nullptr);
		}

	};
}

