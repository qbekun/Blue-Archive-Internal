#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50F80)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0xF50F90)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50FA0)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50FB0)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0xF50FC0)
#define MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50FD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidReceiveRewardRequest_TypeDefinitionIndex = 12207;

	class WorldRaidReceiveRewardRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::System::Int64 _PhaseId_k__BackingField; // 0x48

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_SET_PHASEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDRECEIVEREWARDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

