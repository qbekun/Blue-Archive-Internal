#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKUNIONATTRIBUTE_GET_TAG_OFFSET UNITYSDK_OFFSET(0x9057F50)
#define MEMORYPACK_MEMORYPACKUNIONATTRIBUTE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9057F60)
#define MEMORYPACK_MEMORYPACKUNIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9057F70)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackUnionAttribute_TypeDefinitionIndex = 35401;

	class MemoryPackUnionAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::UInt16 _Tag_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18

		::System::UInt16 get_Tag()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKUNIONATTRIBUTE_GET_TAG_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKUNIONATTRIBUTE_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt16 arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::UInt16, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKUNIONATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

