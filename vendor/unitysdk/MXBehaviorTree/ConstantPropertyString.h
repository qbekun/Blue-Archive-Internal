#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class ConstantPropertyString; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyString&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x9433660)
#define MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_.CTOR_OFFSET UNITYSDK_OFFSET(0x94336B0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x94336F0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9433770)
#define MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9433780)
#define MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9433980)
#define MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9434240)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantPropertyString_TypeDefinitionIndex = 36831;

	class ConstantPropertyString : public <>c__DisplayClass3_0
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_.CTOR_OFFSET))(nullptr);
		}

		::MXBehaviorTree::ConstantPropertyString* op_Implicit(::System::String* str)
		{
			return (return (::MXBehaviorTree::ConstantPropertyString*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyString&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyString&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYSTRING_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

