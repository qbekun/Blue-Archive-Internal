#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEACKREQUEST_SET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF135F0)
#define MX_NETWORKPROTOCOL_CAFEACKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13600)
#define MX_NETWORKPROTOCOL_CAFEACKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13610)
#define MX_NETWORKPROTOCOL_CAFEACKREQUEST_GET_CAFEDBID_OFFSET UNITYSDK_OFFSET(0xF13620)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeAckRequest_TypeDefinitionIndex = 11364;

	class CafeAckRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CafeDBId_k__BackingField; // 0x40

		::System::Void set_CafeDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKREQUEST_SET_CAFEDBID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEACKREQUEST_GET_CAFEDBID_OFFSET))(nullptr);
		}

	};
}

