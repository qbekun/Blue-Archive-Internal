#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class MGSGameMode; }

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int MGSGameMode_TypeDefinitionIndex = 15143;

	class MGSGameMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameShooting::MGSGameMode* Normal; // 0x0
		::MX::MinigameShooting::MGSGameMode* Hard; // 0x0
		::MX::MinigameShooting::MGSGameMode* Free; // 0x0

	};
}

