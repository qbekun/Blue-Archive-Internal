#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector4&; }

#define UNITYENGINE_RENDERING_ATLASALLOCATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FC7540)
#define UNITYENGINE_RENDERING_ATLASALLOCATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9FC7810)
#define UNITYENGINE_RENDERING_ATLASALLOCATOR_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x9FC7940)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AtlasAllocator_TypeDefinitionIndex = 34033;

	class AtlasAllocator : public Il2CppObject
	{
	public:
		AtlasNode* m_Root; // 0x10
		::System::Int32 m_Width; // 0x18
		::System::Int32 m_Height; // 0x1C
		::System::Boolean powerOfTwoPadding; // 0x20
		Il2CppObject* m_NodePool; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATOR_RESET_OFFSET))(nullptr);
		}

		::System::Boolean Allocate(::UnityEngine::Vector4&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector4&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ATLASALLOCATOR_ALLOCATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

