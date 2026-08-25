#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class MaterialReferenceManager; }
namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class TextColorGradient; }
namespace UnityEngine::TextCore::Text { class FontAsset&; }
namespace UnityEngine::TextCore::Text { class SpriteAsset&; }
namespace UnityEngine::TextCore::Text { class TextColorGradient&; }
namespace UnityEngine { class Material&; }

#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2D5DE0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2D5FF0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D60A0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA2D6280)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D6330)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2D63F0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D64D0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0xA2D6530)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D6640)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2D66D0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D67C0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET UNITYSDK_OFFSET(0xA2D6830)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D6920)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0xA2D6990)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D6A80)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2D6AF0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2D6BE0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D5E80)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int MaterialReferenceManager_TypeDefinitionIndex = 35575;

	class MaterialReferenceManager : public Il2CppObject
	{
	public:
		::UnityEngine::TextCore::Text::MaterialReferenceManager* s_Instance; // 0x0
		Il2CppObject* m_FontMaterialReferenceLookup; // 0x10
		Il2CppObject* m_FontAssetReferenceLookup; // 0x18
		Il2CppObject* m_SpriteAssetReferenceLookup; // 0x20
		Il2CppObject* m_ColorGradientReferenceLookup; // 0x28

		::UnityEngine::TextCore::Text::MaterialReferenceManager* get_instance()
		{
			return (return (::UnityEngine::TextCore::Text::MaterialReferenceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void AddFontAsset(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET))(arg, nullptr);
		}

		::System::Void AddFontAssetInternal(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSpriteAsset(::System::Int32 arg, ::UnityEngine::TextCore::Text::SpriteAsset* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpriteAssetInternal(::System::Int32 arg, ::UnityEngine::TextCore::Text::SpriteAsset* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::SpriteAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFontMaterial(::System::Int32 arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFontMaterialInternal(::System::Int32 arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddColorGradientPreset(::System::Int32 arg, ::UnityEngine::TextCore::Text::TextColorGradient* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::TextColorGradient*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddColorGradientPreset_Internal(::System::Int32 arg, ::UnityEngine::TextCore::Text::TextColorGradient* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::TextColorGradient*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetFontAsset(::System::Int32 arg, ::UnityEngine::TextCore::Text::FontAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::TextCore::Text::FontAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetFontAssetInternal(::System::Int32 arg, ::UnityEngine::TextCore::Text::FontAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::TextCore::Text::FontAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSpriteAsset(::System::Int32 arg, ::UnityEngine::TextCore::Text::SpriteAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::TextCore::Text::SpriteAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSpriteAssetInternal(::System::Int32 arg, ::UnityEngine::TextCore::Text::SpriteAsset&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::TextCore::Text::SpriteAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetColorGradientPreset(::System::Int32 arg, ::UnityEngine::TextCore::Text::TextColorGradient&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::TextCore::Text::TextColorGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetColorGradientPresetInternal(::System::Int32 arg, ::UnityEngine::TextCore::Text::TextColorGradient&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::TextCore::Text::TextColorGradient&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMaterial(::System::Int32 arg, ::UnityEngine::Material&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::Material&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetMaterialInternal(::System::Int32 arg, ::UnityEngine::Material&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::Material&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCEMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

