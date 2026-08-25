#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class ConstantPropertyObject&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class Blackboard; }

#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94350F0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9435240)
#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9435440)
#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_GET_VALUESTRING_OFFSET UNITYSDK_OFFSET(0x9435690)
#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x94356C0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94356D0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_SETVALUE_OFFSET UNITYSDK_OFFSET(0x94356E0)
#define MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9435650)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int ConstantPropertyObject_TypeDefinitionIndex = 36835;

	class ConstantPropertyObject : public ComparerRaycastHitDistanceDescending
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::ConstantPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::ConstantPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::ConstantPropertyObject&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::ConstantPropertyObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_valueString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_GET_VALUESTRING_OFFSET))(nullptr);
		}

		::System::Object* GetValue(::MXBehaviorTree::Blackboard* arg)
		{
			return (return (::System::Object*(*)(::MXBehaviorTree::Blackboard*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetValue(::MXBehaviorTree::Blackboard* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::Blackboard*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_CONSTANTPROPERTYOBJECT_.CTOR_OFFSET))(nullptr);
		}

	};
}

