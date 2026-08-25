#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }
namespace UnityEngine::TextCore::Text { class SpriteAsset; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D58F0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0xA2D59B0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0xA2D5BD0)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int MaterialReference_TypeDefinitionIndex = 35574;

	class MaterialReference : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::UnityEngine::TextCore::Text::FontAsset* fontAsset; // 0x18
		::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset; // 0x20
		::UnityEngine::Material* material; // 0x28
		::System::Boolean isDefaultMaterial; // 0x30
		::System::Boolean isFallbackMaterial; // 0x31
		::UnityEngine::Material* fallbackMaterial; // 0x38
		::System::Single padding; // 0x40
		::System::Int32 referenceCount; // 0x44

		::System::Void .ctor(::System::Int32 arg, ::UnityEngine::TextCore::Text::FontAsset* arg, ::UnityEngine::TextCore::Text::SpriteAsset* arg, ::UnityEngine::Material* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::TextCore::Text::SpriteAsset*, ::UnityEngine::Material*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 AddMaterialReference(::UnityEngine::Material* arg, ::UnityEngine::TextCore::Text::FontAsset* arg, ::System::Object[]&* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Material*, ::UnityEngine::TextCore::Text::FontAsset*, ::System::Object[]&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 AddMaterialReference(::UnityEngine::Material* arg, ::UnityEngine::TextCore::Text::SpriteAsset* arg, ::System::Object[]&* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Material*, ::UnityEngine::TextCore::Text::SpriteAsset*, ::System::Object[]&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

