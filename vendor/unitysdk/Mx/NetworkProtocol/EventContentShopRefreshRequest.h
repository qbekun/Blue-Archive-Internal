#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44880)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44890)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF448A0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_GET_SHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xF448B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF448C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_SET_SHOPCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0xF448D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentShopRefreshRequest_TypeDefinitionIndex = 11711;

	class EventContentShopRefreshRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::ShopCategoryType* _ShopCategoryType_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_ShopCategoryType()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_GET_SHOPCATEGORYTYPE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ShopCategoryType(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPREFRESHREQUEST_SET_SHOPCATEGORYTYPE_OFFSET))(arg, nullptr);
		}

	};
}

