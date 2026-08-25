#pragma once
#include "../../unitysdk.h"

namespace MXField::Quest { class QuestStatus; }

namespace MXField::Quest
{
	inline static constexpr unsigned int QuestStatus_TypeDefinitionIndex = 10824;

	class QuestStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXField::Quest::QuestStatus* Disabled; // 0x0
		::MXField::Quest::QuestStatus* InProgress; // 0x0
		::MXField::Quest::QuestStatus* Clear; // 0x0

	};
}

