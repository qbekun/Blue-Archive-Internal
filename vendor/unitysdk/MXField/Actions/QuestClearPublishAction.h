#pragma once
#include "../../unitysdk.h"

namespace MXField::Quest { class FieldQuestStatus; }

#define MXFIELD_ACTIONS_QUESTCLEARPUBLISHACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEF4BE0)
#define MXFIELD_ACTIONS_QUESTCLEARPUBLISHACTION_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xEF4D00)
#define MXFIELD_ACTIONS_QUESTCLEARPUBLISHACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF4D10)

namespace MXField::Actions
{
	inline static constexpr unsigned int QuestClearPublishAction_TypeDefinitionIndex = 11117;

	class QuestClearPublishAction : public Il2CppObject
	{
	public:
		::MXField::Quest::FieldQuestStatus* _QuestStatus_k__BackingField; // 0x30

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_QUESTCLEARPUBLISHACTION_EXECUTE_OFFSET))(nullptr);
		}

		::MXField::Quest::FieldQuestStatus* get_QuestStatus()
		{
			return ((::MXField::Quest::FieldQuestStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_QUESTCLEARPUBLISHACTION_GET_QUESTSTATUS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_QUESTCLEARPUBLISHACTION_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

