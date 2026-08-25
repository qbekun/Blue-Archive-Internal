#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E390)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E3A0)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E3B0)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4E3C0)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E3D0)
#define MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4E3E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioPortalRequest_TypeDefinitionIndex = 12093;

	class ScenarioPortalRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOPORTALREQUEST_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

	};
}

