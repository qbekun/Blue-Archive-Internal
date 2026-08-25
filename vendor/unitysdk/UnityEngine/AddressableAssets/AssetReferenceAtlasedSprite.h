#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEATLASEDSPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AC00)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEATLASEDSPRITE_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9E0AC50)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEATLASEDSPRITE_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9E0ACC0)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReferenceAtlasedSprite_TypeDefinitionIndex = 36199;

	class AssetReferenceAtlasedSprite : public ::FlatData::FieldMasteryManageExcelTable
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEATLASEDSPRITE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateAsset(::UnityEngine::Object* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEATLASEDSPRITE_VALIDATEASSET_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateAsset(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEATLASEDSPRITE_VALIDATEASSET_OFFSET))(str, nullptr);
		}

	};
}

