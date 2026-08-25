#pragma once
#include "unitysdk.h"

class AssetObjectBase;

#define CLANASSISTFILTER_ISSHOWAFTERFILTERING_OFFSET UNITYSDK_OFFSET(0x1AD1340)
#define CLANASSISTFILTER_GET_ISFILTEREMPTY_OFFSET UNITYSDK_OFFSET(0x1AD1420)
#define CLANASSISTFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1AD0370)

	inline static constexpr unsigned int ClanAssistFilter_TypeDefinitionIndex = 1418;

	class ClanAssistFilter : public Il2CppObject
	{
	public:
		Il2CppObject* WeaponTypeList; // 0x28

		::System::Boolean IsShowAfterFiltering(AssetObjectBase* arg)
		{
			return ((::System::Boolean(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTFILTER_ISSHOWAFTERFILTERING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFilterEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTFILTER_GET_ISFILTEREMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANASSISTFILTER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

