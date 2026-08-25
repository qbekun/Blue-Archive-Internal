#pragma once
#include "../../unitysdk.h"

namespace NPA::Logging { class LogLevel; }

namespace NPA::Logging
{
	inline static constexpr unsigned int LogLevel_TypeDefinitionIndex = 27413;

	class LogLevel : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Logging::LogLevel* OFF; // 0x0
		::NPA::Logging::LogLevel* FATAL; // 0x0
		::NPA::Logging::LogLevel* ERROR; // 0x0
		::NPA::Logging::LogLevel* WARNING; // 0x0
		::NPA::Logging::LogLevel* INFO; // 0x0
		::NPA::Logging::LogLevel* DEBUG; // 0x0
		::NPA::Logging::LogLevel* TRACE; // 0x0

	};
}

