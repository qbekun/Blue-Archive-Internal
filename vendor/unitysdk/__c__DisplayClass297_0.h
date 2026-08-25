#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentPlayGuideExcel; }

#define <>C__DISPLAYCLASS297_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5F20)
#define <>C__DISPLAYCLASS297_0__TRYGETPLAYGUIDECLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D5F30)

	inline static constexpr unsigned int <>c__DisplayClass297_0_TypeDefinitionIndex = 16093;

	class <>c__DisplayClass297_0 : public Il2CppObject
	{
	public:
		::System::Boolean isPCBuild; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS297_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetPlayGuideClient_b__0(::MX::Data::Excel::EventContentPlayGuideExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentPlayGuideExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS297_0__TRYGETPLAYGUIDECLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

