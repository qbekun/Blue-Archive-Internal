#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class NodeGroupClearStateType; }

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int NodeGroupClearState_TypeDefinitionIndex = 20774;

	class NodeGroupClearState : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::NodeGroupClearStateType* Type; // 0x10
		::System::Int64 NextNodeGroupClearedNodeId; // 0x18

	};
}

