#pragma once
#include "../../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_SET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6ECB0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_GET_DATEID_OFFSET UNITYSDK_OFFSET(0xE6ECC0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6ECD0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_SET_DATEID_OFFSET UNITYSDK_OFFSET(0xE6ECE0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6ECF0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6ED00)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldEndDateRequest_TypeDefinitionIndex = 10532;

	class FieldEndDateRequest : public Il2CppObject
	{
	public:
		::System::Int64 _FieldSeasonId_k__BackingField; // 0x40
		::System::Int64 _DateId_k__BackingField; // 0x48

		::System::Void set_FieldSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_SET_FIELDSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_DateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_GET_DATEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_SET_DATEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATEREQUEST_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

	};
}

