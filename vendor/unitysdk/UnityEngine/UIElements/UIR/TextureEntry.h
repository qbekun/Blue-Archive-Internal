#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::UIElements { class TextureId; }

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int TextureEntry_TypeDefinitionIndex = 30737;

	class TextureEntry : public Il2CppObject
	{
	public:
		::UnityEngine::Texture* source; // 0x10
		::UnityEngine::UIElements::TextureId* actual; // 0x18
		::System::Boolean replaced; // 0x1C

	};
}

