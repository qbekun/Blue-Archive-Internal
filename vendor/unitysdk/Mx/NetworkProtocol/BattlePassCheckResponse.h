#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF120B0)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_SET_HASCOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0xF120C0)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_GET_HASCOMPLETEMISSION_OFFSET UNITYSDK_OFFSET(0xF120D0)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF120E0)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_GET_HASNOTRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0xF120F0)
#define MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_SET_HASNOTRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0xF12100)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassCheckResponse_TypeDefinitionIndex = 11344;

	class BattlePassCheckResponse : public Il2CppObject
	{
	public:
		::System::Boolean _HasNotReceiveReward_k__BackingField; // 0x50
		::System::Boolean _HasCompleteMission_k__BackingField; // 0x51

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_HasCompleteMission(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_SET_HASCOMPLETEMISSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasCompleteMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_GET_HASCOMPLETEMISSION_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Boolean get_HasNotReceiveReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_GET_HASNOTRECEIVEREWARD_OFFSET))(nullptr);
		}

		::System::Void set_HasNotReceiveReward(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSCHECKRESPONSE_SET_HASNOTRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

	};
}

