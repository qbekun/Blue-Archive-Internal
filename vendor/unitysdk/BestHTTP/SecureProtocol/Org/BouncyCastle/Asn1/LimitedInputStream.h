#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LIMITEDINPUTSTREAM_SETPARENTEOFDETECT_OFFSET UNITYSDK_OFFSET(0x7DE230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LIMITEDINPUTSTREAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x7D1220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LIMITEDINPUTSTREAM_GET_LIMIT_OFFSET UNITYSDK_OFFSET(0x7DE2B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	inline static constexpr unsigned int LimitedInputStream_TypeDefinitionIndex = 22826;

	class LimitedInputStream : public ::TriInspector::ShowInEditModeAttribute
	{
	public:
		::System::IO::Stream* _in; // 0x30
		::System::Int32 _limit; // 0x38

		::System::Void SetParentEofDetect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LIMITEDINPUTSTREAM_SETPARENTEOFDETECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LIMITEDINPUTSTREAM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Limit()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_ASN1_LIMITEDINPUTSTREAM_GET_LIMIT_OFFSET))(nullptr);
		}

	};
}

