#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class IConditionChecker; }
namespace MXField::Shared::Quest { class QuestObjectiveInteraction; }

#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xE6E510)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xE6E5D0)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE6E690)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xE6E830)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_EQUALS_OFFSET UNITYSDK_OFFSET(0xE6E850)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE6E940)
#define MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6E950)

namespace MXField::Shared::Quest
{
	inline static constexpr unsigned int QuestObjectiveInteraction_TypeDefinitionIndex = 10523;

	class QuestObjectiveInteraction : public Il2CppObject
	{
	public:
		::System::Int64 InteractionId; // 0x10

		::System::Boolean IsClear(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_ISCLEAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsClear(::MXField::Shared::Condition::IConditionChecker* arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_ISCLEAR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXField::Shared::Quest::QuestObjectiveInteraction* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Quest::QuestObjectiveInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_QUESTOBJECTIVEINTERACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

