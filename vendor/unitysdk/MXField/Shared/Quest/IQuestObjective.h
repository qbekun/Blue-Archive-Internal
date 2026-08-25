#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }

#define MXFIELD_SHARED_QUEST_IQUESTOBJECTIVE_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::Shared::Quest
{
	inline static constexpr unsigned int IQuestObjective_TypeDefinitionIndex = 10521;

	class IQuestObjective : public Il2CppObject
	{
	public:
		::System::Boolean IsClear(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_IQUESTOBJECTIVE_ISCLEAR_OFFSET))(arg, nullptr);
		}

	};
}

