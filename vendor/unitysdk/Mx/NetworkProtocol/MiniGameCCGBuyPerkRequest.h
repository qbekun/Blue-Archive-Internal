#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A3A0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A3B0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_GET_PERKID_OFFSET UNITYSDK_OFFSET(0xF4A3C0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_SET_PERKID_OFFSET UNITYSDK_OFFSET(0xF4A3D0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF4A3E0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A3F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGBuyPerkRequest_TypeDefinitionIndex = 11945;

	class MiniGameCCGBuyPerkRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _PerkId_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_PerkId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_GET_PERKID_OFFSET))(nullptr);
		}

		::System::Void set_PerkId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_SET_PERKID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGBUYPERKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

