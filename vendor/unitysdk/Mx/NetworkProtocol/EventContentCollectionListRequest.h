#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xF45550)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45560)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45570)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF45580)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xF45590)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF455A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentCollectionListRequest_TypeDefinitionIndex = 11739;

	class EventContentCollectionListRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		Il2CppObject* _GroupId_k__BackingField; // 0x48

		Il2CppObject* get_GroupId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCOLLECTIONLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

