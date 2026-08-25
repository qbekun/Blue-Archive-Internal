#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentMeetupInfoExcel; }
namespace MX::Data { class EventContentScenarioInfo; }
namespace MX::Data::Excel { class EventContentScenarioExcel; }

#define <>C__DISPLAYCLASS299_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5F50)
#define <>C__DISPLAYCLASS299_0__TRYGETSCENARIOINFOSCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D5F60)

	inline static constexpr unsigned int <>c__DisplayClass299_0_TypeDefinitionIndex = 16094;

	class <>c__DisplayClass299_0 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentMeetupInfoExcel* meetUpInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS299_0_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::EventContentScenarioInfo* _TryGetScenarioInfosClient_b__0(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return (return (::MX::Data::EventContentScenarioInfo*(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS299_0__TRYGETSCENARIOINFOSCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

