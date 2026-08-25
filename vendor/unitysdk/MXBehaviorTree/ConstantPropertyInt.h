#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ConstantPropertyInt; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyInt&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_CONSTANTPROPERTYINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9431F50)
#define MXBEHAVIORTREE_CONSTANTPROPERTYINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9431FA0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9431FE0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9432060)
#define MXBEHAVIORTREE_CONSTANTPROPERTYINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9432070)
#define MXBEHAVIORTREE_CONSTANTPROPERTYINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9432270)
#define MXBEHAVIORTREE_CONSTANTPROPERTYINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94323B0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantPropertyInt_TypeDefinitionIndex = 36825;

	class ConstantPropertyInt : public ::Mx::Timeline::DelayableParticleControlPlayable
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYINT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYINT_.CTOR_OFFSET))(nullptr);
		}

		::MXBehaviorTree::ConstantPropertyInt* op_Implicit(::System::Int32 arg)
		{
			return (return (::MXBehaviorTree::ConstantPropertyInt*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYINT_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYINT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyInt&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyInt&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYINT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

