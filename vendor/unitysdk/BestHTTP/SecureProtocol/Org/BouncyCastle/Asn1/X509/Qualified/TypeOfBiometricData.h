#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified { class TypeOfBiometricData; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x813A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x815C10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x815D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GET_ISPREDEFINED_OFFSET UNITYSDK_OFFSET(0x815D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GET_PREDEFINEDBIOMETRICTYPE_OFFSET UNITYSDK_OFFSET(0x815DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GET_BIOMETRICDATAOID_OFFSET UNITYSDK_OFFSET(0x815E20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_TOASN1OBJECT_OFFSET UNITYSDK_OFFSET(0x815EA0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified
{
	inline static constexpr unsigned int TypeOfBiometricData_TypeDefinitionIndex = 22951;

	class TypeOfBiometricData : public ::UnityEngine::ParticleSystemRenderer
	{
	public:
		::System::Int32 Picture; // 0x0
		::System::Int32 HandwrittenSignature; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj; // 0x10

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* GetInstance(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GETINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPredefined()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GET_ISPREDEFINED_OFFSET))(nullptr);
		}

		::System::Int32 get_PredefinedBiometricType()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GET_PREDEFINEDBIOMETRICTYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_BiometricDataOid()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_GET_BIOMETRICDATAOID_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_X509_QUALIFIED_TYPEOFBIOMETRICDATA_TOASN1OBJECT_OFFSET))(nullptr);
		}

	};
}

