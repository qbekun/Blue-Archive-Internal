#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class NodeGroupClearStateType; }

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int NodeGroupClearStateType_TypeDefinitionIndex = 20773;

	class NodeGroupClearStateType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameCCG::UI::NodeGroupClearStateType* NotClearedStartNode; // 0x0
		::MX::MinigameCCG::UI::NodeGroupClearStateType* NotCleared; // 0x0
		::MX::MinigameCCG::UI::NodeGroupClearStateType* Cleared_NotNext; // 0x0
		::MX::MinigameCCG::UI::NodeGroupClearStateType* Cleared_AndNext; // 0x0

	};
}

