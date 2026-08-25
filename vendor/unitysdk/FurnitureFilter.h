#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define FURNITUREFILTER_GET_ISFILTEREMPTY_OFFSET UNITYSDK_OFFSET(0x1E49CB0)
#define FURNITUREFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E47BF0)
#define FURNITUREFILTER_ISSHOWAFTERFILTERING_OFFSET UNITYSDK_OFFSET(0x1E49D30)

	inline static constexpr unsigned int FurnitureFilter_TypeDefinitionIndex = 1682;

	class FurnitureFilter : public Il2CppObject
	{
	public:
		Il2CppObject* CategoryList; // 0x28
		Il2CppObject* SubCategoryList; // 0x30

		::System::Boolean get_IsFilterEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FURNITUREFILTER_GET_ISFILTEREMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREFILTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean IsShowAfterFiltering(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREFILTER_ISSHOWAFTERFILTERING_OFFSET))(arg, nullptr);
		}

	};

