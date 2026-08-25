#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data { class EventContentMissionInfo; }
namespace MX::Data::Excel { class EventContentMissionExcel; }

#define <>C__DISPLAYCLASS357_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D6950)
#define <>C__DISPLAYCLASS357_0__TRYGETMISSIONINFOSBYEVENTCONTENTIDCLIENT_B__1_OFFSET UNITYSDK_OFFSET(0x18D6960)

	inline static constexpr unsigned int <>c__DisplayClass357_0_TypeDefinitionIndex = 16113;

	class <>c__DisplayClass357_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS357_0_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::EventContentMissionInfo* _TryGetMissionInfosByEventContentIdClient_b__1(::MX::Data::Excel::EventContentMissionExcel* arg)
		{
			return (return (::MX::Data::EventContentMissionInfo*(*)(::MX::Data::Excel::EventContentMissionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS357_0__TRYGETMISSIONINFOSBYEVENTCONTENTIDCLIENT_B__1_OFFSET))(arg, nullptr);
		}

	};

