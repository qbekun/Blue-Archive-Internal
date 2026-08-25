#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class PlayEndPointType; }

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int PlayEndPointType_TypeDefinitionIndex = 14105;

	class PlayEndPointType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::Logic::Battles::PlayEndPointType* End; // 0x0
		::MX::Logic::Battles::PlayEndPointType* LoopEnd; // 0x0

	};
}

