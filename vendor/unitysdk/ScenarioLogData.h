#pragma once
#include "unitysdk.h"

class DialogSpeakerType;
class ScenarioLogType;

	inline static constexpr unsigned int ScenarioLogData_TypeDefinitionIndex = 1840;

	class ScenarioLogData : public Il2CppObject
	{
	public:
		::System::Int64 Index; // 0x10
		DialogSpeakerType* SpeakerType; // 0x18
		ScenarioLogType* LogType; // 0x1C
		::System::String* Script; // 0x20
		::System::String* CharacterHashName; // 0x28
		::System::UInt32 VoiceId; // 0x30

	};

