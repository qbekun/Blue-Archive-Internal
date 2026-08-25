#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MXBehaviorTree { class NodeMetadata&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MXBEHAVIORTREE_NODEMETADATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9403E50)
#define MXBEHAVIORTREE_NODEMETADATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9404620)
#define MXBEHAVIORTREE_NODEMETADATA_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9404630)
#define MXBEHAVIORTREE_NODEMETADATA_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x9404640)
#define MXBEHAVIORTREE_NODEMETADATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x94031B0)
#define MXBEHAVIORTREE_NODEMETADATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9404650)
#define MXBEHAVIORTREE_NODEMETADATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x9404660)
#define MXBEHAVIORTREE_NODEMETADATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9404860)
#define MXBEHAVIORTREE_NODEMETADATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9405090)
#define MXBEHAVIORTREE_NODEMETADATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x94050A0)
#define MXBEHAVIORTREE_NODEMETADATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x94050B0)

namespace MXBehaviorTree
{
	inline static constexpr unsigned int NodeMetadata_TypeDefinitionIndex = 36734;

	class NodeMetadata : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::UnityEngine::Vector2* _Position_k__BackingField; // 0x18
		::System::String* _Description_k__BackingField; // 0x20

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXBehaviorTree::NodeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXBehaviorTree::NodeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_SET_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::UnityEngine::Vector2* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Vector2*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXBehaviorTree::NodeMetadata&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXBehaviorTree::NodeMetadata&*, ::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Description()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_GET_DESCRIPTION_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXBEHAVIORTREE_NODEMETADATA_GET_ID_OFFSET))(nullptr);
		}

	};
}

