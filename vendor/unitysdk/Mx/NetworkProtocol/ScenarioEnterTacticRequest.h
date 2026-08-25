#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E110)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E120)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF4E130)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_SET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0xF4E140)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E150)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0xF4E160)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E170)
#define MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF4E180)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioEnterTacticRequest_TypeDefinitionIndex = 12087;

	class ScenarioEnterTacticRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonIndex_k__BackingField; // 0x48
		::System::Int64 _EnemyIndex_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_EnemyIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_SET_ENEMYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EnemyIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_ENEMYINDEX_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOENTERTACTICREQUEST_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

	};
}

