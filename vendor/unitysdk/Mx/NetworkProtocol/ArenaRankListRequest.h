#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_GET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0xF111E0)
#define MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xF111F0)
#define MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11200)
#define MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_SET_STARTINDEX_OFFSET UNITYSDK_OFFSET(0xF11210)
#define MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11220)
#define MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xF11230)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaRankListRequest_TypeDefinitionIndex = 11297;

	class ArenaRankListRequest : public Il2CppObject
	{
	public:
		::System::Int32 _StartIndex_k__BackingField; // 0x40
		::System::Int32 _Count_k__BackingField; // 0x44

		::System::Int32 get_StartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_GET_STARTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_GET_COUNT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StartIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_SET_STARTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENARANKLISTREQUEST_SET_COUNT_OFFSET))(arg, nullptr);
		}

	};
}

