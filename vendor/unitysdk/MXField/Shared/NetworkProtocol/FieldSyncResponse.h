#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldSnapshot; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_FIELDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xE6E990)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6E9A0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6E9B0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_PLAYABLEDATEID_OFFSET UNITYSDK_OFFSET(0xE6E9C0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xE6E9D0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_SET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xE6E9E0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_SET_PLAYABLEDATEID_OFFSET UNITYSDK_OFFSET(0xE6E9F0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_SET_FIELDSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xE6EA00)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldSyncResponse_TypeDefinitionIndex = 10525;

	class FieldSyncResponse : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldSnapshot* _FieldSnapshot_k__BackingField; // 0x50
		::System::Int64 _PlayableDateId_k__BackingField; // 0x58
		Il2CppObject* _StageHistoryDBs_k__BackingField; // 0x60

		::MXField::Shared::Model::FieldSnapshot* get_FieldSnapshot()
		{
			return ((::MXField::Shared::Model::FieldSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_FIELDSNAPSHOT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_PlayableDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_PLAYABLEDATEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_StageHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_SET_STAGEHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayableDateId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_SET_PLAYABLEDATEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FieldSnapshot(::MXField::Shared::Model::FieldSnapshot* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldSnapshot*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSYNCRESPONSE_SET_FIELDSNAPSHOT_OFFSET))(arg, nullptr);
		}

	};
}

