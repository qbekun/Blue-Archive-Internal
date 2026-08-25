#pragma once
#include "../unitysdk.h"

namespace Spine { class AtlasPage; }
namespace Spine { class AtlasRegion; }

#define SPINE_ATLASREGION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95A47C0)
#define SPINE_ATLASREGION_SET_PACKEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x95A5620)
#define SPINE_ATLASREGION_GET_PACKEDWIDTH_OFFSET UNITYSDK_OFFSET(0x95A5630)
#define SPINE_ATLASREGION_GET_ORIGINALWIDTH_OFFSET UNITYSDK_OFFSET(0x95A5640)
#define SPINE_ATLASREGION_SET_PACKEDWIDTH_OFFSET UNITYSDK_OFFSET(0x95A5650)
#define SPINE_ATLASREGION_GET_ORIGINALHEIGHT_OFFSET UNITYSDK_OFFSET(0x95A5660)
#define SPINE_ATLASREGION_CLONE_OFFSET UNITYSDK_OFFSET(0x95A5670)
#define SPINE_ATLASREGION_GET_PACKEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x95A56F0)

namespace Spine
{
	inline static constexpr unsigned int AtlasRegion_TypeDefinitionIndex = 35012;

	class AtlasRegion : public Il2CppObject
	{
	public:
		::Spine::AtlasPage* page; // 0x28
		::System::String* name; // 0x30
		::System::Int32 x; // 0x38
		::System::Int32 y; // 0x3C
		::System::Single offsetX; // 0x40
		::System::Single offsetY; // 0x44
		::System::Int32 originalWidth; // 0x48
		::System::Int32 originalHeight; // 0x4C
		::System::Int32 degrees; // 0x50
		::System::Boolean rotate; // 0x54
		::System::Int32 index; // 0x58
		::Il2CppArray<::System::Object*>* names; // 0x60
		::Il2CppArray<::System::Object*>* values; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_packedHeight(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_SET_PACKEDHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_packedWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_PACKEDWIDTH_OFFSET))(nullptr);
		}

		::System::Int32 get_OriginalWidth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_ORIGINALWIDTH_OFFSET))(nullptr);
		}

		::System::Void set_packedWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_SET_PACKEDWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OriginalHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_ORIGINALHEIGHT_OFFSET))(nullptr);
		}

		::Spine::AtlasRegion* Clone()
		{
			return (return (::Spine::AtlasRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_packedHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASREGION_GET_PACKEDHEIGHT_OFFSET))(nullptr);
		}

	};
}

