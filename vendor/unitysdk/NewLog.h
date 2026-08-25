#pragma once
#include "unitysdk.h"

namespace UnityEngine { class LogType; }

	inline static constexpr unsigned int NewLog_TypeDefinitionIndex = 3571;

	class NewLog : public Il2CppObject
	{
	public:
		::System::Int64 logID; // 0x10
		::System::DateTime* logTime; // 0x18
		::System::String* message; // 0x20
		::UnityEngine::LogType* logType; // 0x28
		::System::String* stackTrace; // 0x30

	};

