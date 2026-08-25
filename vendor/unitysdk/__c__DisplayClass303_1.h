#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentScenarioExcel; }

#define <>C__DISPLAYCLASS303_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D64B0)
#define <>C__DISPLAYCLASS303_1__TRYGETSCENARIOBYGROUPIDCLIENT_B__1_OFFSET UNITYSDK_OFFSET(0x18D64C0)

	inline static constexpr unsigned int <>c__DisplayClass303_1_TypeDefinitionIndex = 16100;

	class <>c__DisplayClass303_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentScenarioExcel* e; // 0x10
		<>c__DisplayClass303_0* CS$__8__locals1; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS303_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetScenarioByGroupIdClient_b__1(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS303_1__TRYGETSCENARIOBYGROUPIDCLIENT_B__1_OFFSET))(arg, nullptr);
		}

	};

