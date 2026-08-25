#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldSnapshot; }
namespace MXField::Shared::NetworkProtocol { class FieldSyncResponse; }

#define MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC2590)
#define MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_GET_PLAYABLEDATEID_OFFSET UNITYSDK_OFFSET(0xEC29F0)
#define MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_GET_SNAPSHOT_OFFSET UNITYSDK_OFFSET(0xEC2A00)
#define MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_GET_STAGEHISTORYDBS_OFFSET UNITYSDK_OFFSET(0xEC2A10)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldSyncResponseMessage_TypeDefinitionIndex = 10854;

	class FieldSyncResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MXField::Shared::Model::FieldSnapshot* _Snapshot_k__BackingField; // 0x18
		Il2CppObject* _StageHistoryDBs_k__BackingField; // 0x20
		::System::Int64 _PlayableDateId_k__BackingField; // 0x28

		::System::Void .ctor(::MXField::Shared::NetworkProtocol::FieldSyncResponse* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldSyncResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PlayableDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_GET_PLAYABLEDATEID_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldSnapshot* get_Snapshot()
		{
			return ((::MXField::Shared::Model::FieldSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_GET_SNAPSHOT_OFFSET))(nullptr);
		}

		Il2CppObject* get_StageHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDSYNCRESPONSEMESSAGE_GET_STAGEHISTORYDBS_OFFSET))(nullptr);
		}

	};
}

