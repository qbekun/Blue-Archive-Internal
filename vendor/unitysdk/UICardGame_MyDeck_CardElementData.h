#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class MinigameCCGCardExcel; }
namespace MX::MinigameCCG { class CCGCard; }
namespace MX::MinigameCCG { class CCGEntityLocation; }

	inline static constexpr unsigned int UICardGame_MyDeck_CardElementData_TypeDefinitionIndex = 450;

	class UICardGame_MyDeck_CardElementData : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MinigameCCGCardExcel* excel; // 0x10
		::MX::MinigameCCG::CCGCard* entity; // 0x20
		::MX::MinigameCCG::CCGEntityLocation* Location; // 0x28
		::System::Boolean IsBattleState; // 0x2C

	};

