#pragma once
#include "../../unitysdk.h"

#define SPINE_UNITY_SPINEATLASREGION_.CTOR_OFFSET UNITYSDK_OFFSET(0x961ECA0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAtlasRegion_TypeDefinitionIndex = 35375;

	class SpineAtlasRegion : public Il2CppObject
	{
	public:
		::System::String* atlasAssetField; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATLASREGION_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

