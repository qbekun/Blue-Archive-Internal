#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class IBehaviorTreePropertyVector3&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9426C90)
#define IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9426C50)
#define IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9427080)
#define IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94273B0)

	inline static constexpr unsigned int IBehaviorTreePropertyVector3Formatter_TypeDefinitionIndex = 36793;

	class IBehaviorTreePropertyVector3Formatter : public LockedStack
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreePropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreePropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreePropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreePropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYVECTOR3FORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

