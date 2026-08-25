#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF40460)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF40470)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF40480)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40490)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF404A0)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF404B0)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF404C0)
#define MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF404D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestNormalizeEchelonRequest_TypeDefinitionIndex = 11551;

	class ConquestNormalizeEchelonRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTNORMALIZEECHELONREQUEST_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};
}

