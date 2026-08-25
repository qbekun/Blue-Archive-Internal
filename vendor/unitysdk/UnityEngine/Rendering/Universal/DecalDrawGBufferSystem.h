#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }
namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWGBUFFERSYSTEM_GETPASSINDEX_OFFSET UNITYSDK_OFFSET(0xA0449C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWGBUFFERSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0449E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalDrawGBufferSystem_TypeDefinitionIndex = 32622;

	class DecalDrawGBufferSystem : public Il2CppObject
	{
	public:
		::System::Int32 GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWGBUFFERSYSTEM_GETPASSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWGBUFFERSYSTEM_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

