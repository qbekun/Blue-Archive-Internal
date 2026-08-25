#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECLookupTable; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x55BA70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x55BA80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_SET_LOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x55BA90)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x55BAA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x55BAB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_GET_LOOKUPTABLE_OFFSET UNITYSDK_OFFSET(0x55BAC0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x55BAD0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier
{
	inline static constexpr unsigned int FixedPointPreCompInfo_TypeDefinitionIndex = 21825;

	class FixedPointPreCompInfo : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* m_offset; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable* m_lookupTable; // 0x18
		::System::Int32 m_width; // 0x20

		::System::Void set_Offset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_SET_OFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_LookupTable(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_SET_LOOKUPTABLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Width()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_GET_WIDTH_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* get_Offset()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_GET_OFFSET_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable* get_LookupTable()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_GET_LOOKUPTABLE_OFFSET))(nullptr);
		}

		::System::Void set_Width(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_MULTIPLIER_FIXEDPOINTPRECOMPINFO_SET_WIDTH_OFFSET))(arg, nullptr);
		}

	};
}

