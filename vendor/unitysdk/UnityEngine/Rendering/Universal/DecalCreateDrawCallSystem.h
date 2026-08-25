#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }
namespace UnityEngine::Rendering::Universal { class DecalCulledChunk; }
namespace UnityEngine::Rendering::Universal { class DecalDrawCallChunk; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_GET_MAXDRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA03CEE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_SET_MAXDRAWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA03CEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03CF00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03CFB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03D1E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalCreateDrawCallSystem_TypeDefinitionIndex = 32606;

	class DecalCreateDrawCallSystem : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager; // 0x10
		::UnityEngine::Rendering::ProfilingSampler* m_Sampler; // 0x18
		::System::Single m_MaxDrawDistance; // 0x20

		::System::Single get_maxDrawDistance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_GET_MAXDRAWDISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_maxDrawDistance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_SET_MAXDRAWDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalCulledChunk* arg, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalCulledChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALCREATEDRAWCALLSYSTEM_EXECUTE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

