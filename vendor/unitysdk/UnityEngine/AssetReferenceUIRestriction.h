#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSETREFERENCEUIRESTRICTION_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9DF3B50)
#define UNITYENGINE_ASSETREFERENCEUIRESTRICTION_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9DF3B60)
#define UNITYENGINE_ASSETREFERENCEUIRESTRICTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF3B70)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetReferenceUIRestriction_TypeDefinitionIndex = 36156;

	class AssetReferenceUIRestriction : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean ValidateAsset(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETREFERENCEUIRESTRICTION_VALIDATEASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAsset(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETREFERENCEUIRESTRICTION_VALIDATEASSET_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETREFERENCEUIRESTRICTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

