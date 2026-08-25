#pragma once
#include "../unitysdk.h"

namespace Spine { class Inherit; }

namespace Spine
{
	inline static constexpr unsigned int Inherit_TypeDefinitionIndex = 35031;

	class Inherit : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::Inherit* Normal; // 0x0
		::Spine::Inherit* OnlyTranslation; // 0x0
		::Spine::Inherit* NoRotationOrReflection; // 0x0
		::Spine::Inherit* NoScale; // 0x0
		::Spine::Inherit* NoScaleOrReflection; // 0x0

	};
}

