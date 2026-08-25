#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCBTNodeTag; }

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTNodeTag_TypeDefinitionIndex = 9666;

	class UCBTNodeTag : public Il2CppObject
	{
	public:
		::System::UInt16 value__; // 0x10
		::MXUnderCover::UCBTNodeTag* Begin; // 0x0
		::MXUnderCover::UCBTNodeTag* GetNextPath; // 0x0
		::MXUnderCover::UCBTNodeTag* MovePath; // 0x0
		::MXUnderCover::UCBTNodeTag* AfterMovePath; // 0x0
		::MXUnderCover::UCBTNodeTag* GuardMode; // 0x0
		::MXUnderCover::UCBTNodeTag* IsStunned; // 0x0
		::MXUnderCover::UCBTNodeTag* IsStunnedReady; // 0x0
		::MXUnderCover::UCBTNodeTag* IsConfused_UNUSED; // 0x0
		::MXUnderCover::UCBTNodeTag* Stun; // 0x0
		::MXUnderCover::UCBTNodeTag* StunReady; // 0x0
		::MXUnderCover::UCBTNodeTag* FindNoiseMaker; // 0x0
		::MXUnderCover::UCBTNodeTag* LookAtNoiseMaker; // 0x0
		::MXUnderCover::UCBTNodeTag* CustomAnimation; // 0x0
		::MXUnderCover::UCBTNodeTag* End; // 0x0

	};
}

