#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49720)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49730)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49740)
#define MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49750)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameRoadPuzzleGetInfoRequest_TypeDefinitionIndex = 11913;

	class MiniGameRoadPuzzleGetInfoRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEROADPUZZLEGETINFOREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

