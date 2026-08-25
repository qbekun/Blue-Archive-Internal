#pragma once
#include "../../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE6EA10)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6EA20)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6EA30)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE6EA40)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_SET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6EA50)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EA60)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldInteractionRequest_TypeDefinitionIndex = 10526;

	class FieldInteractionRequest : public Il2CppObject
	{
	public:
		::System::Int64 _FieldSeasonId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FieldSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_SET_FIELDSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

