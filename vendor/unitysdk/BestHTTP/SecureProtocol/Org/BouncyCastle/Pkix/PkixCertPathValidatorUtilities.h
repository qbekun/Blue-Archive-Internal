#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCrlUtilities; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class TrustAnchor; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class AlgorithmIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Sequence; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixPolicyNode; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Crl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class CertStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509CertStoreSelector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DistributionPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509CrlStoreSelector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509AttrCertStoreSelector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class CrlDistPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixBuilderParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Object; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509Extension; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDTRUSTANCHOR_OFFSET UNITYSDK_OFFSET(0x951B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISISSUERTRUSTANCHOR_OFFSET UNITYSDK_OFFSET(0x94EAD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ADDADDITIONALSTORESFROMALTNAMES_OFFSET UNITYSDK_OFFSET(0x94EC60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETVALIDDATE_OFFSET UNITYSDK_OFFSET(0x95D4F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETISSUERPRINCIPAL_OFFSET UNITYSDK_OFFSET(0x95D160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISSELFISSUED_OFFSET UNITYSDK_OFFSET(0x95D570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETALGORITHMIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9523A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISANYPOLICY_OFFSET UNITYSDK_OFFSET(0x95D5D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ADDADDITIONALSTOREFROMLOCATION_OFFSET UNITYSDK_OFFSET(0x95D2C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETSERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x95D710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETQUALIFIERSET_OFFSET UNITYSDK_OFFSET(0x95D7D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_REMOVEPOLICYNODE_OFFSET UNITYSDK_OFFSET(0x95DC70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_REMOVEPOLICYNODERECURSE_OFFSET UNITYSDK_OFFSET(0x95DDC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PREPARENEXTCERTB1_OFFSET UNITYSDK_OFFSET(0x95E230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PREPARENEXTCERTB2_OFFSET UNITYSDK_OFFSET(0x95F000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETCERTSTATUS_OFFSET UNITYSDK_OFFSET(0x95F790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETNEXTWORKINGKEY_OFFSET UNITYSDK_OFFSET(0x95A7A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETVALIDCERTDATEFROMVALIDITYMODEL_OFFSET UNITYSDK_OFFSET(0x95FC40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x94D330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETCRLISSUERSFROMDISTRIBUTIONPOINT_OFFSET UNITYSDK_OFFSET(0x960130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETCOMPLETECRLS_OFFSET UNITYSDK_OFFSET(0x960690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETDELTACRLS_OFFSET UNITYSDK_OFFSET(0x960D30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISDELTACRL_OFFSET UNITYSDK_OFFSET(0x9616B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x9617B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ADDADDITIONALSTORESFROMCRLDISTRIBUTIONPOINT_OFFSET UNITYSDK_OFFSET(0x962000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PROCESSCERTD1I_OFFSET UNITYSDK_OFFSET(0x962250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PROCESSCERTD1II_OFFSET UNITYSDK_OFFSET(0x962670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDISSUERCERTS_OFFSET UNITYSDK_OFFSET(0x94F010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETEXTENSIONVALUE_OFFSET UNITYSDK_OFFSET(0x95EF50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x962A80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x962A90)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixCertPathValidatorUtilities_TypeDefinitionIndex = 21664;

	class PkixCertPathValidatorUtilities : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCrlUtilities* CrlUtilities; // 0x0
		::System::String* ANY_POLICY; // 0x8
		::System::String* CRL_NUMBER; // 0x10
		::System::Int32 KEY_CERT_SIGN; // 0x18
		::System::Int32 CRL_SIGN; // 0x1C
		::Il2CppArray<::System::Object*>* crlReasons; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* FindTrustAnchor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDTRUSTANCHOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsIssuerTrustAnchor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISISSUERTRUSTANCHOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalStoresFromAltNames(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ADDADDITIONALSTORESFROMALTNAMES_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* GetValidDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::System::DateTime*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETVALIDDATE_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerPrincipal(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETISSUERPRINCIPAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSelfIssued(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISSELFISSUED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetAlgorithmIdentifier(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETALGORITHMIDENTIFIER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsAnyPolicy(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISANYPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void AddAdditionalStoreFromLocation(::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ADDADDITIONALSTOREFROMLOCATION_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* GetSerialNumber(::System::Object* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETSERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetQualifierSet(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETQUALIFIERSET_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* RemovePolicyNode(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_REMOVEPOLICYNODE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemovePolicyNodeRecurse(::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_REMOVEPOLICYNODERECURSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareNextCertB1(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::System::Collections::IDictionary* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::String*, ::System::Collections::IDictionary*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PREPARENEXTCERTB1_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* PrepareNextCertB2(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::String*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PREPARENEXTCERTB2_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void GetCertStatus(::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::System::Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETCERTSTATUS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetNextWorkingKey(::System::Collections::IList* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::System::Collections::IList*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETNEXTWORKINGKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::DateTime* GetValidCertDateFromValidityModel(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg)
		{
			return (return (::System::DateTime*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETVALIDCERTDATEFROMVALIDITYMODEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::ICollection* FindCertificates(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* arg, ::System::Collections::IList* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDCERTIFICATES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetCrlIssuersFromDistributionPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* arg, ::System::Collections::ICollection* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Collections::ICollection*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETCRLISSUERSFROMDISTRIBUTIONPOINT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetCompleteCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* arg, ::System::Object* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETCOMPLETECRLS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetDeltaCrls(::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETDELTACRLS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean isDeltaCrl(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ISDELTACRL_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* FindCertificates(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* arg, ::System::Collections::IList* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDCERTIFICATES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAdditionalStoresFromCrlDistributionPoint(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlDistPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlDistPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_ADDADDITIONALSTORESFROMCRLDISTRIBUTIONPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ProcessCertD1i(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PROCESSCERTD1I_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessCertD1ii(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_PROCESSCERTD1II_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Collections::ICollection* FindIssuerCerts(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_FINDISSUERCERTS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetExtensionValue(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509Extension* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509Extension*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_GETEXTENSIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXCERTPATHVALIDATORUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

