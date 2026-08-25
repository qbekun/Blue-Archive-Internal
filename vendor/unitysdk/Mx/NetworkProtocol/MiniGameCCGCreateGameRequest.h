#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_FORCEDISCARDSAVE_OFFSET UNITYSDK_OFFSET(0xF49B80)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_SET_DISABLEPERK_OFFSET UNITYSDK_OFFSET(0xF49B90)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_DISABLEPERK_OFFSET UNITYSDK_OFFSET(0xF49BA0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_SET_FORCEDISCARDSAVE_OFFSET UNITYSDK_OFFSET(0xF49BB0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49BC0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49BD0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49BE0)
#define MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49BF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGCreateGameRequest_TypeDefinitionIndex = 11923;

	class MiniGameCCGCreateGameRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Boolean _ForceDiscardSave_k__BackingField; // 0x48
		::System::Boolean _DisablePerk_k__BackingField; // 0x49

		::System::Boolean get_ForceDiscardSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_FORCEDISCARDSAVE_OFFSET))(nullptr);
		}

		::System::Void set_DisablePerk(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_SET_DISABLEPERK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DisablePerk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_DISABLEPERK_OFFSET))(nullptr);
		}

		::System::Void set_ForceDiscardSave(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_SET_FORCEDISCARDSAVE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGCREATEGAMEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

