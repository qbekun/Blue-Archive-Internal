#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class EventContentScenarioExcel; }

#define REPLAYEVENTHANDLER_GETCHAPTERNAME_OFFSET UNITYSDK_OFFSET(0x28189C0)
#define REPLAYEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FDB20)
#define REPLAYEVENTHANDLER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x2818A40)
#define REPLAYEVENTHANDLER_GETEPISODENAME_OFFSET UNITYSDK_OFFSET(0x2818A90)
#define REPLAYEVENTHANDLER_ONOK_OFFSET UNITYSDK_OFFSET(0x2818B80)

	inline static constexpr unsigned int ReplayEventHandler_TypeDefinitionIndex = 7813;

	class ReplayEventHandler : public Il2CppObject
	{
	public:
		::MX::Data::Excel::EventContentScenarioExcel* excel; // 0x10
		Il2CppObject* okAction; // 0x20
		::System::Action* cancelAction; // 0x28

		::System::String* GetChapterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYEVENTHANDLER_GETCHAPTERNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentScenarioExcel* arg, Il2CppObject* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentScenarioExcel*, Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + REPLAYEVENTHANDLER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYEVENTHANDLER_ONCANCEL_OFFSET))(nullptr);
		}

		::System::String* GetEpisodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYEVENTHANDLER_GETEPISODENAME_OFFSET))(nullptr);
		}

		::System::Void OnOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REPLAYEVENTHANDLER_ONOK_OFFSET))(nullptr);
		}

	};

