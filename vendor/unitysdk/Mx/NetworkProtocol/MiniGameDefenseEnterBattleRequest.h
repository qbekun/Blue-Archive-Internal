#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF49500)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49510)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49520)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49530)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF49540)
#define MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49550)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDefenseEnterBattleRequest_TypeDefinitionIndex = 11909;

	class MiniGameDefenseEnterBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageId_k__BackingField; // 0x48

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_GET_STAGEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDEFENSEENTERBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

