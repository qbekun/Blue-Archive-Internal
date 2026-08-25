#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class BlackboardPropertyObject; }
class State;

#define MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xD74BB0)
#define MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xD75350)
#define MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0xD756C0)
#define MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0xD756D0)
#define MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD75720)
#define MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD75E90)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTTaskGetNextMovingPath_TypeDefinitionIndex = 9677;

	class UCBTTaskGetNextMovingPath : public Il2CppObject
	{
	public:
		::MXBehaviorTree::BlackboardPropertyObject* movingPath; // 0x38
		::MXBehaviorTree::BlackboardPropertyObject* pathDescriptor; // 0x40

		State* OnUpdate()
		{
			return ((State*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_ONUPDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, ::MXBehaviorTree::BlackboardPropertyObject* arg3, ::MXBehaviorTree::BlackboardPropertyObject* arg4, ::System::Int64 arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::MXBehaviorTree::BlackboardPropertyObject*, ::MXBehaviorTree::BlackboardPropertyObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXUnderCover::UCBTTaskGetNextMovingPath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXUnderCover::UCBTTaskGetNextMovingPath&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXUnderCover::UCBTTaskGetNextMovingPath&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXUnderCover::UCBTTaskGetNextMovingPath&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTTASKGETNEXTMOVINGPATH_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

