#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class IBlackboardProperty&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IBLACKBOARDPROPERTYFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94281A0)
#define IBLACKBOARDPROPERTYFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9428600)
#define IBLACKBOARDPROPERTYFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9428150)
#define IBLACKBOARDPROPERTYFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9428BB0)

	inline static constexpr unsigned int IBlackboardPropertyFormatter_TypeDefinitionIndex = 36802;

	class IBlackboardPropertyFormatter : public ::System::Buffers::TlsOverPerCoreLockedStacksArrayPool`1
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBlackboardProperty&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBlackboardProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + IBLACKBOARDPROPERTYFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBlackboardProperty&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBlackboardProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + IBLACKBOARDPROPERTYFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLACKBOARDPROPERTYFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLACKBOARDPROPERTYFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

