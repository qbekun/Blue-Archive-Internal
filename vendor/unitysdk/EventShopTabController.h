#pragma once
#include "unitysdk.h"

class UIGrid;

#define EVENTSHOPTABCONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x24BB2B0)
#define EVENTSHOPTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24BBA50)

	inline static constexpr unsigned int EventShopTabController_TypeDefinitionIndex = 5880;

	class EventShopTabController : public ::MS::Internal::Xml::XPath::CacheChildrenQuery
	{
	public:
		UIGrid* tabGrid; // 0x58

		::System::Void RefreshTab(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTSHOPTABCONTROLLER_REFRESHTAB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTSHOPTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

