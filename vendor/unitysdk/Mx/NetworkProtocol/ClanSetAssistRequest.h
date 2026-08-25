#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xF3EDA0)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xF3EDB0)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3EDC0)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_SLOTNUMBER_OFFSET UNITYSDK_OFFSET(0xF3EDD0)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF3EDE0)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3EDF0)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xF3EE00)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_COMBATSTYLEINDEX_OFFSET UNITYSDK_OFFSET(0xF3EE10)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF3EE20)
#define MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xF3EE30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanSetAssistRequest_TypeDefinitionIndex = 11518;

	class ClanSetAssistRequest : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x40
		::System::Int32 _SlotNumber_k__BackingField; // 0x44
		::System::Int64 _CharacterDBId_k__BackingField; // 0x48
		::System::Int32 _CombatStyleIndex_k__BackingField; // 0x50

		::System::Int32 get_SlotNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_SLOTNUMBER_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_SlotNumber(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_SLOTNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_CombatStyleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_GET_COMBATSTYLEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_CombatStyleIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_COMBATSTYLEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANSETASSISTREQUEST_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

	};
}

