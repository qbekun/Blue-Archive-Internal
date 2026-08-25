#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class SpineAtlasAsset; }
namespace Spine { class AtlasPage; }

#define SPINE_UNITY_MATERIALSTEXTURELOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95ED6A0)
#define SPINE_UNITY_MATERIALSTEXTURELOADER_UNLOAD_OFFSET UNITYSDK_OFFSET(0x95EDBB0)
#define SPINE_UNITY_MATERIALSTEXTURELOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x95EDBC0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MaterialsTextureLoader_TypeDefinitionIndex = 35286;

	class MaterialsTextureLoader : public Il2CppObject
	{
	public:
		::Spine::Unity::SpineAtlasAsset* atlasAsset; // 0x10

		::System::Void .ctor(::Spine::Unity::SpineAtlasAsset* arg)
		{
			((::System::Void(*)(::Spine::Unity::SpineAtlasAsset*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Unload(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER_UNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::Spine::AtlasPage* arg, ::System::String* str)
		{
			((::System::Void(*)(::Spine::AtlasPage*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATERIALSTEXTURELOADER_LOAD_OFFSET))(arg, str, nullptr);
		}

	};
}

