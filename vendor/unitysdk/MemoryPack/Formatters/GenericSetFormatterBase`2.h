#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_CREATESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int GenericSetFormatterBase`2_TypeDefinitionIndex = 35496;

	class GenericSetFormatterBase`2 : public ::System::Reflection::AssemblyKeyNameAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CreateSet()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_CREATESET_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICSETFORMATTERBASE`2_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

