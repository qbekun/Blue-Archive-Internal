#pragma once
#include "unitysdk.h"

class UILabel;
class WidgetsPositionSetter;

#define CAFETEMPLATEELEMENTLISTCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2266780)
#define CAFETEMPLATEELEMENTLISTCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x22667C0)
#define CAFETEMPLATEELEMENTLISTCONTROLLER_GET_POSITIONSETTER_OFFSET UNITYSDK_OFFSET(0x2267130)
#define CAFETEMPLATEELEMENTLISTCONTROLLER_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x22671D0)

	inline static constexpr unsigned int CafeTemplateElementListController_TypeDefinitionIndex = 4594;

	class CafeTemplateElementListController : public SpecialAttribute
	{
	public:
		UILabel* countLabel; // 0x90
		WidgetsPositionSetter* setter; // 0x98
		Il2CppObject* elements; // 0xA0
		::System::Int64 myMatchingFurnitureCount; // 0xA8
		::System::Int64 totalRequiredFurnitureCount; // 0xB0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTLISTCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTLISTCONTROLLER_SETDATA_OFFSET))(arg, nullptr);
		}

		WidgetsPositionSetter* get_PositionSetter()
		{
			return ((WidgetsPositionSetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTLISTCONTROLLER_GET_POSITIONSETTER_OFFSET))(nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTLISTCONTROLLER_REFRESHLIST_OFFSET))(nullptr);
		}

	};

