#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0xF41020)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF41030)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF41040)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41050)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41060)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF41070)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0xF41080)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF41090)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF410A0)
#define MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF410B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestMainStoryConquerRequest_TypeDefinitionIndex = 11573;

	class ConquestMainStoryConquerRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::System::Int64 _TileRewardId_k__BackingField; // 0x58

		::System::Int64 get_TileRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_TILEREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_TILEREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMAINSTORYCONQUERREQUEST_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

