#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class DecalEntityChunk; }
namespace UnityEngine::Rendering::Universal { class DecalCachedChunk; }
namespace UnityEngine::Rendering::Universal { class DecalDrawCallChunk; }
namespace UnityEngine::Rendering::Universal { class CameraData&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_GET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03D980)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_SET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03D990)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0394C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03A690)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03DB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_GETPASSINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03D9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAW_OFFSET UNITYSDK_OFFSET(0xA03DD70)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAWINSTANCED_OFFSET UNITYSDK_OFFSET(0xA03DB20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03E0A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA03E2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAW_OFFSET UNITYSDK_OFFSET(0xA03E6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAWINSTANCED_OFFSET UNITYSDK_OFFSET(0xA03E440)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalDrawSystem_TypeDefinitionIndex = 32607;

	class DecalDrawSystem : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager; // 0x10
		::Il2CppArray<::System::Object*>* m_WorldToDecals; // 0x18
		::Il2CppArray<::System::Object*>* m_NormalToDecals; // 0x20
		::UnityEngine::Rendering::ProfilingSampler* m_Sampler; // 0x28
		::UnityEngine::Material* _overrideMaterial_k__BackingField; // 0x30

		::UnityEngine::Material* get_overrideMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_GET_OVERRIDEMATERIAL_OFFSET))(nullptr);
		}

		::System::Void set_overrideMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_SET_OVERRIDEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_GETMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_GETPASSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::DecalEntityChunk* arg, ::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Draw(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::DecalEntityChunk* arg, ::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAW_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawInstanced(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Rendering::Universal::DecalEntityChunk* arg, ::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAWINSTANCED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::CameraData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Rendering::Universal::DecalEntityChunk* arg, ::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_EXECUTE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Draw(::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Rendering::Universal::DecalEntityChunk* arg, ::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DrawInstanced(::UnityEngine::Rendering::Universal::CameraData&* arg, ::UnityEngine::Rendering::Universal::DecalEntityChunk* arg, ::UnityEngine::Rendering::Universal::DecalCachedChunk* arg, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::CameraData&*, ::UnityEngine::Rendering::Universal::DecalEntityChunk*, ::UnityEngine::Rendering::Universal::DecalCachedChunk*, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALDRAWSYSTEM_DRAWINSTANCED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

