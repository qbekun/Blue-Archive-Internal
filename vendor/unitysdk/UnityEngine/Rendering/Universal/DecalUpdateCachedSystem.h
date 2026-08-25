#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalEntityChunk; }
namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECACHEDSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA042BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECACHEDSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA042C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECACHEDSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA042E60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalUpdateCachedSystem_TypeDefinitionIndex = 32618;

	class DecalUpdateCachedSystem : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager; // 0x10
		::UnityEngine::Rendering::ProfilingSampler* m_Sampler; // 0x18
		::UnityEngine::Rendering::ProfilingSampler* m_SamplerJob; // 0x20

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECACHEDSYSTEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECACHEDSYSTEM_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::DecalEntityChunk* arg, ::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECACHEDSYSTEM_EXECUTE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

