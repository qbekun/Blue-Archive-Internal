#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCETEXTURE3D_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AB50)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReferenceTexture3D_TypeDefinitionIndex = 36197;

	class AssetReferenceTexture3D : public ::FlatData::FieldQuestExcel
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCETEXTURE3D_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

