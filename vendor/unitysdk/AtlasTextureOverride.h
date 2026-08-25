#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }

#define ATLASTEXTUREOVERRIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9610F50)

	inline static constexpr unsigned int AtlasTextureOverride_TypeDefinitionIndex = 35322;

	class AtlasTextureOverride : public Il2CppObject
	{
	public:
		::System::Boolean overrideEnabled; // 0x10
		::UnityEngine::Texture* originalTexture; // 0x18
		::UnityEngine::Texture* replacementTexture; // 0x20

		::System::Boolean Equals(AtlasTextureOverride* arg)
		{
			return (return (::System::Boolean(*)(AtlasTextureOverride*, ::PVOID))((::PBYTE)hIl2Cpp + ATLASTEXTUREOVERRIDE_EQUALS_OFFSET))(arg, nullptr);
		}

	};

