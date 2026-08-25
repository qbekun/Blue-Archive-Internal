#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_SET_SELECTITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF47880)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47890)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_SET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xF478A0)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_SET_TICKETITEMSERVERID_OFFSET UNITYSDK_OFFSET(0xF478B0)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0xF478C0)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF478D0)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_TICKETITEMSERVERID_OFFSET UNITYSDK_OFFSET(0xF478E0)
#define MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_SELECTITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF478F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemSelectTicketRequest_TypeDefinitionIndex = 11833;

	class ItemSelectTicketRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TicketItemServerId_k__BackingField; // 0x40
		::System::Int64 _SelectItemUniqueId_k__BackingField; // 0x48
		::System::Int32 _ConsumeCount_k__BackingField; // 0x50

		::System::Void set_SelectItemUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_SET_SELECTITEMUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_SET_CONSUMECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_TicketItemServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_SET_TICKETITEMSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConsumeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_CONSUMECOUNT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_TicketItemServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_TICKETITEMSERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectItemUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMSELECTTICKETREQUEST_GET_SELECTITEMUNIQUEID_OFFSET))(nullptr);
		}

	};
}

