#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44640)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF44650)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF44660)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF44670)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xF44680)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF44690)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF446A0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF446B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentPortalRequest_TypeDefinitionIndex = 11705;

	class EventContentPortalRequest : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x50

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTPORTALREQUEST_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

	};
}

