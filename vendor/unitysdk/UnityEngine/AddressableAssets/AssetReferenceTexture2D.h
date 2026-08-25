#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCETEXTURE2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AB00)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReferenceTexture2D_TypeDefinitionIndex = 36196;

	class AssetReferenceTexture2D : public ::FlatData::FieldQuestExcelTable
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCETEXTURE2D_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

