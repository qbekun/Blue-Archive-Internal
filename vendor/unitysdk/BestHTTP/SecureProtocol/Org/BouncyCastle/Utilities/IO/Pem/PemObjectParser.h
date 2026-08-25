#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { class PemObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECTPARSER_PARSEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	inline static constexpr unsigned int PemObjectParser_TypeDefinitionIndex = 21607;

	class PemObjectParser : public Il2CppObject
	{
	public:
		::System::Object* ParseObject(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* arg)
		{
			return (return (::System::Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_IO_PEM_PEMOBJECTPARSER_PARSEOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

