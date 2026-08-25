#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IKeyWrapper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class KeyParameter; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E7EC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E8010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_GET_ALGORITHMDETAILS_OFFSET UNITYSDK_OFFSET(0x5E8080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_GENERATEWRAPPEDKEY_OFFSET UNITYSDK_OFFSET(0x5E8170)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Operators
{
	inline static constexpr unsigned int CmsKeyTransRecipientInfoGenerator_TypeDefinitionIndex = 22003;

	class CmsKeyTransRecipientInfoGenerator : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper* keyWrapper; // 0x40

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmDetails()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_GET_ALGORITHMDETAILS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GenerateWrappedKey(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_OPERATORS_CMSKEYTRANSRECIPIENTINFOGENERATOR_GENERATEWRAPPEDKEY_OFFSET))(arg, nullptr);
		}

	};
}

