#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalTechnique; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal { class DecalEntityChunk; }
namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWERRORSYSTEM_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03B6A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWERRORSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03B6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWERRORSYSTEM_GETPASSINDEX_OFFSET UNITYSDK_OFFSET(0xA03B710)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalDrawErrorSystem_TypeDefinitionIndex = 32596;

	class DecalDrawErrorSystem : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalTechnique* m_Technique; // 0x38

		::UnityEngine::Material* GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWERRORSYSTEM_GETMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg, ::UnityEngine::Rendering::Universal::DecalTechnique* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::UnityEngine::Rendering::Universal::DecalTechnique*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWERRORSYSTEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWERRORSYSTEM_GETPASSINDEX_OFFSET))(arg, nullptr);
		}

	};
}

