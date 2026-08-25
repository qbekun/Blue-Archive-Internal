#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentData; }
namespace FlatData { class EventContentType; }
namespace MX::Data::Excel { class EventContentSeasonExcel; }

#define <>C__DISPLAYCLASS289_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x18D5AF0)
#define <>C__DISPLAYCLASS289_0__GETPLAYABLESEASONINFOSCLIENT_B__0_OFFSET UNITYSDK_OFFSET(0x18D5B00)

	inline static constexpr unsigned int <>c__DisplayClass289_0_TypeDefinitionIndex = 16087;

	class <>c__DisplayClass289_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentData* __4__this; // 0x10
		::System::DateTime* currentTime; // 0x18
		::FlatData::EventContentType* eventContentType; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS289_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetPlayableSeasonInfosClient_b__0(::MX::Data::Excel::EventContentSeasonExcel* arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::EventContentSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS289_0__GETPLAYABLESEASONINFOSCLIENT_B__0_OFFSET))(arg, nullptr);
		}

	};

