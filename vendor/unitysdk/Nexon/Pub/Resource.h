#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_RESOURCE_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x954C7F0)
#define NEXON_PUB_RESOURCE_GET_RESOURCESIZE_OFFSET UNITYSDK_OFFSET(0x954C800)
#define NEXON_PUB_RESOURCE_GET_RESOURCEHASH_OFFSET UNITYSDK_OFFSET(0x954C810)
#define NEXON_PUB_RESOURCE_GET_LANGUAGE_OFFSET UNITYSDK_OFFSET(0x954C820)
#define NEXON_PUB_RESOURCE_GET_TEXTUREENCODETYPE_OFFSET UNITYSDK_OFFSET(0x954C830)
#define NEXON_PUB_RESOURCE_GET_TEXTUREQUALITYLEVEL_OFFSET UNITYSDK_OFFSET(0x954C840)
#define NEXON_PUB_RESOURCE_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x954C850)
#define NEXON_PUB_RESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C860)

namespace Nexon::Pub
{
	inline static constexpr unsigned int Resource_TypeDefinitionIndex = 37553;

	class Resource : public Il2CppObject
	{
	public:
		::System::String* resource_path; // 0x10
		::System::Int64 resource_size; // 0x18
		::System::String* resource_hash; // 0x20
		::System::String* lang; // 0x28
		::System::String* texture_encode_type; // 0x30
		::System::Int32 texture_quality_level; // 0x38
		::System::String* group; // 0x40

		::System::String* get_ResourcePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_ResourceSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_GET_RESOURCESIZE_OFFSET))(nullptr);
		}

		::System::String* get_ResourceHash()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_GET_RESOURCEHASH_OFFSET))(nullptr);
		}

		::System::String* get_Language()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_GET_LANGUAGE_OFFSET))(nullptr);
		}

		::System::String* get_TextureEncodeType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_GET_TEXTUREENCODETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_TextureQualityLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_GET_TEXTUREQUALITYLEVEL_OFFSET))(nullptr);
		}

		::System::String* get_Group()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_GET_GROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_RESOURCE_.CTOR_OFFSET))(nullptr);
		}

	};
}

