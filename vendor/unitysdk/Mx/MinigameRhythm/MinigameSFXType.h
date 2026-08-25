#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameRhythm { class MinigameSFXType; }

namespace MX::MinigameRhythm
{
	inline static constexpr unsigned int MinigameSFXType_TypeDefinitionIndex = 20408;

	class MinigameSFXType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::MinigameRhythm::MinigameSFXType* EmptyHit; // 0x0
		::MX::MinigameRhythm::MinigameSFXType* SingleHit; // 0x0
		::MX::MinigameRhythm::MinigameSFXType* DoubleHit; // 0x0
		::MX::MinigameRhythm::MinigameSFXType* FlickHit; // 0x0
		::MX::MinigameRhythm::MinigameSFXType* LongHit; // 0x0

	};
}

