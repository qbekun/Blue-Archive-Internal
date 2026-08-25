#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { class DateTimeObject; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_SET_REVOCATIONDATE_OFFSET UNITYSDK_OFFSET(0x946D90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x946DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x946DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_GET_REVOCATIONDATE_OFFSET UNITYSDK_OFFSET(0x946DC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x946DD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	inline static constexpr unsigned int CertStatus_TypeDefinitionIndex = 21651;

	class CertStatus : public Il2CppObject
	{
	public:
		::System::Int32 Unrevoked; // 0x0
		::System::Int32 Undetermined; // 0x0
		::System::Int32 status; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* revocationDate; // 0x18

		::System::Void set_RevocationDate(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_SET_REVOCATIONDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Status(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_SET_STATUS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Status()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_GET_STATUS_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_RevocationDate()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_GET_REVOCATIONDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_PKIX_CERTSTATUS_.CTOR_OFFSET))(nullptr);
		}

	};
}

