#pragma once
#include "../unitysdk.h"

namespace MXBehaviorTree { class IBlackboardProperty; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class BlackboardPropertyMetadata&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94061C0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_GET_PROPERTY_OFFSET UNITYSDK_OFFSET(0x9406490)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x94064A0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x94066B0)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9406460)
#define MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94068B0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardPropertyMetadata_TypeDefinitionIndex = 36743;

	class BlackboardPropertyMetadata : public Il2CppObject
	{
	public:
		::MXBehaviorTree::IBlackboardProperty* _property_k__BackingField; // 0x10

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardPropertyMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardPropertyMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MXBehaviorTree::IBlackboardProperty* get_property()
		{
			return (return (::MXBehaviorTree::IBlackboardProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_GET_PROPERTY_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardPropertyMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardPropertyMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MXBehaviorTree::IBlackboardProperty* arg)
		{
			((::System::Void(*)(::MXBehaviorTree::IBlackboardProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDPROPERTYMETADATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

