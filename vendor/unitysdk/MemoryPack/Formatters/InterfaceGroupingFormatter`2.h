#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int InterfaceGroupingFormatter`2_TypeDefinitionIndex = 35509;

	class InterfaceGroupingFormatter`2 : public ::System::Reflection::ExceptionHandlingClauseOptions
	{
	public:
		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERFACEGROUPINGFORMATTER`2_.CTOR_OFFSET))(nullptr);
		}

	};
}

