#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class DepthTextureMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int DepthTextureMode_TypeDefinitionIndex = 31038;

	class DepthTextureMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::DepthTextureMode* None; // 0x0
		::UnityEngine::DepthTextureMode* Depth; // 0x0
		::UnityEngine::DepthTextureMode* DepthNormals; // 0x0
		::UnityEngine::DepthTextureMode* MotionVectors; // 0x0

	};
}

