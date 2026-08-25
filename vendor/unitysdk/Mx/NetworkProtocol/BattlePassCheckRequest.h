#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF12070)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF12080)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF12090)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF120A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassCheckRequest_TypeDefinitionIndex = 11343;

	class BattlePassCheckRequest : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKREQUEST_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

	};
}

