#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DecalEntityManager; }
namespace UnityEngine::Rendering::Universal { class DecalProjector; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALADD_OFFSET UNITYSDK_OFFSET(0xA0682C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALMATERIALCHANGE_OFFSET UNITYSDK_OFFSET(0xA068310)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0683B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALREMOVE_OFFSET UNITYSDK_OFFSET(0xA068380)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_RELEASE_OFFSET UNITYSDK_OFFSET(0xA068520)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xA068540)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA068790)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xA0687A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SharedDecalEntityManager_TypeDefinitionIndex = 32728;

	class SharedDecalEntityManager : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::DecalEntityManager* m_DecalEntityManager; // 0x10
		::System::Int32 m_ReferenceCounter; // 0x18

		::System::Void OnDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALADD_OFFSET))(arg, nullptr);
		}

		::System::Void OnDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALMATERIALCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void OnDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::UnityEngine::Rendering::Universal::DecalEntityManager* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalEntityManager*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_RELEASE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::DecalEntityManager* Get()
		{
			return (return (::UnityEngine::Rendering::Universal::DecalEntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_GET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::DecalProjector*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHAREDDECALENTITYMANAGER_ONDECALPROPERTYCHANGE_OFFSET))(arg, nullptr);
		}

	};
}

