#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define INVENTORYSCROLLITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2205CB0)
#define INVENTORYSCROLLITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2205CC0)
#define INVENTORYSCROLLITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2205D00)

	inline static constexpr unsigned int InventoryScrollItemInfo_TypeDefinitionIndex = 4310;

	class InventoryScrollItemInfo : public Il2CppObject
	{
	public:
		AssetObjectBase* AssetObject; // 0x10
		::System::Int64 SelectionItemUsedCount; // 0x18
		::System::Boolean IsSelect; // 0x20
		::System::Int64 UniqueId; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYSCROLLITEMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(AssetObjectBase* arg, ::System::Boolean arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(AssetObjectBase*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYSCROLLITEMINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYSCROLLITEMINFO_.CTOR_OFFSET))(arg, nullptr);
		}

	};

