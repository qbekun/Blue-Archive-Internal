#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Condition { class ICondition; }
namespace MXField::Shared::Condition { class IConditionChecker; }
namespace MXField::Shared::Quest { class FieldQuest; }

#define MXFIELD_SHARED_QUEST_FIELDQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6DF00)
#define MXFIELD_SHARED_QUEST_FIELDQUEST_ISCONDITIONSATISFIED_OFFSET UNITYSDK_OFFSET(0xE6DFC0)
#define MXFIELD_SHARED_QUEST_FIELDQUEST_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xE6E070)
#define MXFIELD_SHARED_QUEST_FIELDQUEST_LOADFROMJSON_OFFSET UNITYSDK_OFFSET(0xE6E150)

namespace MXField::Shared::Quest
{
	inline static constexpr unsigned int FieldQuest_TypeDefinitionIndex = 10520;

	class FieldQuest : public Il2CppObject
	{
	public:
		::System::Int64 Id; // 0x10
		::MXField::Shared::Condition::ICondition* Condition; // 0x18
		Il2CppObject* objectives; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_FIELDQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsConditionSatisfied(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_FIELDQUEST_ISCONDITIONSATISFIED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsClear(::MXField::Shared::Condition::IConditionChecker* arg)
		{
			return ((::System::Boolean(*)(::MXField::Shared::Condition::IConditionChecker*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_FIELDQUEST_ISCLEAR_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Quest::FieldQuest* LoadFromJson(::System::String* str)
		{
			return ((::MXField::Shared::Quest::FieldQuest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_QUEST_FIELDQUEST_LOADFROMJSON_OFFSET))(str, nullptr);
		}

	};
}

