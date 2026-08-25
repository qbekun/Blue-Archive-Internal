#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntity; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_REMAPCHUNKINDICES_OFFSET UNITYSDK_OFFSET(0xA03EA40)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_ISVALID_OFFSET UNITYSDK_OFFSET(0xA03EB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_DESTROYDECALENTITY_OFFSET UNITYSDK_OFFSET(0xA03EC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_CREATEDECALENTITY_OFFSET UNITYSDK_OFFSET(0xA03ECC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA03EE50)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_GETITEM_OFFSET UNITYSDK_OFFSET(0xA03EEC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_UPDATEINDEX_OFFSET UNITYSDK_OFFSET(0xA03EF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA03EFC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalEntityIndexer_TypeDefinitionIndex = 32609;

	class DecalEntityIndexer : public Il2CppObject
	{
	public:
		Il2CppObject* m_Entities; // 0x10
		Il2CppObject* m_FreeIndices; // 0x18

		::System::Void RemapChunkIndices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_REMAPCHUNKINDICES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::UnityEngine::Rendering::Universal::DecalEntity* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_DESTROYDECALENTITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalEntity* CreateDecalEntity(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::Universal::DecalEntity*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_CREATEDECALENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_CLEAR_OFFSET))(nullptr);
		}

		DecalEntityItem* GetItem(::UnityEngine::Rendering::Universal::DecalEntity* arg)
		{
			return (return (DecalEntityItem*(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_GETITEM_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateIndex(::UnityEngine::Rendering::Universal::DecalEntity* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntity*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_UPDATEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DECALENTITYINDEXER_.CTOR_OFFSET))(nullptr);
		}

	};
}

