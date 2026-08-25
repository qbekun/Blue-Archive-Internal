#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftState; }

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CraftState_TypeDefinitionIndex = 12566;

	class CraftState : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::DBModel::CraftState* None; // 0x0
		::MX::GameLogic::DBModel::CraftState* BaseNode; // 0x0
		::MX::GameLogic::DBModel::CraftState* NodeSelecting; // 0x0
		::MX::GameLogic::DBModel::CraftState* Crafting; // 0x0
		::MX::GameLogic::DBModel::CraftState* Complete; // 0x0

	};
}

