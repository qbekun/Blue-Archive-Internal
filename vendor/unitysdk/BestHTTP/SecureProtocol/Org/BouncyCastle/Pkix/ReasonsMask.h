#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { class ReasonsMask; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { class ReasonFlags; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x975840)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x975860)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_ADDREASONS_OFFSET UNITYSDK_OFFSET(0x975880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_GET_ISALLREASONS_OFFSET UNITYSDK_OFFSET(0x975960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_INTERSECT_OFFSET UNITYSDK_OFFSET(0x9759F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_HASNEWREASONS_OFFSET UNITYSDK_OFFSET(0x975B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_GET_REASONS_OFFSET UNITYSDK_OFFSET(0x975900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x975BC0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int ReasonsMask_TypeDefinitionIndex = 21670;

	class ReasonsMask : public Il2CppObject
	{
	public:
		::System::Int32 _reasons; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* AllReasons; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddReasons(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_ADDREASONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsAllReasons()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_GET_ISALLREASONS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* Intersect(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_INTERSECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasNewReasons(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_HASNEWREASONS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ReasonFlags* get_Reasons()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::ReasonFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_GET_REASONS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_REASONSMASK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

