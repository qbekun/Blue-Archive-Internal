#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGCampOption; }

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameCCGCampOption_TypeDefinitionIndex = 12644;

	class MiniGameCCGCampOption : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::GameLogic::DBModel::MiniGameCCGCampOption* Invalid; // 0x0
		::MX::GameLogic::DBModel::MiniGameCCGCampOption* Heal; // 0x0
		::MX::GameLogic::DBModel::MiniGameCCGCampOption* Revive; // 0x0
		::MX::GameLogic::DBModel::MiniGameCCGCampOption* RemoveCard; // 0x0
		::MX::GameLogic::DBModel::MiniGameCCGCampOption* Skip; // 0x0

	};
}

