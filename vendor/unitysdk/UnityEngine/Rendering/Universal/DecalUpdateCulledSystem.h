#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalCulledChunk; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLEDSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA044080)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLEDSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA044120)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLEDSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0442B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalUpdateCulledSystem_TypeDefinitionIndex = 32619;

	class DecalUpdateCulledSystem : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager; // 0x10
		::UnityEngine::Rendering::ProfilingSampler* m_Sampler; // 0x18

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLEDSYSTEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLEDSYSTEM_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::DecalCulledChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLEDSYSTEM_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

	};
}

