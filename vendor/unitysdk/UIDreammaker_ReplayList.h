#pragma once
#include "unitysdk.h"

class UIReplayListController;
namespace MX::Data { class EventContentSeasonInfo; }

#define UIDREAMMAKER_REPLAYLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA1CA0)
#define UIDREAMMAKER_REPLAYLIST_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xBA1CB0)
#define UIDREAMMAKER_REPLAYLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xB9CA00)

	inline static constexpr unsigned int UIDreammaker_ReplayList_TypeDefinitionIndex = 605;

	class UIDreammaker_ReplayList : public Il2CppObject
	{
	public:
		UIReplayListController* listController; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_REPLAYLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_REPLAYLIST_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDREAMMAKER_REPLAYLIST_SETDATA_OFFSET))(arg, nullptr);
		}

	};

