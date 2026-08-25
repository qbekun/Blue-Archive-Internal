#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define CHARACTERINVENTORYFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10B2B00)
#define CHARACTERINVENTORYFILTER_ISSHOWAFTERFILTERING_OFFSET UNITYSDK_OFFSET(0x10B4A20)
#define CHARACTERINVENTORYFILTER_GET_ISFILTEREMPTY_OFFSET UNITYSDK_OFFSET(0x10B4B80)

	inline static constexpr unsigned int CharacterInventoryFilter_TypeDefinitionIndex = 915;

	class CharacterInventoryFilter : public Il2CppObject
	{
	public:
		Il2CppObject* WeaponTypeList; // 0x28

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYFILTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean IsShowAfterFiltering(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYFILTER_ISSHOWAFTERFILTERING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFilterEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERINVENTORYFILTER_GET_ISFILTEREMPTY_OFFSET))(nullptr);
		}

	};

