#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4&; }

#define UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC9DD0)
#define UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9FCA0A0)
#define UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FCA1B0)
#define UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_RELEASE_OFFSET UNITYSDK_OFFSET(0x9FCA270)
#define UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_DEBUGSTRINGFROMROOT_OFFSET UNITYSDK_OFFSET(0x9FCA330)
#define UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_DEBUGSTRINGFROMNODE_OFFSET UNITYSDK_OFFSET(0x9FCA390)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AtlasAllocatorDynamic_TypeDefinitionIndex = 34039;

	class AtlasAllocatorDynamic : public Il2CppObject
	{
	public:
		::System::Int32 m_Width; // 0x10
		::System::Int32 m_Height; // 0x14
		AtlasNodePool* m_Pool; // 0x18
		::System::Int16 m_Root; // 0x20
		Il2CppObject* m_NodeFromID; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Allocate(::UnityEngine::Vector4&* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4&*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_ALLOCATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Release(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_RELEASE_OFFSET))(nullptr);
		}

		::System::String* DebugStringFromRoot(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_DEBUGSTRINGFROMROOT_OFFSET))(arg, nullptr);
		}

		::System::Void DebugStringFromNode(::System::String&* arg, ::System::Int16 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String&*, ::System::Int16, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATORDYNAMIC_DEBUGSTRINGFROMNODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

