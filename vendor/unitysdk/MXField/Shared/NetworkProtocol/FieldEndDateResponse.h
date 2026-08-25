#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldDateHistoryDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_GET_DATEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xE6ED10)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6ED20)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6ED30)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_SET_DATEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xE6ED40)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldEndDateResponse_TypeDefinitionIndex = 10533;

	class FieldEndDateResponse : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldDateHistoryDB* _DateHistoryDB_k__BackingField; // 0x50

		::MXField::Shared::Model::FieldDateHistoryDB* get_DateHistoryDB()
		{
			return ((::MXField::Shared::Model::FieldDateHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_GET_DATEHISTORYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DateHistoryDB(::MXField::Shared::Model::FieldDateHistoryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldDateHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDENDDATERESPONSE_SET_DATEHISTORYDB_OFFSET))(arg, nullptr);
		}

	};
}

