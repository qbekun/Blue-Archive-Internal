#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_THROW_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack
{
	inline static constexpr unsigned int ErrorMemoryPackFormatter`1_TypeDefinitionIndex = 35423;

	class ErrorMemoryPackFormatter`1 : public ::System::Reflection::AssemblyFileVersionAttribute
	{
	public:
		::System::Exception* exception; // 0x0
		::System::String* message; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Throw()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER`1_THROW_OFFSET))(nullptr);
		}

	};
}

