#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int VirtualOffsetSettings_TypeDefinitionIndex = 33815;

	class VirtualOffsetSettings : public Il2CppObject
	{
	public:
		::System::Boolean useVirtualOffset; // 0x10
		::System::Single outOfGeoOffset; // 0x14
		::System::Single searchMultiplier; // 0x18

	};
}

