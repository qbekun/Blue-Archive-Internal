#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF503A0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_GET_WEEKDUNGEONSTAGEHISTORYDBLIST_OFFSET UNITYSDK_OFFSET(0xF503B0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF503C0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_GET_ADDITIONALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xF503D0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_SET_WEEKDUNGEONSTAGEHISTORYDBLIST_OFFSET UNITYSDK_OFFSET(0xF503E0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_SET_ADDITIONALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xF503F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonListResponse_TypeDefinitionIndex = 12178;

	class WeekDungeonListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _AdditionalStageIdList_k__BackingField; // 0x50
		Il2CppObject* _WeekDungeonStageHistoryDBList_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_WeekDungeonStageHistoryDBList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_GET_WEEKDUNGEONSTAGEHISTORYDBLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_AdditionalStageIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_GET_ADDITIONALSTAGEIDLIST_OFFSET))(nullptr);
		}

		::System::Void set_WeekDungeonStageHistoryDBList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_SET_WEEKDUNGEONSTAGEHISTORYDBLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_AdditionalStageIdList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONLISTRESPONSE_SET_ADDITIONALSTAGEIDLIST_OFFSET))(arg, nullptr);
		}

	};
}

