#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class SubjectPublicKeyInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x75D0F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_CREATESUBJECTPUBLICKEYINFO_OFFSET UNITYSDK_OFFSET(0x75AF70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_EXTRACTBYTES_OFFSET UNITYSDK_OFFSET(0x75D210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_EXTRACTBYTES_OFFSET UNITYSDK_OFFSET(0x75D100)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509
{
	inline static constexpr unsigned int SubjectPublicKeyInfoFactory_TypeDefinitionIndex = 21533;

	class SubjectPublicKeyInfoFactory : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* CreateSubjectPublicKeyInfo(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_CREATESUBJECTPUBLICKEYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ExtractBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_EXTRACTBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ExtractBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_SUBJECTPUBLICKEYINFOFACTORY_EXTRACTBYTES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

