#pragma once
#include "unitysdk.h"

class UITimeAttackHistory_RoomList;

#define UIPOPUP_TIMEATTACKHISTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xB604B0)
#define UIPOPUP_TIMEATTACKHISTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB604C0)

	inline static constexpr unsigned int UIPopup_TimeAttackHistory_TypeDefinitionIndex = 8417;

	class UIPopup_TimeAttackHistory : public Il2CppObject
	{
	public:
		UITimeAttackHistory_RoomList* HistoryList; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKHISTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TIMEATTACKHISTORY_ONOPENED_OFFSET))(arg, nullptr);
		}

	};

