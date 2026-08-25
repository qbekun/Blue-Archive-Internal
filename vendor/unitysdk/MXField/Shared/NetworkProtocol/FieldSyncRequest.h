#pragma once
#include "../../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6E960)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_SET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6E970)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE63FA0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6E980)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldSyncRequest_TypeDefinitionIndex = 10524;

	class FieldSyncRequest : public Il2CppObject
	{
	public:
		::System::Int64 _FieldSeasonId_k__BackingField; // 0x40

		::System::Int64 get_FieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::System::Void set_FieldSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_SET_FIELDSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

