#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class IX509AttributeCertificate; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { class DateTimeObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class AttributeCertificateHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { class AttributeCertificateIssuer; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509AttrCertStoreSelector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class GeneralName; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C1350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x8C13F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_MATCH_OFFSET UNITYSDK_OFFSET(0x8C1570)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_CLONE_OFFSET UNITYSDK_OFFSET(0x8C1E70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ATTRIBUTECERT_OFFSET UNITYSDK_OFFSET(0x8C1ED0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ATTRIBUTECERT_OFFSET UNITYSDK_OFFSET(0x8C1EE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ATTRIBUECERTIFICATEVALID_OFFSET UNITYSDK_OFFSET(0x8C1EF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ATTRIBUECERTIFICATEVALID_OFFSET UNITYSDK_OFFSET(0x8C1F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ATTRIBUTECERTIFICATEVALID_OFFSET UNITYSDK_OFFSET(0x8C1F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ATTRIBUTECERTIFICATEVALID_OFFSET UNITYSDK_OFFSET(0x8C1F20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_HOLDER_OFFSET UNITYSDK_OFFSET(0x8C1F30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_HOLDER_OFFSET UNITYSDK_OFFSET(0x8C1F40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ISSUER_OFFSET UNITYSDK_OFFSET(0x8C1F50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ISSUER_OFFSET UNITYSDK_OFFSET(0x8C1F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x8C1F70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x8C1F80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETNAME_OFFSET UNITYSDK_OFFSET(0x8C1F90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETNAME_OFFSET UNITYSDK_OFFSET(0x8C2040)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SETTARGETNAMES_OFFSET UNITYSDK_OFFSET(0x8C2100)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GETTARGETNAMES_OFFSET UNITYSDK_OFFSET(0x8C25D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x8C2630)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x8C26E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SETTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0x8C27A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GETTARGETGROUPS_OFFSET UNITYSDK_OFFSET(0x8C27D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_EXTRACTGENERALNAMES_OFFSET UNITYSDK_OFFSET(0x8C2130)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	inline static constexpr unsigned int X509AttrCertStoreSelector_TypeDefinitionIndex = 21556;

	class X509AttrCertStoreSelector : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attributeCert; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* attributeCertificateValid; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* holder; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* issuer; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* serialNumber; // 0x30
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* targetNames; // 0x38
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* targetGroups; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_CLONE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* get_AttributeCert()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ATTRIBUTECERT_OFFSET))(nullptr);
		}

		::System::Void set_AttributeCert(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ATTRIBUTECERT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttribueCertificateValid()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ATTRIBUECERTIFICATEVALID_OFFSET))(nullptr);
		}

		::System::Void set_AttribueCertificateValid(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ATTRIBUECERTIFICATEVALID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttributeCertificateValid()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ATTRIBUTECERTIFICATEVALID_OFFSET))(nullptr);
		}

		::System::Void set_AttributeCertificateValid(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ATTRIBUTECERTIFICATEVALID_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_HOLDER_OFFSET))(nullptr);
		}

		::System::Void set_Holder(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_HOLDER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_ISSUER_OFFSET))(nullptr);
		}

		::System::Void set_Issuer(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_ISSUER_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GET_SERIALNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_SerialNumber(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SET_SERIALNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void AddTargetName(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void AddTargetName(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetNames(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SETTARGETNAMES_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerable* GetTargetNames()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GETTARGETNAMES_OFFSET))(nullptr);
		}

		::System::Void AddTargetGroup(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void AddTargetGroup(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_ADDTARGETGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetGroups(::System::Collections::IEnumerable* arg)
		{
			((::System::Void(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_SETTARGETGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerable* GetTargetGroups()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_GETTARGETGROUPS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ExtractGeneralNames(::System::Collections::IEnumerable* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::System::Collections::IEnumerable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_X509_STORE_X509ATTRCERTSTORESELECTOR_EXTRACTGENERALNAMES_OFFSET))(arg, nullptr);
		}

	};
}

