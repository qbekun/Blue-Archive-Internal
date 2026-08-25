#pragma once
#include "../../unitysdk.h"

#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x906C0B0)
#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9071950)
#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_TRYGETSINGLEMEMORY_OFFSET UNITYSDK_OFFSET(0x906C020)
#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_RESET_OFFSET UNITYSDK_OFFSET(0x9071AB0)
#define MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_ADD_OFFSET UNITYSDK_OFFSET(0x906BE70)

namespace MemoryPack::Internal
{
	inline static constexpr unsigned int ReusableReadOnlySequenceBuilder_TypeDefinitionIndex = 35457;

	class ReusableReadOnlySequenceBuilder : public Il2CppObject
	{
	public:
		Il2CppObject* segmentPool; // 0x10
		Il2CppObject* list; // 0x18

		Il2CppObject* Build()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_BUILD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetSingleMemory(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_TRYGETSINGLEMEMORY_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_RESET_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MEMORYPACK_INTERNAL_REUSABLEREADONLYSEQUENCEBUILDER_ADD_OFFSET))(arg, arg, nullptr);
		}

	};
}

