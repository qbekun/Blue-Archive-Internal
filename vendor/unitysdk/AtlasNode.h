#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector4; }

#define ATLASNODE_CLEARISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x9FCAB60)
#define ATLASNODE_ISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x9FCAB70)
#define ATLASNODE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9FCAB80)
#define ATLASNODE_SETISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x9FCB090)
#define ATLASNODE_ISLEAFNODE_OFFSET UNITYSDK_OFFSET(0x9FCB080)
#define ATLASNODE_RELEASECHILDREN_OFFSET UNITYSDK_OFFSET(0x9FCB0A0)
#define ATLASNODE_ISMERGENEEDED_OFFSET UNITYSDK_OFFSET(0x9FCB140)
#define ATLASNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCB1C0)
#define ATLASNODE_RELEASEANDMERGE_OFFSET UNITYSDK_OFFSET(0x9FCB220)

	inline static constexpr unsigned int AtlasNode_TypeDefinitionIndex = 34038;

	class AtlasNode : public Il2CppObject
	{
	public:
		::System::Int16 m_Self; // 0x10
		::System::Int16 m_Parent; // 0x12
		::System::Int16 m_LeftChild; // 0x14
		::System::Int16 m_RightChild; // 0x16
		::System::Int16 m_FreelistNext; // 0x18
		::System::UInt16 m_Flags; // 0x1A
		::UnityEngine::Vector4* m_Rect; // 0x20

		::System::Void ClearIsOccupied()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_CLEARISOCCUPIED_OFFSET))(nullptr);
		}

		::System::Boolean IsOccupied()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_ISOCCUPIED_OFFSET))(nullptr);
		}

		::System::Int16 Allocate(AtlasNodePool* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int16(*)(AtlasNodePool*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_ALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetIsOccupied()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_SETISOCCUPIED_OFFSET))(nullptr);
		}

		::System::Boolean IsLeafNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_ISLEAFNODE_OFFSET))(nullptr);
		}

		::System::Void ReleaseChildren(AtlasNodePool* arg)
		{
			((::System::Void(*)(AtlasNodePool*, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_RELEASECHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMergeNeeded(AtlasNodePool* arg)
		{
			return (return (::System::Boolean(*)(AtlasNodePool*, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_ISMERGENEEDED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int16 arg, ::System::Int16 arg)
		{
			((::System::Void(*)(::System::Int16, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseAndMerge(AtlasNodePool* arg)
		{
			((::System::Void(*)(AtlasNodePool*, ::PVOID))((::PBYTE)hIl2Cpp + ATLASNODE_RELEASEANDMERGE_OFFSET))(arg, nullptr);
		}

	};

