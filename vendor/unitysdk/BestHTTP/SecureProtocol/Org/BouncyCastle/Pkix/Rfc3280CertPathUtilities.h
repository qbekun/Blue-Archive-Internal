#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCrlUtilities; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class DistributionPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class AsymmetricKeyParameter; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class CertStatus; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class ReasonsMask; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPath; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Crl; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixPolicyNode; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class X509Name; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixNameConstraintValidator; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_CHECKCRL_OFFSET UNITYSDK_OFFSET(0x975C40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTJ_OFFSET UNITYSDK_OFFSET(0x9596D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLD_OFFSET UNITYSDK_OFFSET(0x9769E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLC_OFFSET UNITYSDK_OFFSET(0x979960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTH2_OFFSET UNITYSDK_OFFSET(0x958A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLH_OFFSET UNITYSDK_OFFSET(0x978130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTO_OFFSET UNITYSDK_OFFSET(0x95A2A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLB2_OFFSET UNITYSDK_OFFSET(0x9789B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTI1_OFFSET UNITYSDK_OFFSET(0x958D70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTG_OFFSET UNITYSDK_OFFSET(0x95B660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLB1_OFFSET UNITYSDK_OFFSET(0x9785D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTH1_OFFSET UNITYSDK_OFFSET(0x9588F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTA_OFFSET UNITYSDK_OFFSET(0x95ABF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTE_OFFSET UNITYSDK_OFFSET(0x955780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTA_OFFSET UNITYSDK_OFFSET(0x955AA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLA1II_OFFSET UNITYSDK_OFFSET(0x97A0E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLF_OFFSET UNITYSDK_OFFSET(0x976D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTN_OFFSET UNITYSDK_OFFSET(0x95A0E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTD_OFFSET UNITYSDK_OFFSET(0x9537F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLG_OFFSET UNITYSDK_OFFSET(0x977C90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTL_OFFSET UNITYSDK_OFFSET(0x959C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTI2_OFFSET UNITYSDK_OFFSET(0x959220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLA1I_OFFSET UNITYSDK_OFFSET(0x97A660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTF_OFFSET UNITYSDK_OFFSET(0x955A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTM_OFFSET UNITYSDK_OFFSET(0x959E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTA_OFFSET UNITYSDK_OFFSET(0x9524B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTB_OFFSET UNITYSDK_OFFSET(0x95ACB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTBC_OFFSET UNITYSDK_OFFSET(0x952C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x97B860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARECERTB_OFFSET UNITYSDK_OFFSET(0x955FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_CHECKCRLS_OFFSET UNITYSDK_OFFSET(0x97AB90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTK_OFFSET UNITYSDK_OFFSET(0x959960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTH3_OFFSET UNITYSDK_OFFSET(0x958BF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTF_OFFSET UNITYSDK_OFFSET(0x95B180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLJ_OFFSET UNITYSDK_OFFSET(0x97A060)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97B870)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLI_OFFSET UNITYSDK_OFFSET(0x979FC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTG_OFFSET UNITYSDK_OFFSET(0x958380)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int Rfc3280CertPathUtilities_TypeDefinitionIndex = 21671;

	class Rfc3280CertPathUtilities : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCrlUtilities* CrlUtilities; // 0x0
		::System::String* ANY_POLICY; // 0x8
		::System::Int32 KEY_CERT_SIGN; // 0x10
		::System::Int32 CRL_SIGN; // 0x14
		::Il2CppArray<::System::Object*>* CrlReasons; // 0x18

		::System::Void CheckCrl(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_CHECKCRL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertJ(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTJ_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* ProcessCrlD(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessCrlC(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertH2(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTH2_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* ProcessCrlH(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PrepareNextCertO(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessCrlB2(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* arg, ::System::Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLB2_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertI1(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTI1_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* WrapupCertG(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTG_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessCrlB1(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* arg, ::System::Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint*, ::System::Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLB1_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertH1(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTH1_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 WrapupCertA(::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTA_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* ProcessCertE(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void PrepareNextCertA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ProcessCrlA1ii(::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLA1II_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ProcessCrlF(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::System::Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::System::Collections::IList* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLF_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareNextCertN(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTN_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* ProcessCertD(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTD_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ProcessCrlG(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLG_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertL(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertI2(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTI2_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ProcessCrlA1i(::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLA1I_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessCertF(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertM(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessCertA(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTA_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 WrapupCertB(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTB_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessCertBC(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCERTBC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* PrepareCertB(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARECERTB_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void CheckCrls(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* arg, ::System::Collections::IList* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_CHECKCRLS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareNextCertK(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTK_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 PrepareNextCertH3(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTH3_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WrapupCertF(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::System::Collections::IList* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::System::Collections::IList*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_WRAPUPCERTF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessCrlJ(::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::System::Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLJ_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void ProcessCrlI(::System::DateTime* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* arg, ::System::Object* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*, ::System::Object*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PROCESSCRLI_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareNextCertG(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixNameConstraintValidator*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_RFC3280CERTPATHUTILITIES_PREPARENEXTCERTG_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

