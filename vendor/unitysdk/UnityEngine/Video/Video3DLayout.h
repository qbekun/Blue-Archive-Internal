#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Video { class Video3DLayout; }

namespace UnityEngine::Video
{
	inline static constexpr unsigned int Video3DLayout_TypeDefinitionIndex = 37729;

	class Video3DLayout : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Video::Video3DLayout* No3D; // 0x0
		::UnityEngine::Video::Video3DLayout* SideBySide3D; // 0x0
		::UnityEngine::Video::Video3DLayout* OverUnder3D; // 0x0

	};
}

