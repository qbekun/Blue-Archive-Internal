#pragma once
#include "../../unitysdk.h"

namespace Spine { class AtlasPage; }

#define SPINE_UNITY_NOOPTEXTURELOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x95EDB90)
#define SPINE_UNITY_NOOPTEXTURELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x95EDBA0)
#define SPINE_UNITY_NOOPTEXTURELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95ED6D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int NoOpTextureLoader_TypeDefinitionIndex = 35285;

	class NoOpTextureLoader : public Il2CppObject
	{
	public:
		::System::Void Load(::Spine::AtlasPage* arg, ::System::String* str)
		{
			((::System::Void(*)(::Spine::AtlasPage*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER_LOAD_OFFSET))(arg, str, nullptr);
		}

		::System::Void Unload(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER_UNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_NOOPTEXTURELOADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

