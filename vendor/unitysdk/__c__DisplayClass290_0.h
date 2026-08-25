#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentData; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }

#define <>C__DISPLAYCLASS290_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5B60)
#define <>C__DISPLAYCLASS290_0__GETPLAYABLESEASONINFOSCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D5B70)

	inline static constexpr unsigned int <>c__DisplayClass290_0_TypeDefinitionIndex = 16088;

	class <>c__DisplayClass290_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentData* __4__this; // 0x10
		::System::DateTime* currentTime; // 0x18
		Il2CppObject* eventContentTypes; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS290_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetPlayableSeasonInfosClient_b__0(::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS290_0__GETPLAYABLESEASONINFOSCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

