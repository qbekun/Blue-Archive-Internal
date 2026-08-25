#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATATYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x617A10)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int SupplementalDataType_TypeDefinitionIndex = 22178;

	class SupplementalDataType : public Il2CppObject
	{
	public:
		::System::Int32 user_mapping_data; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_SUPPLEMENTALDATATYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

