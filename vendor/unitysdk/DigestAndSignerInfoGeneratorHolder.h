#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Cms { class ISignerInfoGenerator; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }

#define DIGESTANDSIGNERINFOGENERATORHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7A2F50)
#define DIGESTANDSIGNERINFOGENERATORHOLDER_GET_DIGESTALGORITHM_OFFSET UNITYSDK_OFFSET(0x7A5240)

	inline static constexpr unsigned int DigestAndSignerInfoGeneratorHolder_TypeDefinitionIndex = 22701;

	class DigestAndSignerInfoGeneratorHolder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::ISignerInfoGenerator* signerInf; // 0x10
		::System::String* digestOID; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::ISignerInfoGenerator* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::ISignerInfoGenerator*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DIGESTANDSIGNERINFOGENERATORHOLDER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGESTANDSIGNERINFOGENERATORHOLDER_GET_DIGESTALGORITHM_OFFSET))(nullptr);
		}

	};

