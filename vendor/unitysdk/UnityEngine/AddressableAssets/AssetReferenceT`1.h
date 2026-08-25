#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_LOADASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReferenceT`1_TypeDefinitionIndex = 36193;

	class AssetReferenceT`1 : public ::System::Globalization::FormatProvider
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_.CTOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadAsset()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_LOADASSET_OFFSET))(nullptr);
		}

		Il2CppObject* LoadAssetAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_LOADASSETASYNC_OFFSET))(nullptr);
		}

		::System::Boolean ValidateAsset(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_VALIDATEASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAsset(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCET`1_VALIDATEASSET_OFFSET))(str, nullptr);
		}

	};
}

