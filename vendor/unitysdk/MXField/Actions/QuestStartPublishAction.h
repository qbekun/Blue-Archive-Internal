#pragma once
#include "../../unitysdk.h"

namespace MXField::Quest { class FieldQuestStatus; }

#define MXFIELD_ACTIONS_QUESTSTARTPUBLISHACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF4D50)
#define MXFIELD_ACTIONS_QUESTSTARTPUBLISHACTION_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xEF4D90)
#define MXFIELD_ACTIONS_QUESTSTARTPUBLISHACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEF4DA0)

namespace MXField::Actions
{
	inline static constexpr unsigned int QuestStartPublishAction_TypeDefinitionIndex = 11118;

	class QuestStartPublishAction : public Il2CppObject
	{
	public:
		::MXField::Quest::FieldQuestStatus* _QuestStatus_k__BackingField; // 0x30

		::System::Void .ctor(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_QUESTSTARTPUBLISHACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::MXField::Quest::FieldQuestStatus* get_QuestStatus()
		{
			return ((::MXField::Quest::FieldQuestStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_QUESTSTARTPUBLISHACTION_GET_QUESTSTATUS_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_QUESTSTARTPUBLISHACTION_EXECUTE_OFFSET))(nullptr);
		}

	};
}

