#pragma once
#include "../unitysdk.h"

#define MEMORYPACK_MEMORYPACKORDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9058000)
#define MEMORYPACK_MEMORYPACKORDERATTRIBUTE_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x9058020)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackOrderAttribute_TypeDefinitionIndex = 35404;

	class MemoryPackOrderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _Order_k__BackingField; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKORDERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Order()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKORDERATTRIBUTE_GET_ORDER_OFFSET))(nullptr);
		}

	};
}

