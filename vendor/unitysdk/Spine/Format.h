#pragma once
#include "../unitysdk.h"

namespace Spine { class Format; }

namespace Spine
{
	inline static constexpr unsigned int Format_TypeDefinitionIndex = 35008;

	class Format : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::Spine::Format* Alpha; // 0x0
		::Spine::Format* Intensity; // 0x0
		::Spine::Format* LuminanceAlpha; // 0x0
		::Spine::Format* RGB565; // 0x0
		::Spine::Format* RGBA4444; // 0x0
		::Spine::Format* RGB888; // 0x0
		::Spine::Format* RGBA8888; // 0x0

	};
}

