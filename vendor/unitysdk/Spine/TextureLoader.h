#pragma once
#include "../unitysdk.h"

namespace Spine { class AtlasPage; }

#define SPINE_TEXTURELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_TEXTURELOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine
{
	inline static constexpr unsigned int TextureLoader_TypeDefinitionIndex = 35013;

	class TextureLoader : public Il2CppObject
	{
	public:
		::System::Void Unload(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTURELOADER_UNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::Spine::AtlasPage* arg, ::System::String* str)
		{
			((::System::Void(*)(::Spine::AtlasPage*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTURELOADER_LOAD_OFFSET))(arg, str, nullptr);
		}

	};
}

