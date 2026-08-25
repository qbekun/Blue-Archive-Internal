#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AssistRelation; }

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AssistRelation_TypeDefinitionIndex = 12485;

	class AssistRelation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::DBModel::AssistRelation* None; // 0x0
		::MX::GameLogic::DBModel::AssistRelation* Clan; // 0x0
		::MX::GameLogic::DBModel::AssistRelation* Friend; // 0x0
		::MX::GameLogic::DBModel::AssistRelation* Cheat; // 0x0
		::MX::GameLogic::DBModel::AssistRelation* Stranger; // 0x0

	};
}

