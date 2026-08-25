#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DF00)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4DF10)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4DF20)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0xF4DF30)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0xF4DF40)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4DF60)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DF70)
#define MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4DF80)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioMapMoveRequest_TypeDefinitionIndex = 12083;

	class ScenarioMapMoveRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x48
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOMAPMOVEREQUEST_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

	};
}

