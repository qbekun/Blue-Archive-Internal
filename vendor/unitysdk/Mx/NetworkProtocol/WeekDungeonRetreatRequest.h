#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF505E0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF505F0)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50600)
#define MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF50610)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WeekDungeonRetreatRequest_TypeDefinitionIndex = 12183;

	class WeekDungeonRetreatRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WEEKDUNGEONRETREATREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

