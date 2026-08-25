#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define COSTUMEFILTER_GET_ISFILTEREMPTY_OFFSET UNITYSDK_OFFSET(0x1E424F0)
#define COSTUMEFILTER_ISSHOWAFTERFILTERING_OFFSET UNITYSDK_OFFSET(0x1E42520)
#define COSTUMEFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E425D0)

	inline static constexpr unsigned int CostumeFilter_TypeDefinitionIndex = 1670;

	class CostumeFilter : public Il2CppObject
	{
	public:
		::System::Boolean IncludeEquipped; // 0x28

		::System::Boolean get_IsFilterEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COSTUMEFILTER_GET_ISFILTEREMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsShowAfterFiltering(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEFILTER_ISSHOWAFTERFILTERING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COSTUMEFILTER_.CTOR_OFFSET))(arg, nullptr);
		}

	};

