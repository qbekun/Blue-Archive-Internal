#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ECBASISTYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x6102A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ECBASISTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x6102C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ECBasisType_TypeDefinitionIndex = 22129;

	class ECBasisType : public Il2CppObject
	{
	public:
		::System::Byte ec_basis_trinomial; // 0x0
		::System::Byte ec_basis_pentanomial; // 0x0

		::System::Boolean IsValid(::System::Byte arg)
		{
			return (return (::System::Boolean(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ECBASISTYPE_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_ECBASISTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

