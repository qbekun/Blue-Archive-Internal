#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MXBehaviorTree { class ConstantPropertyVector3; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyVector3&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x94348C0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x9434920)
#define MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9434960)
#define MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9434A00)
#define MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9434A10)
#define MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9434C10)
#define MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9434D50)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantPropertyVector3_TypeDefinitionIndex = 36833;

	class ConstantPropertyVector3 : public ::Mx::Timeline::TimelineAnimatorTrack
	{
	public:
		::System::Void .ctor(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_.CTOR_OFFSET))(nullptr);
		}

		::MXBehaviorTree::ConstantPropertyVector3* op_Implicit(::UnityEngine::Vector3* arg)
		{
			return (return (::MXBehaviorTree::ConstantPropertyVector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyVector3&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyVector3&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYVECTOR3_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

