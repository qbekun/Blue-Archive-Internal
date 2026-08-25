#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class IBehaviorTreePropertyInt&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IBEHAVIORTREEPROPERTYINTFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9424310)
#define IBEHAVIORTREEPROPERTYINTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94242C0)
#define IBEHAVIORTREEPROPERTYINTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9424440)
#define IBEHAVIORTREEPROPERTYINTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9424830)

	inline static constexpr unsigned int IBehaviorTreePropertyIntFormatter_TypeDefinitionIndex = 36785;

	class IBehaviorTreePropertyIntFormatter : public ::System::Buffers::MemoryHandle
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYINTFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYINTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::IBehaviorTreePropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::IBehaviorTreePropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYINTFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::IBehaviorTreePropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::IBehaviorTreePropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + IBEHAVIORTREEPROPERTYINTFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

