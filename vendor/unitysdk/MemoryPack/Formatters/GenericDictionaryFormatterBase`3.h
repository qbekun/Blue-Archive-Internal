#pragma once
#include "../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_CREATEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int GenericDictionaryFormatterBase`3_TypeDefinitionIndex = 35498;

	class GenericDictionaryFormatterBase`3 : public ::System::Reflection::AssemblyKeyFileAttribute
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_CREATEDICTIONARY_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_GENERICDICTIONARYFORMATTERBASE`3_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

