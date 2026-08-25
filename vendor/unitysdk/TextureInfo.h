#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }

	inline static constexpr unsigned int TextureInfo_TypeDefinitionIndex = 30586;

	class TextureInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Texture* texture; // 0x10
		::System::Boolean dynamic; // 0x18
		::System::Int32 refCount; // 0x1C

	};

