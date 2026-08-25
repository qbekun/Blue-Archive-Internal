#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xF10C40)
#define MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xF10C50)
#define MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF10C60)
#define MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF10C70)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaSettingChangeRequest_TypeDefinitionIndex = 11281;

	class ArenaSettingChangeRequest : public Il2CppObject
	{
	public:
		::System::Int64 _MapId_k__BackingField; // 0x40

		::System::Int64 get_MapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_GET_MAPID_OFFSET))(nullptr);
		}

		::System::Void set_MapId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_SET_MAPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGCHANGEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

