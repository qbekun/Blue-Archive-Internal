#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_TYPEHELPERS_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0x905C6D0)
#define MEMORYPACK_INTERNAL_TYPEHELPERS_ISREFERENCEORNULLABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_INTERNAL_TYPEHELPERS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9071FF0)
#define MEMORYPACK_INTERNAL_TYPEHELPERS_TRYGETUNMANAGEDSZARRAYELEMENTSIZEORMEMORYPACKABLEFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int TypeHelpers_TypeDefinitionIndex = 35460;

	class TypeHelpers : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* isReferenceOrContainsReferences; // 0x0
		::System::Reflection::MethodInfo* unsafeSizeOf; // 0x8

		::System::Boolean IsAnonymous(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_TYPEHELPERS_ISANONYMOUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsReferenceOrNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_TYPEHELPERS_ISREFERENCEORNULLABLE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_TYPEHELPERS_.CCTOR_OFFSET))(nullptr);
		}

		TypeKind* TryGetUnmanagedSZArrayElementSizeOrMemoryPackableFixedSize(int32_t&* arg)
		{
			return (return (TypeKind*(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_TYPEHELPERS_TRYGETUNMANAGEDSZARRAYELEMENTSIZEORMEMORYPACKABLEFIXEDSIZE_OFFSET))(arg, nullptr);
		}

	};
}

