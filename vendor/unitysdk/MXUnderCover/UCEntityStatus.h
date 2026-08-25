#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityStatus; }

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntityStatus_TypeDefinitionIndex = 9709;

	class UCEntityStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXUnderCover::UCEntityStatus* None; // 0x0
		::MXUnderCover::UCEntityStatus* StunReady; // 0x0
		::MXUnderCover::UCEntityStatus* Stun; // 0x0

	};
}

