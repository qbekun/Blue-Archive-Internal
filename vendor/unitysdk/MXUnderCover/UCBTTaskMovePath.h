#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BlackboardPropertyObject; }
class State;

#define MXUNDERCOVER_UCBTTASKMOVEPATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD81170)
#define MXUNDERCOVER_UCBTTASKMOVEPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0xD814B0)
#define MXUNDERCOVER_UCBTTASKMOVEPATH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD81500)
#define MXUNDERCOVER_UCBTTASKMOVEPATH_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD84340)
#define MXUNDERCOVER_UCBTTASKMOVEPATH_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD81180)
#define MXUNDERCOVER_UCBTTASKMOVEPATH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD84900)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskMovePath_TypeDefinitionIndex = 9683;

	class UCBTTaskMovePath : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BlackboardPropertyObject* movingPath; // 0x38
		::MXBehaviorTree::BlackboardPropertyObject* pathDescriptor; // 0x40

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKMOVEPATH_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::MXBehaviorTree::BlackboardPropertyObject* arg3, ::MXBehaviorTree::BlackboardPropertyObject* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::BlackboardPropertyObject*, ::MXBehaviorTree::BlackboardPropertyObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKMOVEPATH_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKMOVEPATH_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKMOVEPATH_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKMOVEPATH_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskMovePath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskMovePath&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKMOVEPATH_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

