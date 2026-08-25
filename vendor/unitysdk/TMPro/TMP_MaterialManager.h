#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class MaskableGraphic; }
namespace UnityEngine { class Transform; }
namespace TMPro { class TMP_FontAsset; }

#define TMPRO_TMP_MATERIALMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA16D780)
#define TMPRO_TMP_MATERIALMANAGER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0xA16D990)
#define TMPRO_TMP_MATERIALMANAGER_GETSTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0xA16DCB0)
#define TMPRO_TMP_MATERIALMANAGER_RELEASESTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0xA16EC60)
#define TMPRO_TMP_MATERIALMANAGER_GETBASEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA16EEB0)
#define TMPRO_TMP_MATERIALMANAGER_SETSTENCIL_OFFSET UNITYSDK_OFFSET(0xA16F030)
#define TMPRO_TMP_MATERIALMANAGER_ADDMASKINGMATERIAL_OFFSET UNITYSDK_OFFSET(0xA16F130)
#define TMPRO_TMP_MATERIALMANAGER_REMOVESTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0xA16F410)
#define TMPRO_TMP_MATERIALMANAGER_RELEASEBASEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA16F580)
#define TMPRO_TMP_MATERIALMANAGER_CLEARMATERIALS_OFFSET UNITYSDK_OFFSET(0xA16FBD0)
#define TMPRO_TMP_MATERIALMANAGER_GETSTENCILID_OFFSET UNITYSDK_OFFSET(0xA16FDE0)
#define TMPRO_TMP_MATERIALMANAGER_GETMATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0xA1702C0)
#define TMPRO_TMP_MATERIALMANAGER_FINDROOTSORTOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0xA170100)
#define TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA1704A0)
#define TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA170AC0)
#define TMPRO_TMP_MATERIALMANAGER_ADDFALLBACKMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0xA170F60)
#define TMPRO_TMP_MATERIALMANAGER_REMOVEFALLBACKMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0xA1710B0)
#define TMPRO_TMP_MATERIALMANAGER_CLEANUPFALLBACKMATERIALS_OFFSET UNITYSDK_OFFSET(0xA16DA30)
#define TMPRO_TMP_MATERIALMANAGER_RELEASEFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA1712C0)
#define TMPRO_TMP_MATERIALMANAGER_COPYMATERIALPRESETPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA1707C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager_TypeDefinitionIndex = 33705;

	class TMP_MaterialManager : public Il2CppObject
	{
	public:
		Il2CppObject* m_materialList; // 0x0
		Il2CppObject* m_fallbackMaterials; // 0x8
		Il2CppObject* m_fallbackMaterialLookup; // 0x10
		Il2CppObject* m_fallbackCleanupList; // 0x18
		::System::Boolean isFallbackListDirty; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnPreRender()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ONPRERENDER_OFFSET))(nullptr);
		}

		::UnityEngine::Material* GetStencilMaterial(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETSTENCILMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReleaseStencilMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASESTENCILMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetBaseMaterial(::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETBASEMATERIAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* SetStencil(::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_SETSTENCIL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaskingMaterial(::UnityEngine::Material* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ADDMASKINGMATERIAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RemoveStencilMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_REMOVESTENCILMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseBaseMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASEBASEMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void ClearMaterials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_CLEARMATERIALS_OFFSET))(nullptr);
		}

		::System::Int32 GetStencilID(::UnityEngine::GameObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETSTENCILID_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* arg, ::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::UI::MaskableGraphic*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETMATERIALFORRENDERING_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_FINDROOTSORTOVERRIDECANVAS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Material* GetFallbackMaterial(::TMPro::TMP_FontAsset* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Material* GetFallbackMaterial(::UnityEngine::Material* arg, ::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFallbackMaterialReference(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ADDFALLBACKMATERIALREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFallbackMaterialReference(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_REMOVEFALLBACKMATERIALREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void CleanupFallbackMaterials()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_CLEANUPFALLBACKMATERIALS_OFFSET))(nullptr);
		}

		::System::Void ReleaseFallbackMaterial(::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASEFALLBACKMATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void CopyMaterialPresetProperties(::UnityEngine::Material* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_COPYMATERIALPRESETPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

	};
}

