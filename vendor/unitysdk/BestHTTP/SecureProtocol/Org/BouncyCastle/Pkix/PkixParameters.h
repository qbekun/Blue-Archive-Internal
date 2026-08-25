#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { class DateTimeObject; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Selector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixParameters; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class X509CertStoreSelector; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { class IX509Store; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixCertPathChecker; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISUSEDELTASENABLED_OFFSET UNITYSDK_OFFSET(0x971220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x971230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETPROHIBITEDACATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x971660)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISEXPLICITPOLICYREQUIRED_OFFSET UNITYSDK_OFFSET(0x9716C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISREVOCATIONENABLED_OFFSET UNITYSDK_OFFSET(0x9716D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISANYPOLICYINHIBITED_OFFSET UNITYSDK_OFFSET(0x9716E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_CLONE_OFFSET UNITYSDK_OFFSET(0x9716F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETADDITIONALLOCATIONSENABLED_OFFSET UNITYSDK_OFFSET(0x971930)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x971770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISREVOCATIONENABLED_OFFSET UNITYSDK_OFFSET(0x971940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISPOLICYMAPPINGINHIBITED_OFFSET UNITYSDK_OFFSET(0x971950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_DATE_OFFSET UNITYSDK_OFFSET(0x971960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETPROHIBITEDACATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x971970)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTARGETCERTCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x971D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETATTRCERTCHECKERS_OFFSET UNITYSDK_OFFSET(0x971EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETNECESSARYACATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x972370)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISEXPLICITPOLICYREQUIRED_OFFSET UNITYSDK_OFFSET(0x972790)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETCERTPATHCHECKERS_OFFSET UNITYSDK_OFFSET(0x9727A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETATTRCERTCHECKERS_OFFSET UNITYSDK_OFFSET(0x972BC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISANYPOLICYINHIBITED_OFFSET UNITYSDK_OFFSET(0x972C20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETSTORES_OFFSET UNITYSDK_OFFSET(0x972C30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETINITIALPOLICIES_OFFSET UNITYSDK_OFFSET(0x9730A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISPOLICYQUALIFIERSREJECTED_OFFSET UNITYSDK_OFFSET(0x9734A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x9734B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTARGETCERTCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x973510)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_DATE_OFFSET UNITYSDK_OFFSET(0x9735F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETADDITIONALSTORES_OFFSET UNITYSDK_OFFSET(0x973600)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETCERTPATHCHECKERS_OFFSET UNITYSDK_OFFSET(0x973650)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISADDITIONALLOCATIONSENABLED_OFFSET UNITYSDK_OFFSET(0x973A60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETSTORES_OFFSET UNITYSDK_OFFSET(0x973A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_VALIDITYMODEL_OFFSET UNITYSDK_OFFSET(0x973AC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETNECESSARYACATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x973AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTRUSTEDACISSUERS_OFFSET UNITYSDK_OFFSET(0x973B30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTARGETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x973B90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTRUSTANCHORS_OFFSET UNITYSDK_OFFSET(0x973C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTARGETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x974180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETINITIALPOLICIES_OFFSET UNITYSDK_OFFSET(0x9742A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_VALIDITYMODEL_OFFSET UNITYSDK_OFFSET(0x974320)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTRUSTEDACISSUERS_OFFSET UNITYSDK_OFFSET(0x974330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISUSEDELTASENABLED_OFFSET UNITYSDK_OFFSET(0x9747E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_ADDADDITIONALSTORE_OFFSET UNITYSDK_OFFSET(0x9747F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISPOLICYMAPPINGINHIBITED_OFFSET UNITYSDK_OFFSET(0x9748B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_ADDCERTPATHCHECKER_OFFSET UNITYSDK_OFFSET(0x9748C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISPOLICYQUALIFIERSREJECTED_OFFSET UNITYSDK_OFFSET(0x974990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_ADDSTORE_OFFSET UNITYSDK_OFFSET(0x9749A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixParameters_TypeDefinitionIndex = 21668;

	class PkixParameters : public Il2CppObject
	{
	public:
		::System::Int32 PkixValidityModel; // 0x0
		::System::Int32 ChainValidityModel; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* date; // 0x18
		::System::Collections::IList* certPathCheckers; // 0x20
		::System::Boolean revocationEnabled; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies; // 0x30
		::System::Boolean explicitPolicyRequired; // 0x38
		::System::Boolean anyPolicyInhibited; // 0x39
		::System::Boolean policyMappingInhibited; // 0x3A
		::System::Boolean policyQualifiersRejected; // 0x3B
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* certSelector; // 0x40
		::System::Collections::IList* stores; // 0x48
		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* selector; // 0x50
		::System::Boolean additionalLocationsEnabled; // 0x58
		::System::Collections::IList* additionalStores; // 0x60
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers; // 0x68
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes; // 0x70
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes; // 0x78
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers; // 0x80
		::System::Int32 validityModel; // 0x88
		::System::Boolean useDeltas; // 0x8C

		::System::Void set_IsUseDeltasEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISUSEDELTASENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void SetParams(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETPARAMS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetProhibitedACAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETPROHIBITEDACATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Void set_IsExplicitPolicyRequired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISEXPLICITPOLICYREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRevocationEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISREVOCATIONENABLED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAnyPolicyInhibited()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISANYPOLICYINHIBITED_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetAdditionalLocationsEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETADDITIONALLOCATIONSENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsRevocationEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISREVOCATIONENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPolicyMappingInhibited(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISPOLICYMAPPINGINHIBITED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_Date()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_DATE_OFFSET))(nullptr);
		}

		::System::Void SetProhibitedACAttributes(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETPROHIBITEDACATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetCertConstraints(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTARGETCERTCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::System::Void SetAttrCertCheckers(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETATTRCERTCHECKERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetNecessaryACAttributes(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETNECESSARYACATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsExplicitPolicyRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISEXPLICITPOLICYREQUIRED_OFFSET))(nullptr);
		}

		::System::Void SetCertPathCheckers(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETCERTPATHCHECKERS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetAttrCertCheckers()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETATTRCERTCHECKERS_OFFSET))(nullptr);
		}

		::System::Void set_IsAnyPolicyInhibited(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISANYPOLICYINHIBITED_OFFSET))(arg, nullptr);
		}

		::System::Void SetStores(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETSTORES_OFFSET))(arg, nullptr);
		}

		::System::Void SetInitialPolicies(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETINITIALPOLICIES_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPolicyQualifiersRejected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_ISPOLICYQUALIFIERSREJECTED_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustAnchors()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTRUSTANCHORS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* GetTargetCertConstraints()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTARGETCERTCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void set_Date(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_DATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* GetAdditionalStores()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETADDITIONALSTORES_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetCertPathCheckers()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETCERTPATHCHECKERS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAdditionalLocationsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISADDITIONALLOCATIONSENABLED_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetStores()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETSTORES_OFFSET))(nullptr);
		}

		::System::Void set_ValidityModel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SET_VALIDITYMODEL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetNecessaryACAttributes()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETNECESSARYACATTRIBUTES_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustedACIssuers()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTRUSTEDACISSUERS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* GetTargetConstraints()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETTARGETCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void SetTrustAnchors(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTRUSTANCHORS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTargetConstraints(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTARGETCONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetInitialPolicies()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GETINITIALPOLICIES_OFFSET))(nullptr);
		}

		::System::Int32 get_ValidityModel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_VALIDITYMODEL_OFFSET))(nullptr);
		}

		::System::Void SetTrustedACIssuers(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_SETTRUSTEDACISSUERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsUseDeltasEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISUSEDELTASENABLED_OFFSET))(nullptr);
		}

		::System::Void AddAdditionalStore(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_ADDADDITIONALSTORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPolicyMappingInhibited()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISPOLICYMAPPINGINHIBITED_OFFSET))(nullptr);
		}

		::System::Void AddCertPathChecker(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathChecker* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathChecker*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_ADDCERTPATHCHECKER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPolicyQualifiersRejected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_GET_ISPOLICYQUALIFIERSREJECTED_OFFSET))(nullptr);
		}

		::System::Void AddStore(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPARAMETERS_ADDSTORE_OFFSET))(arg, nullptr);
		}

	};
}

