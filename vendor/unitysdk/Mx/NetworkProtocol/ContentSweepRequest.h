#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF415C0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF415D0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xF415E0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xF415F0)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xF41600)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF41610)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF41620)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xF41630)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41640)
#define MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xF41650)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSweepRequest_TypeDefinitionIndex = 11585;

	class ContentSweepRequest : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _Content_k__BackingField; // 0x40
		::System::Int64 _StageId_k__BackingField; // 0x48
		::System::Int64 _EventContentId_k__BackingField; // 0x50
		::System::Int64 _Count_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Content(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_CONTENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_Content()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_GET_CONTENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSWEEPREQUEST_SET_COUNT_OFFSET))(arg, nullptr);
		}

	};
}

