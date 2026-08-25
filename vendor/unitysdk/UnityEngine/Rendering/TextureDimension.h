#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class TextureDimension; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TextureDimension_TypeDefinitionIndex = 31515;

	class TextureDimension : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::TextureDimension* Unknown; // 0x0
		::UnityEngine::Rendering::TextureDimension* None; // 0x0
		::UnityEngine::Rendering::TextureDimension* Any; // 0x0
		::UnityEngine::Rendering::TextureDimension* Tex2D; // 0x0
		::UnityEngine::Rendering::TextureDimension* Tex3D; // 0x0
		::UnityEngine::Rendering::TextureDimension* Cube; // 0x0
		::UnityEngine::Rendering::TextureDimension* Tex2DArray; // 0x0
		::UnityEngine::Rendering::TextureDimension* CubeArray; // 0x0

	};
}

