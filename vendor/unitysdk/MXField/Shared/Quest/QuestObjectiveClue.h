#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }
namespace MXField::Shared::Quest { class QuestObjectiveClue; }

#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xE6E350)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE6E360)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE6E390)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE6E490)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6E500)

namespace MXField::Shared::Quest
{
	inline static constexpr unsigned int QuestObjectiveClue_TypeDefinitionIndex = 10522;

	class QuestObjectiveClue : public Il2CppObject
	{
	public:
		::System::Int64 ClueId; // 0x10
		::System::String* ClueName; // 0x18

		::System::Boolean IsClear(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_ISCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MXField::Shared::Quest::QuestObjectiveClue* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Quest::QuestObjectiveClue*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVECLUE_.CTOR_OFFSET))(nullptr);
		}

	};
}

