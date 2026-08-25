#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::TextCore::Text { class FontAsset; }

#define UNITYENGINE_TEXTCORE_TEXT_TEXTRESOURCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0xA2E1570)
#define UNITYENGINE_TEXTCORE_TEXT_TEXTRESOURCEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2E1B90)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int TextResourceManager_TypeDefinitionIndex = 35609;

	class TextResourceManager : public Il2CppObject
	{
	public:
		Il2CppObject* s_FontAssetReferences; // 0x0
		Il2CppObject* s_FontAssetNameReferenceLookup; // 0x8
		Il2CppObject* s_FontAssetFamilyNameAndStyleReferenceLookup; // 0x10
		Il2CppObject* s_FontAssetRemovalList; // 0x18
		::System::Int32 k_RegularStyleHashCode; // 0x20

		::System::Void AddFontAsset(::UnityEngine::TextCore::Text::FontAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::FontAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTRESOURCEMANAGER_ADDFONTASSET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_TEXTRESOURCEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

