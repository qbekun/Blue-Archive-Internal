#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF50AC0)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50AD0)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50AE0)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50AF0)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50B00)
#define MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF50B10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidLobbyRequest_TypeDefinitionIndex = 12199;

	class WorldRaidLobbyRequest : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x40
		::System::Int64 _SeasonId_k__BackingField; // 0x48

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDLOBBYREQUEST_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

	};
}

