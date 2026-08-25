#pragma once
#include "../../unitysdk.h"

#define MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_GET_ASSETS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXField::FieldAssets
{
	inline static constexpr unsigned int FieldAssetInventory`1_TypeDefinitionIndex = 10866;

	class FieldAssetInventory`1 : public Il2CppObject
	{
	public:
		Il2CppObject* assets; // 0x0

		::System::Boolean Contains(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_INITIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_Assets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_FIELDASSETS_FIELDASSETINVENTORY`1_GET_ASSETS_OFFSET))(nullptr);
		}

	};
}

