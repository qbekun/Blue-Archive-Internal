#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class IPKMacPrimitivesProvider; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Security { class SecureRandom; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { class PbmParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class PKMacBuilder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMacFactory; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78CCC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78CED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78D040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78D0B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x78CE60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETSALTLENGTH_OFFSET UNITYSDK_OFFSET(0x78D0F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x78D160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x78D390)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETSECURERANDOM_OFFSET UNITYSDK_OFFSET(0x78D3F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x78D410)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_CHECKITERATIONCOUNTCEILING_OFFSET UNITYSDK_OFFSET(0x78D1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_GENCALCULATOR_OFFSET UNITYSDK_OFFSET(0x78D530)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int PKMacBuilder_TypeDefinitionIndex = 22661;

	class PKMacBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* provider; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter* parameters; // 0x30
		::System::Int32 iterationCount; // 0x38
		::System::Int32 saltLength; // 0x3C
		::System::Int32 maxIterations; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IPKMacPrimitivesProvider*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder* SetSaltLength(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETSALTLENGTH_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder* SetIterationCount(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder* SetParameters(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETPARAMETERS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder* SetSecureRandom(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::PKMacBuilder*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_SETSECURERANDOM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMacFactory* Build(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMacFactory*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void CheckIterationCountCeiling(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_CHECKITERATIONCOUNTCEILING_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMacFactory* GenCalculator(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMacFactory*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_PKMACBUILDER_GENCALCULATOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

