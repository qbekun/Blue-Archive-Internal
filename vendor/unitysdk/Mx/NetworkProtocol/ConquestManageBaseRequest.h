#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40520)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_MANAGECOUNT_OFFSET UNITYSDK_OFFSET(0xF40530)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40540)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40550)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_MANAGECOUNT_OFFSET UNITYSDK_OFFSET(0xF40560)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF40570)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF40580)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF40590)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF405A0)
#define MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF405B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestManageBaseRequest_TypeDefinitionIndex = 11553;

	class ConquestManageBaseRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::System::Int32 _ManageCount_k__BackingField; // 0x58

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int32 get_ManageCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_MANAGECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_ManageCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_MANAGECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTMANAGEBASEREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

