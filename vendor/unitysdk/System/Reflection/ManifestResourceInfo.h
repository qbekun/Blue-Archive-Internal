#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x923B6A0)
#define SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_GET_REFERENCEDASSEMBLY_OFFSET UNITYSDK_OFFSET(0x923B6F0)
#define SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x923B700)
#define SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_GET_RESOURCELOCATION_OFFSET UNITYSDK_OFFSET(0x923B710)

namespace System::Reflection
{
	inline static constexpr unsigned int ManifestResourceInfo_TypeDefinitionIndex = 24861;

	class ManifestResourceInfo : public Il2CppObject
	{
	public:
		::System::Reflection::Assembly* _ReferencedAssembly_k__BackingField; // 0x10
		::System::String* _FileName_k__BackingField; // 0x18
		::System::Reflection::ResourceLocation* _ResourceLocation_k__BackingField; // 0x20

		::System::Void .ctor(::System::Reflection::Assembly* arg, ::System::String* str, ::System::Reflection::ResourceLocation* arg)
		{
			((::System::Void(*)(::System::Reflection::Assembly*, ::System::String*, ::System::Reflection::ResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Reflection::Assembly* get_ReferencedAssembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_GET_REFERENCEDASSEMBLY_OFFSET))(nullptr);
		}

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Reflection::ResourceLocation* get_ResourceLocation()
		{
			return (return (::System::Reflection::ResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MANIFESTRESOURCEINFO_GET_RESOURCELOCATION_OFFSET))(nullptr);
		}

	};
}

