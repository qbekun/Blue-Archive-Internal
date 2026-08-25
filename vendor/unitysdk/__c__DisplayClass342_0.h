#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentChangeScenarioExcel; }

#define <>C__DISPLAYCLASS342_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D68B0)
#define <>C__DISPLAYCLASS342_0__TRYGETEVENTCHANGESCENARIOEXCELCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D68C0)

	inline static constexpr unsigned int <>c__DisplayClass342_0_TypeDefinitionIndex = 16111;

	class <>c__DisplayClass342_0 : public Il2CppObject
	{
	public:
		::System::Int64 scenarioGroupId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS342_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetEventChangeScenarioExcelClient_b__0(::MX::Data::Excel::EventContentChangeScenarioExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentChangeScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS342_0__TRYGETEVENTCHANGESCENARIOEXCELCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

