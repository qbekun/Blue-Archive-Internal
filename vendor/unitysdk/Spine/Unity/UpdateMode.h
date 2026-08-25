#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class UpdateMode; }

namespace Spine::Unity
{
	inline static constexpr unsigned int UpdateMode_TypeDefinitionIndex = 35340;

	class UpdateMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::Unity::UpdateMode* Nothing; // 0x0
		::Spine::Unity::UpdateMode* OnlyAnimationStatus; // 0x0
		::Spine::Unity::UpdateMode* OnlyEventTimelines; // 0x0
		::Spine::Unity::UpdateMode* EverythingExceptMesh; // 0x0
		::Spine::Unity::UpdateMode* FullUpdate; // 0x0

	};
}

