#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCESPRITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0ABA0)
#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCESPRITE_VALIDATEASSET_OFFSET UNITYSDK_OFFSET(0x9E0ABF0)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReferenceSprite_TypeDefinitionIndex = 36198;

	class AssetReferenceSprite : public ::FlatData::FieldMasteryManageExcelTable
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCESPRITE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean ValidateAsset(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCESPRITE_VALIDATEASSET_OFFSET))(str, nullptr);
		}

	};
}

