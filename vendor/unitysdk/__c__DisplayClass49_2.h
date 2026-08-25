#pragma once
#include "unitysdk.h"

class EventStageUIOpener;

#define <>C__DISPLAYCLASS49_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x275AAC0)
#define <>C__DISPLAYCLASS49_2__GETTOOLTIPINFO_B__3_OFFSET UNITYSDK_OFFSET(0x275AAD0)
#define <>C__DISPLAYCLASS49_2__GETTOOLTIPINFO_B__4_OFFSET UNITYSDK_OFFSET(0x275AB20)

	inline static constexpr unsigned int <>c__DisplayClass49_2_TypeDefinitionIndex = 7265;

	class <>c__DisplayClass49_2 : public Il2CppObject
	{
	public:
		Il2CppObject* shortcuts; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetTooltipInfo_b__3(EventStageUIOpener* arg)
		{
			return ((::System::Boolean(*)(EventStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_2__GETTOOLTIPINFO_B__3_OFFSET))(arg, nullptr);
		}

		::System::Boolean _GetTooltipInfo_b__4(EventStageUIOpener* arg)
		{
			return ((::System::Boolean(*)(EventStageUIOpener*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_2__GETTOOLTIPINFO_B__4_OFFSET))(arg, nullptr);
		}

	};

