#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECTGENERATOR_GENERATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	inline static constexpr unsigned int PemObjectGenerator_TypeDefinitionIndex = 21606;

	class PemObjectGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECTGENERATOR_GENERATE_OFFSET))(nullptr);
		}

	};
}

