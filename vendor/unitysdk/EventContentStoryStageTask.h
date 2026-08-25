#pragma once
#include "unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define EVENTCONTENTSTORYSTAGETASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x200AE90)
#define EVENTCONTENTSTORYSTAGETASK_STARTEVENTCONTENTSTORYSTAGE_OFFSET UNITYSDK_OFFSET(0x200B010)
#define EVENTCONTENTSTORYSTAGETASK_STARTSTORYSTAGESCENARIOGROUPS_OFFSET UNITYSDK_OFFSET(0x200B0C0)
#define EVENTCONTENTSTORYSTAGETASK_HANDLEEVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200B490)
#define EVENTCONTENTSTORYSTAGETASK_HANDLEEVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x200B950)
#define EVENTCONTENTSTORYSTAGETASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x200BA30)
#define EVENTCONTENTSTORYSTAGETASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x200BA40)

	inline static constexpr unsigned int EventContentStoryStageTask_TypeDefinitionIndex = 3143;

	class EventContentStoryStageTask : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGETASK_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void StartEventContentStoryStage(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGETASK_STARTEVENTCONTENTSTORYSTAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean StartStoryStageScenarioGroups(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGETASK_STARTSTORYSTAGESCENARIOGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentStoryStageResultResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGETASK_HANDLEEVENTCONTENTSTORYSTAGERESULTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventContentEnterStoryStageResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGETASK_HANDLEEVENTCONTENTENTERSTORYSTAGERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGETASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGETASK_RELEASE_OFFSET))(nullptr);
		}

	};

