#pragma once
#include "../../unitysdk.h"

namespace NPA::Logging { class LogCategory; }
namespace NPA::Logging { class LogLevel; }

namespace NPA::Logging
{
	inline static constexpr unsigned int LogMessage_TypeDefinitionIndex = 27414;

	class LogMessage : public Il2CppObject
	{
	public:
		::NPA::Logging::LogCategory* Category; // 0x10
		::NPA::Logging::LogLevel* Level; // 0x14
		::System::String* Message; // 0x18

	};
}

