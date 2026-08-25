#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class UpdateTiming; }

namespace Spine::Unity
{
	inline static constexpr unsigned int UpdateTiming_TypeDefinitionIndex = 35341;

	class UpdateTiming : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::Unity::UpdateTiming* ManualUpdate; // 0x0
		::Spine::Unity::UpdateTiming* InUpdate; // 0x0
		::Spine::Unity::UpdateTiming* InFixedUpdate; // 0x0
		::Spine::Unity::UpdateTiming* InLateUpdate; // 0x0

	};
}

