#pragma once
#include "unitysdk.h"

#define SHOPLISTELEMENTGROUPDATA_GETSHOPLISTELEMENTDATALIST_OFFSET UNITYSDK_OFFSET(0xAAFDC0)
#define SHOPLISTELEMENTGROUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xAADB70)

	inline static constexpr unsigned int ShopListElementGroupData_TypeDefinitionIndex = 8000;

	class ShopListElementGroupData : public Il2CppObject
	{
	public:
		::System::Int32 GROUP_COLUMN_COUNT; // 0x0
		::Il2CppArray<::System::Object*>* ShopListElementDatas; // 0x10

		Il2CppObject* GetShopListElementDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTGROUPDATA_GETSHOPLISTELEMENTDATALIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPLISTELEMENTGROUPDATA_.CTOR_OFFSET))(nullptr);
		}

	};

