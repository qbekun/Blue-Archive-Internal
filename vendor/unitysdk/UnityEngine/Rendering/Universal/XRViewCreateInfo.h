#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XRViewCreateInfo_TypeDefinitionIndex = 32812;

	class XRViewCreateInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* projMatrix; // 0x10
		::UnityEngine::Matrix4x4* viewMatrix; // 0x50
		::UnityEngine::Rect* viewport; // 0x90
		::System::Int32 textureArraySlice; // 0xA0

	};
}

