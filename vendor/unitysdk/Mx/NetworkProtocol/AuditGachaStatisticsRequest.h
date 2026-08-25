#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11700)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11710)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_SET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11720)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11730)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF11740)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xF11750)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xF11760)
#define MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11770)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AuditGachaStatisticsRequest_TypeDefinitionIndex = 11317;

	class AuditGachaStatisticsRequest : public Il2CppObject
	{
	public:
		::System::Int64 _MerchandiseUniqueId_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48
		::System::Int64 _Count_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_MerchandiseUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_MERCHANDISEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_MerchandiseUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_SET_MERCHANDISEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_COUNT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_AUDITGACHASTATISTICSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

