#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define UNITYENGINE_TEXTCORE_TEXT_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2D52B0)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0xA2D5680)
#define UNITYENGINE_TEXTCORE_TEXT_MATERIALMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2D5860)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int MaterialManager_TypeDefinitionIndex = 35573;

	class MaterialManager : public Il2CppObject
	{
	public:
		Il2CppObject* s_FallbackMaterials; // 0x0

		::UnityEngine::Material* GetFallbackMaterial(::UnityEngine::Material* arg, ::UnityEngine::Material* arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* GetFallbackMaterial(::UnityEngine::TextCore::Text::FontAsset* arg, ::UnityEngine::Material* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Material*(*)(::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::Material*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MATERIALMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

