#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering { class ProfilingSampler; }
namespace UnityEngine::Rendering::Universal { class DecalEntityIndexer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering::Universal { class DecalEntity; }
namespace UnityEngine::Rendering::Universal { class DecalProjector; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03F240)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA03F5C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_GET_ERRORMATERIAL_OFFSET UNITYSDK_OFFSET(0xA03FFB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_ISVALID_OFFSET UNITYSDK_OFFSET(0xA040070)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_DESTROYDECALENTITY_OFFSET UNITYSDK_OFFSET(0xA040090)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_GET_DECALPROJECTORMESH_OFFSET UNITYSDK_OFFSET(0xA040280)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_UPDATEDECALENTITYDATA_OFFSET UNITYSDK_OFFSET(0xA040350)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_CREATEDECALENTITY_OFFSET UNITYSDK_OFFSET(0xA0408B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_CREATECHUNKINDEX_OFFSET UNITYSDK_OFFSET(0xA040F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA041450)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalEntityManager_TypeDefinitionIndex = 32614;

	class DecalEntityManager : public Il2CppObject
	{
	public:
		Il2CppObject* entityChunks; // 0x10
		Il2CppObject* cachedChunks; // 0x18
		Il2CppObject* culledChunks; // 0x20
		Il2CppObject* drawCallChunks; // 0x28
		::System::Int32 chunkCount; // 0x30
		::UnityEngine::Rendering::ProfilingSampler* m_AddDecalSampler; // 0x38
		::UnityEngine::Rendering::ProfilingSampler* m_ResizeChunks; // 0x40
		::UnityEngine::Rendering::ProfilingSampler* m_SortChunks; // 0x48
		::UnityEngine::Rendering::Universal::DecalEntityIndexer* m_DecalEntityIndexer; // 0x50
		Il2CppObject* m_MaterialToChunkIndex; // 0x58
		Il2CppObject* m_CombinedChunks; // 0x60
		Il2CppObject* m_CombinedChunkRemmap; // 0x68
		::UnityEngine::Material* m_ErrorMaterial; // 0x70
		::UnityEngine::Mesh* m_DecalProjectorMesh; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::Material* get_errorMaterial()
		{
			return (return (::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_GET_ERRORMATERIAL_OFFSET))(nullptr);
		}

		::System::Boolean IsValid(::UnityEngine::Rendering::Universal::DecalEntity* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_DESTROYDECALENTITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* get_decalProjectorMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_GET_DECALPROJECTORMESH_OFFSET))(nullptr);
		}

		::System::Void UpdateDecalEntityData(::UnityEngine::Rendering::Universal::DecalEntity* arg, ::UnityEngine::Rendering::Universal::DecalProjector* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::UnityEngine::Rendering::Universal::DecalProjector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_UPDATEDECALENTITYDATA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalEntity* CreateDecalEntity(::UnityEngine::Rendering::Universal::DecalProjector* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::DecalEntity*(*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_CREATEDECALENTITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 CreateChunkIndex(::UnityEngine::Material* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_CREATECHUNKINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYMANAGER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

