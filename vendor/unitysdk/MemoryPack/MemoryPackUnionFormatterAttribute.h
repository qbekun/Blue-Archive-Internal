#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKUNIONFORMATTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9057FB0)
#define MEMORYPACK_MEMORYPACKUNIONFORMATTERATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9057FE0)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackUnionFormatterAttribute_TypeDefinitionIndex = 35402;

	class MemoryPackUnionFormatterAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKUNIONFORMATTERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKUNIONFORMATTERATTRIBUTE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

