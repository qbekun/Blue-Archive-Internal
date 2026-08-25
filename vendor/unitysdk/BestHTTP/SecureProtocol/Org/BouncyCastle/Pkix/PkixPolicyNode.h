#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { class ISet; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class PkixPolicyNode; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x974A60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x974A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x974AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_SET_ISCRITICAL_OFFSET UNITYSDK_OFFSET(0x974AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_POLICYQUALIFIERS_OFFSET UNITYSDK_OFFSET(0x974AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_VALIDPOLICY_OFFSET UNITYSDK_OFFSET(0x974B50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x974B60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_EXPECTEDPOLICIES_OFFSET UNITYSDK_OFFSET(0x974C00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_SET_EXPECTEDPOLICIES_OFFSET UNITYSDK_OFFSET(0x974C60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x974CD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x974CE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x952130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x974CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x974DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x974E60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x974EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_CLONE_OFFSET UNITYSDK_OFFSET(0x975380)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_COPY_OFFSET UNITYSDK_OFFSET(0x9753A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int PkixPolicyNode_TypeDefinitionIndex = 21669;

	class PkixPolicyNode : public Il2CppObject
	{
	public:
		::System::Collections::IList* mChildren; // 0x10
		::System::Int32 mDepth; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* mExpectedPolicies; // 0x20
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* mParent; // 0x28
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* mPolicyQualifiers; // 0x30
		::System::String* mValidPolicy; // 0x38
		::System::Boolean mCritical; // 0x40

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerable* get_Children()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCritical()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_ISCRITICAL_OFFSET))(nullptr);
		}

		::System::Void set_IsCritical(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_SET_ISCRITICAL_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* get_PolicyQualifiers()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_POLICYQUALIFIERS_OFFSET))(nullptr);
		}

		::System::String* get_ValidPolicy()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_VALIDPOLICY_OFFSET))(nullptr);
		}

		::System::Boolean get_HasChildren()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_HASCHILDREN_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* get_ExpectedPolicies()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_EXPECTEDPOLICIES_OFFSET))(nullptr);
		}

		::System::Void set_ExpectedPolicies(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_SET_EXPECTEDPOLICIES_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* get_Parent()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_Parent(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Collections::IList* arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* arg, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, str, arg, nullptr);
		}

		::System::Void AddChild(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_ADDCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveChild(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_REMOVECHILD_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_CLONE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_PKIXPOLICYNODE_COPY_OFFSET))(nullptr);
		}

	};
}

