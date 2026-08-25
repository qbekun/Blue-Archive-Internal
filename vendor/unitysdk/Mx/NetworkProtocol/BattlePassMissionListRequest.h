#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11E10)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11E20)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11E30)
#define MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11E40)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassMissionListRequest_TypeDefinitionIndex = 11337;

	class BattlePassMissionListRequest : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSMISSIONLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

