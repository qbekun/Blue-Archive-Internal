#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_SET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF13510)
#define MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF13520)
#define MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_GET_ACCOUNTSERVERID_OFFSET UNITYSDK_OFFSET(0xF13530)
#define MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13540)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeGetInfoRequest_TypeDefinitionIndex = 11362;

	class CafeGetInfoRequest : public Il2CppObject
	{
	public:
		::System::Int64 _AccountServerId_k__BackingField; // 0x40

		::System::Void set_AccountServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_SET_ACCOUNTSERVERID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_GET_ACCOUNTSERVERID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEGETINFOREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

