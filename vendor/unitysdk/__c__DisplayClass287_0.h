#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentData; }
namespace FlatData { class EventContentType; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }

#define <>C__DISPLAYCLASS287_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D59E0)
#define <>C__DISPLAYCLASS287_0__TRYGETPLAYABLESEASONIDSCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D59F0)

	inline static constexpr unsigned int <>c__DisplayClass287_0_TypeDefinitionIndex = 16085;

	class <>c__DisplayClass287_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentData* __4__this; // 0x10
		::System::DateTime* currentTime; // 0x18
		::FlatData::EventContentType* eventContentType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS287_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _TryGetPlayableSeasonIdsClient_b__0(::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS287_0__TRYGETPLAYABLESEASONIDSCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

