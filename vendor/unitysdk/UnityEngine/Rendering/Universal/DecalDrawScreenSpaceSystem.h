#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSCREENSPACESYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0460C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSCREENSPACESYSTEM_GETPASSINDEX_OFFSET UNITYSDK_OFFSET(0xA046110)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalDrawScreenSpaceSystem_TypeDefinitionIndex = 32624;

	class DecalDrawScreenSpaceSystem : public Il2CppObject
	{
	public:
		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSCREENSPACESYSTEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSCREENSPACESYSTEM_GETPASSINDEX_OFFSET))(arg, nullptr);
		}

	};
}

