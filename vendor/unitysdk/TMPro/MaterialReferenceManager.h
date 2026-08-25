#pragma once
#include "../unitysdk.h"

namespace TMPro { class MaterialReferenceManager; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }
namespace TMPro { class TMP_ColorGradient; }
namespace TMPro { class TMP_FontAsset&; }
namespace TMPro { class TMP_SpriteAsset&; }
namespace TMPro { class TMP_ColorGradient&; }
namespace UnityEngine { class Material&; }

#define TMPRO_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA109E90)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0xA10A0A0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10A150)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA10A200)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10A2B0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA10A360)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10A410)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA10A4C0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10A5A0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0xA10A600)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA10A710)
#define TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA10A7A0)
#define TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA10A800)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0xA10A860)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10A950)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA10A9C0)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10AAB0)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0xA10AB20)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10AC10)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA10AC80)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0xA10AD70)
#define TMPRO_MATERIALREFERENCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA109F30)

namespace TMPro
{
	inline static constexpr unsigned int MaterialReferenceManager_TypeDefinitionIndex = 33604;

	class MaterialReferenceManager : public Il2CppObject
	{
	public:
		::TMPro::MaterialReferenceManager* s_Instance; // 0x0
		Il2CppObject* m_FontMaterialReferenceLookup; // 0x10
		Il2CppObject* m_FontAssetReferenceLookup; // 0x18
		Il2CppObject* m_SpriteAssetReferenceLookup; // 0x20
		Il2CppObject* m_ColorGradientReferenceLookup; // 0x28

		::TMPro::MaterialReferenceManager* get_instance()
		{
			return (return (::TMPro::MaterialReferenceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void AddFontAsset(::TMPro::TMP_FontAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET))(arg, nullptr);
		}

		::System::Void AddFontAssetInternal(::TMPro::TMP_FontAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSpriteAsset(::TMPro::TMP_SpriteAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET))(arg, nullptr);
		}

		::System::Void AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset* arg)
		{
			((::System::Void(*)(::TMPro::TMP_SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSpriteAsset(::System::Int32 arg, ::TMPro::TMP_SpriteAsset* arg)
		{
			((::System::Void(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpriteAssetInternal(::System::Int32 arg, ::TMPro::TMP_SpriteAsset* arg)
		{
			((::System::Void(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFontMaterial(::System::Int32 arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFontMaterialInternal(::System::Int32 arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddColorGradientPreset(::System::Int32 arg, ::TMPro::TMP_ColorGradient* arg)
		{
			((::System::Void(*)(::System::Int32, ::TMPro::TMP_ColorGradient*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddColorGradientPreset_Internal(::System::Int32 arg, ::TMPro::TMP_ColorGradient* arg)
		{
			((::System::Void(*)(::System::Int32, ::TMPro::TMP_ColorGradient*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Contains(::TMPro::TMP_FontAsset* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::TMP_FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::TMPro::TMP_SpriteAsset* arg)
		{
			return (return (::System::Boolean(*)(::TMPro::TMP_SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetFontAsset(::System::Int32 arg, ::TMPro::TMP_FontAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::TMPro::TMP_FontAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetFontAssetInternal(::System::Int32 arg, ::TMPro::TMP_FontAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::TMPro::TMP_FontAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSpriteAsset(::System::Int32 arg, ::TMPro::TMP_SpriteAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::TMPro::TMP_SpriteAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSpriteAssetInternal(::System::Int32 arg, ::TMPro::TMP_SpriteAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::TMPro::TMP_SpriteAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetColorGradientPreset(::System::Int32 arg, ::TMPro::TMP_ColorGradient&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::TMPro::TMP_ColorGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetColorGradientPresetInternal(::System::Int32 arg, ::TMPro::TMP_ColorGradient&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::TMPro::TMP_ColorGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMaterial(::System::Int32 arg, ::UnityEngine::Material&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::Material&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMaterialInternal(::System::Int32 arg, ::UnityEngine::Material&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::Material&*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

