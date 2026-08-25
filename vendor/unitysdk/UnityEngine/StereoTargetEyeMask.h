#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class StereoTargetEyeMask; }

namespace UnityEngine
{
	inline static constexpr unsigned int StereoTargetEyeMask_TypeDefinitionIndex = 31025;

	class StereoTargetEyeMask : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::StereoTargetEyeMask* None; // 0x0
		::UnityEngine::StereoTargetEyeMask* Left; // 0x0
		::UnityEngine::StereoTargetEyeMask* Right; // 0x0
		::UnityEngine::StereoTargetEyeMask* Both; // 0x0

	};
}

