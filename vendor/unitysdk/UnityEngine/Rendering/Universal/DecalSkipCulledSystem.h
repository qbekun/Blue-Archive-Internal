#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class DecalCulledChunk; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0421A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA042240)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0423E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_GETSCENECULLINGMASKFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xA0424F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalSkipCulledSystem_TypeDefinitionIndex = 32615;

	class DecalSkipCulledSystem : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager; // 0x10
		::UnityEngine::Rendering::ProfilingSampler* m_Sampler; // 0x18
		::UnityEngine::Camera* m_Camera; // 0x20

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::DecalCulledChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt64 GetSceneCullingMaskFromCamera(::UnityEngine::Camera* arg)
		{
			return (return (::System::UInt64(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALSKIPCULLEDSYSTEM_GETSCENECULLINGMASKFROMCAMERA_OFFSET))(arg, nullptr);
		}

	};
}

