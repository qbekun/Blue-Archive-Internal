#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEGAMEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E0AA60)

namespace UnityEngine::AddressableAssets
{
	inline static constexpr unsigned int AssetReferenceGameObject_TypeDefinitionIndex = 36194;

	class AssetReferenceGameObject : public ::FlatData::FieldMasteryExcel
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_ASSETREFERENCEGAMEOBJECT_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

