#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentMeetupInfoExcel; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }
namespace MX::Data { class EventContentScenarioInfo; }

#define <>C__DISPLAYCLASS300_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6030)
#define <>C__DISPLAYCLASS300_0__TRYGETSCENARIOINFOCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D6040)
#define <>C__DISPLAYCLASS300_0__TRYGETSCENARIOINFOCLIENT_B__1_OFFSET UNITYSDK_OFFSET(0x18D6150)

	inline static constexpr unsigned int <>c__DisplayClass300_0_TypeDefinitionIndex = 16095;

	class <>c__DisplayClass300_0 : public Il2CppObject
	{
	public:
		::System::Int64 scenarioGroupId; // 0x10
		::MX::Data::Excel::EventContentMeetupInfoExcel* meetUpInfo; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS300_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetScenarioInfoClient_b__0(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS300_0__TRYGETSCENARIOINFOCLIENT_B__0_OFFSET))(arg, nullptr);
		}

		::MX::Data::EventContentScenarioInfo* _TryGetScenarioInfoClient_b__1(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return (return (::MX::Data::EventContentScenarioInfo*(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS300_0__TRYGETSCENARIOINFOCLIENT_B__1_OFFSET))(arg, nullptr);
		}

	};

