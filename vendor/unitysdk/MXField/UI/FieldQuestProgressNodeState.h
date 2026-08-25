#pragma once
#include "../../unitysdk.h"

namespace MXField::UI { class FieldQuestProgressNodeState; }

namespace MXField::UI
{
	inline static constexpr unsigned int FieldQuestProgressNodeState_TypeDefinitionIndex = 10683;

	class FieldQuestProgressNodeState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXField::UI::FieldQuestProgressNodeState* Inactive; // 0x0
		::MXField::UI::FieldQuestProgressNodeState* Ready; // 0x0
		::MXField::UI::FieldQuestProgressNodeState* InProgress; // 0x0
		::MXField::UI::FieldQuestProgressNodeState* Complete; // 0x0

	};
}

