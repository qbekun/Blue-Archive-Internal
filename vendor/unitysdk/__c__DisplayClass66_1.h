#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentMeetupData; }
namespace MX::GameLogic::DBModel { class ScenarioGroupHistoryDB; }

#define <>C__DISPLAYCLASS66_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD710)
#define <>C__DISPLAYCLASS66_1__GETEVENTMEETUPHISTORYVOLUMES_B__3_OFFSET UNITYSDK_OFFSET(0x1EDD7F0)

	inline static constexpr unsigned int <>c__DisplayClass66_1_TypeDefinitionIndex = 1828;

	class <>c__DisplayClass66_1 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentMeetupData* e; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS66_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetEventMeetupHistoryVolumes_b__3(::MX::GameLogic::DBModel::ScenarioGroupHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ScenarioGroupHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS66_1__GETEVENTMEETUPHISTORYVOLUMES_B__3_OFFSET))(arg, nullptr);
		}

	};

