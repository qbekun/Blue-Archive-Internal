#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UIElements { class TextureId; }

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 30780;

	class State : public Il2CppObject
	{
	public:
		::UnityEngine::Material* material; // 0x10
		::UnityEngine::Texture* font; // 0x18
		::System::Single fontTexSDFScale; // 0x20
		::UnityEngine::UIElements::TextureId* texture; // 0x24
		::System::Int32 stencilRef; // 0x28

	};
}

