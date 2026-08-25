#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IKeyWrapper; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherBuilderWithKey; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf { class IEncryptedValuePadder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf { class EncryptedValue; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs { class PrivateKeyInfo; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x789CA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x789D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x789D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x78A670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x78A870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_ENCRYPTDATA_OFFSET UNITYSDK_OFFSET(0x789ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_PADDATA_OFFSET UNITYSDK_OFFSET(0x789E20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int EncryptedValueBuilder_TypeDefinitionIndex = 22652;

	class EncryptedValueBuilder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IEncryptedValuePadder* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IKeyWrapper*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf::IEncryptedValuePadder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* EncryptData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_ENCRYPTDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* PadData(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ENCRYPTEDVALUEBUILDER_PADDATA_OFFSET))(arg, nullptr);
		}

	};
}

