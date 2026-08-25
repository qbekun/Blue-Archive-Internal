#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Internal { class ReusableReadOnlySequenceBuilder; }

#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDERPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90718C0)
#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDERPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x906BD80)
#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDERPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x9071A20)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int ReusableReadOnlySequenceBuilderPool_TypeDefinitionIndex = 35455;

	class ReusableReadOnlySequenceBuilderPool : public Il2CppObject
	{
	public:
		Il2CppObject* queue; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDERPOOL_.CCTOR_OFFSET))(nullptr);
		}

		::MemoryPack::Internal::ReusableReadOnlySequenceBuilder* Rent()
		{
			return (return (::MemoryPack::Internal::ReusableReadOnlySequenceBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDERPOOL_RENT_OFFSET))(nullptr);
		}

		::System::Void Return(::MemoryPack::Internal::ReusableReadOnlySequenceBuilder* arg)
		{
			((::System::Void(*)(::MemoryPack::Internal::ReusableReadOnlySequenceBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDERPOOL_RETURN_OFFSET))(arg, nullptr);
		}

	};
}

