#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_TUPLEFORMATTER`8_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_TUPLEFORMATTER`8_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_TUPLEFORMATTER`8_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int TupleFormatter`8_TypeDefinitionIndex = 35536;

	class TupleFormatter`8 : public ::System::Reflection::SignatureType
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TUPLEFORMATTER`8_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TUPLEFORMATTER`8_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_TUPLEFORMATTER`8_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

