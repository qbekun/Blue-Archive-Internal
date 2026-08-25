#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0xF3FF20)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3FF30)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3FF40)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF3FF50)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF3FF60)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF3FF70)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF3FF80)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF3FF90)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_TILEREWARDID_OFFSET UNITYSDK_OFFSET(0xF3FFA0)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF3FFB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestConquerRequest_TypeDefinitionIndex = 11543;

	class ConquestConquerRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::System::Int64 _TileRewardId_k__BackingField; // 0x58

		::System::Void set_TileRewardId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_TILEREWARDID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_TileRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_GET_TILEREWARDID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

