#pragma once
#include "unitysdk.h"

#define UIEQUIPMENTCHANGELIST_2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2418820)
#define UIEQUIPMENTCHANGELIST_2D_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x24188A0)

	inline static constexpr unsigned int UIEquipmentChangeList_2D_TypeDefinitionIndex = 5480;

	class UIEquipmentChangeList_2D : public Il2CppObject
	{
	public:
		Il2CppObject* SelectedCategories; // 0x100

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGELIST_2D_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTCHANGELIST_2D_GETDATALIST_OFFSET))(nullptr);
		}

	};

