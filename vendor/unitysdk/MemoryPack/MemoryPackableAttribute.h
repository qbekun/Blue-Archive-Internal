#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class GenerateType; }
namespace MemoryPack { class SerializeLayout; }

#define MEMORYPACK_MEMORYPACKABLEATTRIBUTE_GET_GENERATETYPE_OFFSET UNITYSDK_OFFSET(0x9057EA0)
#define MEMORYPACK_MEMORYPACKABLEATTRIBUTE_GET_SERIALIZELAYOUT_OFFSET UNITYSDK_OFFSET(0x9057EB0)
#define MEMORYPACK_MEMORYPACKABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9057EC0)
#define MEMORYPACK_MEMORYPACKABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9057EF0)
#define MEMORYPACK_MEMORYPACKABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9057F20)

namespace MemoryPack
{
	inline static constexpr unsigned int MemoryPackableAttribute_TypeDefinitionIndex = 35398;

	class MemoryPackableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::MemoryPack::GenerateType* _GenerateType_k__BackingField; // 0x10
		::MemoryPack::SerializeLayout* _SerializeLayout_k__BackingField; // 0x14

		::MemoryPack::GenerateType* get_GenerateType()
		{
			return (return (::MemoryPack::GenerateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKABLEATTRIBUTE_GET_GENERATETYPE_OFFSET))(nullptr);
		}

		::MemoryPack::SerializeLayout* get_SerializeLayout()
		{
			return (return (::MemoryPack::SerializeLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKABLEATTRIBUTE_GET_SERIALIZELAYOUT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MemoryPack::GenerateType* arg)
		{
			((::System::Void(*)(::MemoryPack::GenerateType*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MemoryPack::SerializeLayout* arg)
		{
			((::System::Void(*)(::MemoryPack::SerializeLayout*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MemoryPack::GenerateType* arg, ::MemoryPack::SerializeLayout* arg)
		{
			((::System::Void(*)(::MemoryPack::GenerateType*, ::MemoryPack::SerializeLayout*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_MEMORYPACKABLEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

