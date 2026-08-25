#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xF11280)
#define MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_SET_SEARCHSTARTDATE_OFFSET UNITYSDK_OFFSET(0xF11290)
#define MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xF112A0)
#define MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF112B0)
#define MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_GET_SEARCHSTARTDATE_OFFSET UNITYSDK_OFFSET(0xF112C0)
#define MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF112D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaHistoryRequest_TypeDefinitionIndex = 11299;

	class ArenaHistoryRequest : public Il2CppObject
	{
	public:
		::System::DateTime* _SearchStartDate_k__BackingField; // 0x40
		::System::Int32 _Count_k__BackingField; // 0x48

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_SearchStartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_SET_SEARCHSTARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_SearchStartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_GET_SEARCHSTARTDATE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENAHISTORYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

