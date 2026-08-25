#pragma once
#include "../../unitysdk.h"

namespace NPA::Logging { class LogCategory; }

namespace NPA::Logging
{
	inline static constexpr unsigned int LogCategory_TypeDefinitionIndex = 27412;

	class LogCategory : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Logging::LogCategory* INTERFACE; // 0x0
		::NPA::Logging::LogCategory* CORE; // 0x0
		::NPA::Logging::LogCategory* INITIALIZATION; // 0x0
		::NPA::Logging::LogCategory* NETWORK; // 0x0
		::NPA::Logging::LogCategory* AUTH; // 0x0
		::NPA::Logging::LogCategory* BILLING; // 0x0
		::NPA::Logging::LogCategory* SERVICE; // 0x0
		::NPA::Logging::LogCategory* ANALYTICS; // 0x0
		::NPA::Logging::LogCategory* BOARD; // 0x0
		::NPA::Logging::LogCategory* COMMUNITY; // 0x0
		::NPA::Logging::LogCategory* GAME; // 0x0
		::NPA::Logging::LogCategory* POLICY; // 0x0
		::NPA::Logging::LogCategory* PROMOTION; // 0x0
		::NPA::Logging::LogCategory* PUSH; // 0x0
		::NPA::Logging::LogCategory* SECURITY; // 0x0
		::NPA::Logging::LogCategory* CONSENT; // 0x0
		::NPA::Logging::LogCategory* WEB; // 0x0
		::NPA::Logging::LogCategory* ALL; // 0x0

	};
}

