#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ConstantPropertyBool; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyBool&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x94317B0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9431800)
#define MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9431840)
#define MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94318C0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x94318D0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9431AD0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9431C10)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantPropertyBool_TypeDefinitionIndex = 36823;

	class ConstantPropertyBool : public ::Mx::Timeline::AnimationWithParticlesTrack
	{
	public:
		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_.CTOR_OFFSET))(nullptr);
		}

		::MXBehaviorTree::ConstantPropertyBool* op_Implicit(::System::Boolean arg)
		{
			return (return (::MXBehaviorTree::ConstantPropertyBool*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyBool&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyBool&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYBOOL_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

