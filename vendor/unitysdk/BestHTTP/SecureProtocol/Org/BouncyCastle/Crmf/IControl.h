#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class DerObjectIdentifier; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { class Asn1Encodable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ICONTROL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ICONTROL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crmf
{
	inline static constexpr unsigned int IControl_TypeDefinitionIndex = 22653;

	class IControl : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ICONTROL_GET_TYPE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRMF_ICONTROL_GET_VALUE_OFFSET))(nullptr);
		}

	};
}

