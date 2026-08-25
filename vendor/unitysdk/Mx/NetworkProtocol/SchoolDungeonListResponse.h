#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E570)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_GET_SCHOOLDUNGEONSTAGEHISTORYDBLIST_OFFSET UNITYSDK_OFFSET(0xF4E580)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_SET_SCHOOLDUNGEONSTAGEHISTORYDBLIST_OFFSET UNITYSDK_OFFSET(0xF4E590)
#define MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E5A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int SchoolDungeonListResponse_TypeDefinitionIndex = 12100;

	class SchoolDungeonListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _SchoolDungeonStageHistoryDBList_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_SchoolDungeonStageHistoryDBList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_GET_SCHOOLDUNGEONSTAGEHISTORYDBLIST_OFFSET))(nullptr);
		}

		::System::Void set_SchoolDungeonStageHistoryDBList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_SET_SCHOOLDUNGEONSTAGEHISTORYDBLIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCHOOLDUNGEONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

