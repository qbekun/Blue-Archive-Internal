#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldDateHistoryDB; }

#define MXFIELD_NETWORK_TASK_FIELDENDDATERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xEC0B70)
#define MXFIELD_NETWORK_TASK_FIELDENDDATERESPONSEMESSAGE_GET_DATEHISTORYDB_OFFSET UNITYSDK_OFFSET(0xEC0E00)

namespace MXField::Network::Task
{
	inline static constexpr unsigned int FieldEndDateResponseMessage_TypeDefinitionIndex = 10839;

	class FieldEndDateResponseMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MXField::Shared::Model::FieldDateHistoryDB* _DateHistoryDB_k__BackingField; // 0x18

		::System::Void .ctor(::MXField::Shared::Model::FieldDateHistoryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldDateHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATERESPONSEMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Model::FieldDateHistoryDB* get_DateHistoryDB()
		{
			return ((::MXField::Shared::Model::FieldDateHistoryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_NETWORK_TASK_FIELDENDDATERESPONSEMESSAGE_GET_DATEHISTORYDB_OFFSET))(nullptr);
		}

	};
}

