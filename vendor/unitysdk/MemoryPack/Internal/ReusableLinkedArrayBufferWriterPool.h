#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Internal { class ReusableLinkedArrayBufferWriter; }

#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITERPOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x906E300)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITERPOOL_RENT_OFFSET UNITYSDK_OFFSET(0x906AE10)
#define MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITERPOOL_RETURN_OFFSET UNITYSDK_OFFSET(0x906E390)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int ReusableLinkedArrayBufferWriterPool_TypeDefinitionIndex = 35449;

	class ReusableLinkedArrayBufferWriterPool : public Il2CppObject
	{
	public:
		Il2CppObject* queue; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITERPOOL_.CCTOR_OFFSET))(nullptr);
		}

		::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* Rent()
		{
			return (return (::MemoryPack::Internal::ReusableLinkedArrayBufferWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITERPOOL_RENT_OFFSET))(nullptr);
		}

		::System::Void Return(::MemoryPack::Internal::ReusableLinkedArrayBufferWriter* arg)
		{
			((::System::Void(*)(::MemoryPack::Internal::ReusableLinkedArrayBufferWriter*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLELINKEDARRAYBUFFERWRITERPOOL_RETURN_OFFSET))(arg, nullptr);
		}

	};
}

