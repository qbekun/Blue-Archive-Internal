#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x77C890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x781C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x781CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x781CB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GETZ_OFFSET UNITYSDK_OFFSET(0x781CC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GETEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x781CD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Agreement::Kdf
{
	inline static constexpr unsigned int DHKdfParameters_TypeDefinitionIndex = 22637;

	class DHKdfParameters : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm; // 0x10
		::System::Int32 keySize; // 0x18
		::Il2CppArray<::System::Object*>* z; // 0x20
		::Il2CppArray<::System::Object*>* extraInfo; // 0x28

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Algorithm()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GET_ALGORITHM_OFFSET))(nullptr);
		}

		::System::Int32 get_KeySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GET_KEYSIZE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetZ()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GETZ_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetExtraInfo()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_AGREEMENT_KDF_DHKDFPARAMETERS_GETEXTRAINFO_OFFSET))(nullptr);
		}

	};
}

