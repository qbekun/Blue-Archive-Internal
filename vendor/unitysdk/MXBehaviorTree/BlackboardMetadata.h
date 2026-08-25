#pragma once
#include "../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MXBehaviorTree { class BlackboardMetadata&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MXBEHAVIORTREE_BLACKBOARDMETADATA_GET_PROPERTYMETADATAS_OFFSET UNITYSDK_OFFSET(0x94058B0)
#define MXBEHAVIORTREE_BLACKBOARDMETADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x94058C0)
#define MXBEHAVIORTREE_BLACKBOARDMETADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9405940)
#define MXBEHAVIORTREE_BLACKBOARDMETADATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9405970)
#define MXBEHAVIORTREE_BLACKBOARDMETADATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9405980)
#define MXBEHAVIORTREE_BLACKBOARDMETADATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9405C40)
#define MXBEHAVIORTREE_BLACKBOARDMETADATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9405E60)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int BlackboardMetadata_TypeDefinitionIndex = 36741;

	class BlackboardMetadata : public Il2CppObject
	{
	public:
		Il2CppObject* _propertyMetadatas_k__BackingField; // 0x10

		Il2CppObject* get_propertyMetadatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDMETADATA_GET_PROPERTYMETADATAS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDMETADATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDMETADATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDMETADATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDMETADATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::BlackboardMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::BlackboardMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDMETADATA_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::BlackboardMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::BlackboardMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_BLACKBOARDMETADATA_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

