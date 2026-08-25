#pragma once
#include "unitysdk.h"

#define IFILTERGROUPCONTROLLER_GET_GROUPNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define IFILTERGROUPCONTROLLER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IFILTERGROUPCONTROLLER_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IFilterGroupController_TypeDefinitionIndex = 8099;

	class IFilterGroupController : public Il2CppObject
	{
	public:
		::System::String* get_GroupNameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFILTERGROUPCONTROLLER_GET_GROUPNAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFILTERGROUPCONTROLLER_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFILTERGROUPCONTROLLER_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

	};

