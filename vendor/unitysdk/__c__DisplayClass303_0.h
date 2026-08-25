#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentScenarioExcel; }

#define <>C__DISPLAYCLASS303_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D63A0)
#define <>C__DISPLAYCLASS303_0__TRYGETSCENARIOBYGROUPIDCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D63B0)

	inline static constexpr unsigned int <>c__DisplayClass303_0_TypeDefinitionIndex = 16099;

	class <>c__DisplayClass303_0 : public Il2CppObject
	{
	public:
		::System::Int64 scenarioGroupId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS303_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetScenarioByGroupIdClient_b__0(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS303_0__TRYGETSCENARIOBYGROUPIDCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

