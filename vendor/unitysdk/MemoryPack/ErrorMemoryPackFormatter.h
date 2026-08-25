#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MEMORYPACK_ERRORMEMORYPACKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905CDF0)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x905C860)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x905D3C0)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x905D4B0)
#define MEMORYPACK_ERRORMEMORYPACKFORMATTER_THROW_OFFSET UNITYSDK_OFFSET(0x905D3D0)

namespace MemoryPack
{
	inline static constexpr unsigned int ErrorMemoryPackFormatter_TypeDefinitionIndex = 35422;

	class ErrorMemoryPackFormatter : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10
		::System::String* message; // 0x18

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::System::Object&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Throw()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_ERRORMEMORYPACKFORMATTER_THROW_OFFSET))(nullptr);
		}

	};
}

