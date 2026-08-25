#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E5B0)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4E5C0)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E5D0)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E5E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SchoolDungeonEnterBattleRequest_TypeDefinitionIndex = 12101;

	class SchoolDungeonEnterBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

