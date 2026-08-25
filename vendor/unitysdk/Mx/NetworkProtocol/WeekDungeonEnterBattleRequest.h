#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF50400)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF50410)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0xF50420)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50430)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50440)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF50450)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonEnterBattleRequest_TypeDefinitionIndex = 12179;

	class WeekDungeonEnterBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonIndex_k__BackingField; // 0x48

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONENTERBATTLEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

