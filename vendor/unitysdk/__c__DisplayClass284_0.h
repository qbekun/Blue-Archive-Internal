#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentData; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }

#define <>C__DISPLAYCLASS284_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D58F0)
#define <>C__DISPLAYCLASS284_0__TRYGETREWARDABLESEASONIDSCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D5900)

	inline static constexpr unsigned int <>c__DisplayClass284_0_TypeDefinitionIndex = 16082;

	class <>c__DisplayClass284_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentData* __4__this; // 0x10
		::System::DateTime* currentTime; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS284_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetRewardableSeasonIdsClient_b__0(::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS284_0__TRYGETREWARDABLESEASONIDSCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

