#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF447C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF447D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF447E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_GET_CATEGORYLIST_OFFSET UNITYSDK_OFFSET(0xF447F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_SET_CATEGORYLIST_OFFSET UNITYSDK_OFFSET(0xF44800)
#define MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44810)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentShopListRequest_TypeDefinitionIndex = 11709;

	class EventContentShopListRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		Il2CppObject* _CategoryList_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_GET_CATEGORYLIST_OFFSET))(nullptr);
		}

		::System::Void set_CategoryList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_SET_CATEGORYLIST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTSHOPLISTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};
}

