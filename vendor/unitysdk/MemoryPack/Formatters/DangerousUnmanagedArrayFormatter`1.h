#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_DANGEROUSUNMANAGEDARRAYFORMATTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_DANGEROUSUNMANAGEDARRAYFORMATTER`1_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_DANGEROUSUNMANAGEDARRAYFORMATTER`1_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int DangerousUnmanagedArrayFormatter`1_TypeDefinitionIndex = 35462;

	class DangerousUnmanagedArrayFormatter`1 : public ::System::Reflection::CustomAttributeNamedArgument
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_DANGEROUSUNMANAGEDARRAYFORMATTER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_DANGEROUSUNMANAGEDARRAYFORMATTER`1_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Object[]&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_DANGEROUSUNMANAGEDARRAYFORMATTER`1_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

