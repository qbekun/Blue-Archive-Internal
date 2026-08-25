#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PbmParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IStreamCalculator; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACFACTORY_CREATECALCULATOR_OFFSET UNITYSDK_OFFSET(0x78C880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACFACTORY_GET_ALGORITHMDETAILS_OFFSET UNITYSDK_OFFSET(0x78CA40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x78CAD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int PKMacFactory_TypeDefinitionIndex = 22659;

	class PKMacFactory : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters; // 0x10
		::Il2CppArray<::System::Object*>* key; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IStreamCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACFACTORY_CREATECALCULATOR_OFFSET))(nullptr);
		}

		::System::Object* get_AlgorithmDetails()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACFACTORY_GET_ALGORITHMDETAILS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACFACTORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

