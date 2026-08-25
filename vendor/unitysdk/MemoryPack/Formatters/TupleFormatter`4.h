#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_TUPLEFORMATTER`4_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_TUPLEFORMATTER`4_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_TUPLEFORMATTER`4_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int TupleFormatter`4_TypeDefinitionIndex = 35532;

	class TupleFormatter`4 : public ::System::Reflection::SignatureByRefType
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TUPLEFORMATTER`4_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TUPLEFORMATTER`4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TUPLEFORMATTER`4_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

