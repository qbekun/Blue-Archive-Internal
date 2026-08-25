#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class PlayStartPointType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int PlayStartPointType_TypeDefinitionIndex = 14106;

	class PlayStartPointType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::PlayStartPointType* Start; // 0x0
		::MX::Logic::Battles::PlayStartPointType* LoopStart; // 0x0

	};
}

