#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ConstantPropertyLong; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyLong&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_CONSTANTPROPERTYLONG_.CTOR_OFFSET UNITYSDK_OFFSET(0x94326F0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYLONG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9432740)
#define MXBEHAVIORTREE_CONSTANTPROPERTYLONG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9432780)
#define MXBEHAVIORTREE_CONSTANTPROPERTYLONG_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9432800)
#define MXBEHAVIORTREE_CONSTANTPROPERTYLONG_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9432810)
#define MXBEHAVIORTREE_CONSTANTPROPERTYLONG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9432A10)
#define MXBEHAVIORTREE_CONSTANTPROPERTYLONG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9432B50)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantPropertyLong_TypeDefinitionIndex = 36827;

	class ConstantPropertyLong : public ::Mx::Timeline::TimelineAnimatorBehavior
	{
	public:
		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYLONG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYLONG_.CTOR_OFFSET))(nullptr);
		}

		::MXBehaviorTree::ConstantPropertyLong* op_Implicit(::System::Int64 arg)
		{
			return (return (::MXBehaviorTree::ConstantPropertyLong*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYLONG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYLONG_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYLONG_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYLONG_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyLong&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyLong&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYLONG_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

