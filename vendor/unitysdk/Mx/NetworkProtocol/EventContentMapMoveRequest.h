#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44370)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0xF44380)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF443A0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF443B0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF443C0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0xF443D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF443E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF443F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF44400)
#define MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF44410)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentMapMoveRequest_TypeDefinitionIndex = 11699;

	class EventContentMapMoveRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x50
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x58

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTMAPMOVEREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

	};
}

