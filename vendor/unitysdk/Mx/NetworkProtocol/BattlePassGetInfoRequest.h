#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11C30)
#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11C40)
#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11C50)
#define MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11C60)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassGetInfoRequest_TypeDefinitionIndex = 11331;

	class BattlePassGetInfoRequest : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x40

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSGETINFOREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

