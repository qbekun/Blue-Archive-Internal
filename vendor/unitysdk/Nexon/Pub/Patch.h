#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_PATCH_GET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0x954C8E0)
#define NEXON_PUB_PATCH_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x954C8F0)
#define NEXON_PUB_PATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x954C900)

namespace Nexon::Pub
{
	inline static constexpr unsigned int Patch_TypeDefinitionIndex = 37555;

	class Patch : public Il2CppObject
	{
	public:
		::System::Int32 patch_version; // 0x10
		::System::String* resource_path; // 0x18

		::System::Int32 get_PatchVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCH_GET_PATCHVERSION_OFFSET))(nullptr);
		}

		::System::String* get_ResourcePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCH_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_PATCH_.CTOR_OFFSET))(nullptr);
		}

	};
}

