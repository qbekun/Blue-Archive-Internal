#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ConstantPropertyFloat; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyFloat&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9432EA0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9432EF0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9432F30)
#define MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9432FB0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9432FC0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94331C0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9433300)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantPropertyFloat_TypeDefinitionIndex = 36829;

	class ConstantPropertyFloat : public ::Mx::Timeline::TimelineAnimatorPlayable
	{
	public:
		::System::Void .ctor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_.CTOR_OFFSET))(nullptr);
		}

		::MXBehaviorTree::ConstantPropertyFloat* op_Implicit(::System::Single arg)
		{
			return (return (::MXBehaviorTree::ConstantPropertyFloat*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyFloat&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyFloat&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYFLOAT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

