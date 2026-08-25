#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xF49D00)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49D10)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF49D20)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xF49D30)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF49D40)
#define MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF49D50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MiniGameCCGEnterStageRequest_TypeDefinitionIndex = 11927;

	class MiniGameCCGEnterStageRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _NodeId_k__BackingField; // 0x48

		::System::Void set_NodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_SET_NODEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MINIGAMECCGENTERSTAGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

