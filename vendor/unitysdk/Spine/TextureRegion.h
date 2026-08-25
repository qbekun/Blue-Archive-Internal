#pragma once
#include "../unitysdk.h"

#define SPINE_TEXTUREREGION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95E0350)
#define SPINE_TEXTUREREGION_GET_ORIGINALHEIGHT_OFFSET UNITYSDK_OFFSET(0x95E0360)
#define SPINE_TEXTUREREGION_GET_ORIGINALWIDTH_OFFSET UNITYSDK_OFFSET(0x95E0370)

namespace Spine
{
	inline static constexpr unsigned int TextureRegion_TypeDefinitionIndex = 35072;

	class TextureRegion : public Il2CppObject
	{
	public:
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14
		::System::Single u; // 0x18
		::System::Single v; // 0x1C
		::System::Single u2; // 0x20
		::System::Single v2; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTUREREGION_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_OriginalHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTUREREGION_GET_ORIGINALHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_OriginalWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TEXTUREREGION_GET_ORIGINALWIDTH_OFFSET))(nullptr);
		}

	};
}

