#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49000)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49010)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49020)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49030)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xF49040)
#define MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xF49050)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameDreamMakerNewGameRequest_TypeDefinitionIndex = 11897;

	class MiniGameDreamMakerNewGameRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _Multiplier_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Multiplier(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_SET_MULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Multiplier()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMEDREAMMAKERNEWGAMEREQUEST_GET_MULTIPLIER_OFFSET))(nullptr);
		}

	};
}

