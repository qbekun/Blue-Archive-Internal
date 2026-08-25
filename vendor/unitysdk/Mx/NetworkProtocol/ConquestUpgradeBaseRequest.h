#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF406C0)
#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF406D0)
#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF406E0)
#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF406F0)
#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF40700)
#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF40710)
#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40720)
#define MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF40730)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestUpgradeBaseRequest_TypeDefinitionIndex = 11555;

	class ConquestUpgradeBaseRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTUPGRADEBASEREQUEST_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

