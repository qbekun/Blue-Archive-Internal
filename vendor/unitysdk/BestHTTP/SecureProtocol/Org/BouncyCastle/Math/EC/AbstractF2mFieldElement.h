#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_HALFTRACE_OFFSET UNITYSDK_OFFSET(0x530DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_GET_HASFASTTRACE_OFFSET UNITYSDK_OFFSET(0x530EF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_TRACE_OFFSET UNITYSDK_OFFSET(0x530F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x531090)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	inline static constexpr unsigned int AbstractF2mFieldElement_TypeDefinitionIndex = 21791;

	class AbstractF2mFieldElement : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_HALFTRACE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasFastTrace()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_GET_HASFASTTRACE_OFFSET))(nullptr);
		}

		::System::Int32 Trace()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_TRACE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABSTRACTF2MFIELDELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

