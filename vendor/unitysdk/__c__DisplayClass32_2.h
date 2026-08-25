#pragma once
#include "unitysdk.h"

namespace MX::Data { class AcademyScheduleData; }
class <>c__DisplayClass32_0;
class UIAcademyScheduleInfoPopup;

#define <>C__DISPLAYCLASS32_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B5640)
#define <>C__DISPLAYCLASS32_2__HANDLESELECTACADEMYZONEMESSAGE_B__1_OFFSET UNITYSDK_OFFSET(0x21B74B0)

	inline static constexpr unsigned int <>c__DisplayClass32_2_TypeDefinitionIndex = 4195;

	class <>c__DisplayClass32_2 : public Il2CppObject
	{
	public:
		::MX::Data::AcademyScheduleData* schedule; // 0x10
		<>c__DisplayClass32_0* CS$__8__locals2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS32_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleSelectAcademyZoneMessage_b__1(UIAcademyScheduleInfoPopup* arg)
		{
			((::System::Void(*)(UIAcademyScheduleInfoPopup*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS32_2__HANDLESELECTACADEMYZONEMESSAGE_B__1_OFFSET))(arg, nullptr);
		}

	};

