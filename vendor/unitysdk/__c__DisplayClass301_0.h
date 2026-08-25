#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentScenarioInfo; }

#define <>C__DISPLAYCLASS301_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6250)
#define <>C__DISPLAYCLASS301_0__TRYGETPREVIOUSSCENARIOINFOSCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D6260)
#define <>C__DISPLAYCLASS301_0__TRYGETPREVIOUSSCENARIOINFOSCLIENT_B__2_OFFSET UNITYSDK_OFFSET(0x18D62C0)
#define <>C__DISPLAYCLASS301_0__TRYGETPREVIOUSSCENARIOINFOSCLIENT_B__1_OFFSET UNITYSDK_OFFSET(0x18D6320)

	inline static constexpr unsigned int <>c__DisplayClass301_0_TypeDefinitionIndex = 16097;

	class <>c__DisplayClass301_0 : public Il2CppObject
	{
	public:
		::System::Int64 scenarioGroupId; // 0x10
		::MX::Data::EventContentScenarioInfo* pivotScenarioInfo; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS301_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetPreviousScenarioInfosClient_b__0(::MX::Data::EventContentScenarioInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentScenarioInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS301_0__TRYGETPREVIOUSSCENARIOINFOSCLIENT_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _TryGetPreviousScenarioInfosClient_b__2(::MX::Data::EventContentScenarioInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentScenarioInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS301_0__TRYGETPREVIOUSSCENARIOINFOSCLIENT_B__2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _TryGetPreviousScenarioInfosClient_b__1(::MX::Data::EventContentScenarioInfo* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::EventContentScenarioInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS301_0__TRYGETPREVIOUSSCENARIOINFOSCLIENT_B__1_OFFSET))(arg, nullptr);
		}

	};

