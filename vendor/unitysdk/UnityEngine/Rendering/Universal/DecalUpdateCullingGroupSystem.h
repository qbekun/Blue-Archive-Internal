#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }
namespace UnityEngine::Rendering::Universal { class DecalCulledChunk; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_GET_BOUNDINGDISTANCE_OFFSET UNITYSDK_OFFSET(0xA044500)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_SET_BOUNDINGDISTANCE_OFFSET UNITYSDK_OFFSET(0xA044530)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA044560)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA044650)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA044840)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_GETSCENECULLINGMASKFROMCAMERA_OFFSET UNITYSDK_OFFSET(0xA0449B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalUpdateCullingGroupSystem_TypeDefinitionIndex = 32621;

	class DecalUpdateCullingGroupSystem : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_BoundingDistance; // 0x10
		::UnityEngine::Camera* m_Camera; // 0x18
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager; // 0x20
		::UnityEngine::Rendering::ProfilingSampler* m_Sampler; // 0x28

		::System::Single get_boundingDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_GET_BOUNDINGDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_boundingDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_SET_BOUNDINGDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Camera* arg)
		{
			((::System::Void(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalCulledChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_EXECUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::UInt64 GetSceneCullingMaskFromCamera(::UnityEngine::Camera* arg)
		{
			return (return (::System::UInt64(*)(::UnityEngine::Camera*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALUPDATECULLINGGROUPSYSTEM_GETSCENECULLINGMASKFROMCAMERA_OFFSET))(arg, nullptr);
		}

	};
}

