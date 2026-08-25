#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF50BC0)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_REQUESTONLYWORLDBOSSDATA_OFFSET UNITYSDK_OFFSET(0xF50BD0)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50BE0)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_SET_REQUESTONLYWORLDBOSSDATA_OFFSET UNITYSDK_OFFSET(0xF50BF0)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xF50C00)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF50C10)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xF50C20)
#define MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF50C30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int WorldRaidBossListRequest_TypeDefinitionIndex = 12201;

	class WorldRaidBossListRequest : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x40
		::System::Int64 _SeasonId_k__BackingField; // 0x48
		::System::Boolean _RequestOnlyWorldBossData_k__BackingField; // 0x50

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RequestOnlyWorldBossData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_REQUESTONLYWORLDBOSSDATA_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_RequestOnlyWorldBossData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_SET_REQUESTONLYWORLDBOSSDATA_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_WORLDRAIDBOSSLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

