#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF14B60)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_SET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0xF14B70)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF14B80)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14B90)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF14BA0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14BB0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0xF14BC0)
#define MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14BD0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CampaignEnterTacticRequest_TypeDefinitionIndex = 11426;

	class CampaignEnterTacticRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonIndex_k__BackingField; // 0x48
		::System::Int64 _EnemyIndex_k__BackingField; // 0x50

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_EnemyIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_SET_ENEMYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_GET_ENEMYINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAMPAIGNENTERTACTICREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

