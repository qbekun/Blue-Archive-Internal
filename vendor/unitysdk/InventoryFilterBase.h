#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define INVENTORYFILTERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x181F750)
#define INVENTORYFILTERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x181F760)
#define INVENTORYFILTERBASE_SETBASEFILTER_OFFSET UNITYSDK_OFFSET(0x181F7C0)
#define INVENTORYFILTERBASE_GET_ISFILTEREMPTY_OFFSET UNITYSDK_OFFSET(0x181F810)
#define INVENTORYFILTERBASE_ISSHOWAFTERFILTERING_OFFSET UNITYSDK_OFFSET(0x181F890)

	inline static constexpr unsigned int InventoryFilterBase_TypeDefinitionIndex = 1286;

	class InventoryFilterBase : public Il2CppObject
	{
	public:
		Il2CppObject* RarityList; // 0x10
		Il2CppObject* TierList; // 0x18
		Il2CppObject* GradeList; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFILTERBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFILTERBASE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetBaseFilter(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFILTERBASE_SETBASEFILTER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsFilterEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFILTERBASE_GET_ISFILTEREMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsShowAfterFiltering(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + INVENTORYFILTERBASE_ISSHOWAFTERFILTERING_OFFSET))(arg, nullptr);
		}

	};

