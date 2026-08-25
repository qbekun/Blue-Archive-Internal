#pragma once
#include "../../unitysdk.h"

namespace MemoryPack::Formatters { class InternStringFormatter; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90757A0)
#define MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x90757E0)
#define MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9075F00)
#define MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9076290)

namespace MemoryPack::Formatters
{
	inline static constexpr unsigned int InternStringFormatter_TypeDefinitionIndex = 35524;

	class InternStringFormatter : public __StaticArrayInitTypeSize=10
	{
	public:
		::MemoryPack::Formatters::InternStringFormatter* Default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_FORMATTERS_INTERNSTRINGFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

