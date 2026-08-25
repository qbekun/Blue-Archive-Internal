#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CraftProcessCompleteType; }

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CraftProcessCompleteType_TypeDefinitionIndex = 12565;

	class CraftProcessCompleteType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::DBModel::CraftProcessCompleteType* None; // 0x0
		::MX::GameLogic::DBModel::CraftProcessCompleteType* ByTimeElapse; // 0x0
		::MX::GameLogic::DBModel::CraftProcessCompleteType* ByPlayer; // 0x0

	};
}

