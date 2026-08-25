#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class X509Certificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { class DateTimeObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509CrlStoreSelector; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C5250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C5260)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_CLONE_OFFSET UNITYSDK_OFFSET(0x8C5590)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_CERTIFICATECHECKING_OFFSET UNITYSDK_OFFSET(0x8C55F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_CERTIFICATECHECKING_OFFSET UNITYSDK_OFFSET(0x8C5600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_DATEANDTIME_OFFSET UNITYSDK_OFFSET(0x8C5610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_DATEANDTIME_OFFSET UNITYSDK_OFFSET(0x8C5620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ISSUERS_OFFSET UNITYSDK_OFFSET(0x8C5400)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ISSUERS_OFFSET UNITYSDK_OFFSET(0x8C5630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_MAXCRLNUMBER_OFFSET UNITYSDK_OFFSET(0x8C5700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_MAXCRLNUMBER_OFFSET UNITYSDK_OFFSET(0x8C5710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_MINCRLNUMBER_OFFSET UNITYSDK_OFFSET(0x8C5720)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_MINCRLNUMBER_OFFSET UNITYSDK_OFFSET(0x8C5730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ATTRCERTCHECKING_OFFSET UNITYSDK_OFFSET(0x8C5740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ATTRCERTCHECKING_OFFSET UNITYSDK_OFFSET(0x8C5750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_COMPLETECRLENABLED_OFFSET UNITYSDK_OFFSET(0x8C5760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_COMPLETECRLENABLED_OFFSET UNITYSDK_OFFSET(0x8C5770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_DELTACRLINDICATORENABLED_OFFSET UNITYSDK_OFFSET(0x8C5780)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_DELTACRLINDICATORENABLED_OFFSET UNITYSDK_OFFSET(0x8C5790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ISSUINGDISTRIBUTIONPOINT_OFFSET UNITYSDK_OFFSET(0x8C54C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ISSUINGDISTRIBUTIONPOINT_OFFSET UNITYSDK_OFFSET(0x8C57A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ISSUINGDISTRIBUTIONPOINTENABLED_OFFSET UNITYSDK_OFFSET(0x8C5880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ISSUINGDISTRIBUTIONPOINTENABLED_OFFSET UNITYSDK_OFFSET(0x8C5890)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_MAXBASECRLNUMBER_OFFSET UNITYSDK_OFFSET(0x8C58A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_MAXBASECRLNUMBER_OFFSET UNITYSDK_OFFSET(0x8C58B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_MATCH_OFFSET UNITYSDK_OFFSET(0x8C58C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int X509CrlStoreSelector_TypeDefinitionIndex = 21561;

	class X509CrlStoreSelector : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* certificateChecking; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* dateAndTime; // 0x18
		::System::Collections::ICollection* issuers; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* maxCrlNumber; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* minCrlNumber; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCertChecking; // 0x38
		::System::Boolean completeCrlEnabled; // 0x40
		::System::Boolean deltaCrlIndicatorEnabled; // 0x41
		::Il2CppArray<::System::Object*>* issuingDistributionPoint; // 0x48
		::System::Boolean issuingDistributionPointEnabled; // 0x50
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* maxBaseCrlNumber; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_CLONE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* get_CertificateChecking()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_CERTIFICATECHECKING_OFFSET))(nullptr);
		}

		::System::Void set_CertificateChecking(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_CERTIFICATECHECKING_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_DateAndTime()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_DATEANDTIME_OFFSET))(nullptr);
		}

		::System::Void set_DateAndTime(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_DATEANDTIME_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* get_Issuers()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ISSUERS_OFFSET))(nullptr);
		}

		::System::Void set_Issuers(::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ISSUERS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_MaxCrlNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_MAXCRLNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_MaxCrlNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_MAXCRLNUMBER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_MinCrlNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_MINCRLNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_MinCrlNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_MINCRLNUMBER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* get_AttrCertChecking()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ATTRCERTCHECKING_OFFSET))(nullptr);
		}

		::System::Void set_AttrCertChecking(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ATTRCERTCHECKING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CompleteCrlEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_COMPLETECRLENABLED_OFFSET))(nullptr);
		}

		::System::Void set_CompleteCrlEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_COMPLETECRLENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DeltaCrlIndicatorEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_DELTACRLINDICATORENABLED_OFFSET))(nullptr);
		}

		::System::Void set_DeltaCrlIndicatorEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_DELTACRLINDICATORENABLED_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_IssuingDistributionPoint()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ISSUINGDISTRIBUTIONPOINT_OFFSET))(nullptr);
		}

		::System::Void set_IssuingDistributionPoint(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ISSUINGDISTRIBUTIONPOINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IssuingDistributionPointEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_ISSUINGDISTRIBUTIONPOINTENABLED_OFFSET))(nullptr);
		}

		::System::Void set_IssuingDistributionPointEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_ISSUINGDISTRIBUTIONPOINTENABLED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_MaxBaseCrlNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_GET_MAXBASECRLNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_MaxBaseCrlNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_SET_MAXBASECRLNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509CRLSTORESELECTOR_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

