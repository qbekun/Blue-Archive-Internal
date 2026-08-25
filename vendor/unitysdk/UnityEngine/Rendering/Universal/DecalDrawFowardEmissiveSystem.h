#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }
namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWFOWARDEMISSIVESYSTEM_GETPASSINDEX_OFFSET UNITYSDK_OFFSET(0xA03B130)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWFOWARDEMISSIVESYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03B150)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalDrawFowardEmissiveSystem_TypeDefinitionIndex = 32594;

	class DecalDrawFowardEmissiveSystem : public Il2CppObject
	{
	public:
		::System::Int32 GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWFOWARDEMISSIVESYSTEM_GETPASSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWFOWARDEMISSIVESYSTEM_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

