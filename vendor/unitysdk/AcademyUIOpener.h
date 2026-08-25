#pragma once
#include "unitysdk.h"

class UIAcademyScheduleInfoPopup;
class UIAcademyLocation;

#define ACADEMYUIOPENER_SET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x26C1870)
#define ACADEMYUIOPENER_GET_LOCATIONID_OFFSET UNITYSDK_OFFSET(0x26C1880)
#define ACADEMYUIOPENER_SET_CANOPENSCHEDULEINFOPOPUP_OFFSET UNITYSDK_OFFSET(0x26C1890)
#define ACADEMYUIOPENER_GET_ZONEID_OFFSET UNITYSDK_OFFSET(0x26C18A0)
#define ACADEMYUIOPENER_SET_ZONEID_OFFSET UNITYSDK_OFFSET(0x26C18B0)
#define ACADEMYUIOPENER__OPENUI_B__17_2_OFFSET UNITYSDK_OFFSET(0x26C18C0)
#define ACADEMYUIOPENER_SET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0x26C1900)
#define ACADEMYUIOPENER__OPENUI_B__17_1_OFFSET UNITYSDK_OFFSET(0x26C1910)
#define ACADEMYUIOPENER_GET_CANOPENSCHEDULEINFOPOPUP_OFFSET UNITYSDK_OFFSET(0x26C1A00)
#define ACADEMYUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C1A10)
#define ACADEMYUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C1B30)
#define ACADEMYUIOPENER_GET_SCHEDULEID_OFFSET UNITYSDK_OFFSET(0x26C1B70)
#define ACADEMYUIOPENER__OPENUI_B__17_0_OFFSET UNITYSDK_OFFSET(0x26C1B80)

	inline static constexpr unsigned int AcademyUIOpener_TypeDefinitionIndex = 6950;

	class AcademyUIOpener : public Il2CppObject
	{
	public:
		::System::Int64 _LocationId_k__BackingField; // 0x18
		::System::Int64 _ScheduleId_k__BackingField; // 0x20
		::System::Int64 _ZoneId_k__BackingField; // 0x28
		::System::Boolean _CanOpenScheduleInfoPopup_k__BackingField; // 0x30

		::System::Void set_LocationId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_SET_LOCATIONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LocationId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_GET_LOCATIONID_OFFSET))(nullptr);
		}

		::System::Void set_CanOpenScheduleInfoPopup(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_SET_CANOPENSCHEDULEINFOPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ZoneId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_GET_ZONEID_OFFSET))(nullptr);
		}

		::System::Void set_ZoneId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_SET_ZONEID_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__17_2(UIAcademyScheduleInfoPopup* arg)
		{
			((::System::Void(*)(UIAcademyScheduleInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER__OPENUI_B__17_2_OFFSET))(arg, nullptr);
		}

		::System::Void set_ScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_SET_SCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__17_1(UIAcademyLocation* arg)
		{
			((::System::Void(*)(UIAcademyLocation*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER__OPENUI_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_CanOpenScheduleInfoPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_GET_CANOPENSCHEDULEINFOPOPUP_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_ScheduleId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER_GET_SCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__17_0(UIAcademyLocation* arg)
		{
			((::System::Void(*)(UIAcademyLocation*, ::PVOID))((::PBYTE)hIl2Cpp + ACADEMYUIOPENER__OPENUI_B__17_0_OFFSET))(arg, nullptr);
		}

	};

