#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCETEXTURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AAB0)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReferenceTexture_TypeDefinitionIndex = 36195;

	class AssetReferenceTexture : public ::FlatData::FieldMasteryManageExcel
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCETEXTURE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

