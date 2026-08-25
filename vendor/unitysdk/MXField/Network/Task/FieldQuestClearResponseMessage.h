#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldQuestDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MXField::Shared::NetworkProtocol { class FieldQuestClearResponse; }

#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xEC1AB0)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARRESPONSEMESSAGE_GET_QUEST_OFFSET UNITYSDK_OFFSET(0xEC1AC0)
#define MXFIELD_NETWORK_TASK_FIELDQUESTCLEARRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC1800)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldQuestClearResponseMessage_TypeDefinitionIndex = 10845;

	class FieldQuestClearResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MXField::Shared::Model::FieldQuestDB* _Quest_k__BackingField; // 0x18
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x20

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARRESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldQuestDB* get_Quest()
		{
			return ((::MXField::Shared::Model::FieldQuestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARRESPONSEMESSAGE_GET_QUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Shared::NetworkProtocol::FieldQuestClearResponse* arg)
		{
			((::System::Void(*)(::MXField::Shared::NetworkProtocol::FieldQuestClearResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDQUESTCLEARRESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

