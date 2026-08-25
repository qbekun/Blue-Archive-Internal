#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class Loglevels; }

#define BESTHTTP_LOGGER_ILOGOUTPUT_WRITE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int ILogOutput_TypeDefinitionIndex = 23291;

	class ILogOutput : public Il2CppObject
	{
	public:
		::System::Void Write(::BestHTTP::Logger::Loglevels* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::Logger::Loglevels*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_ILOGOUTPUT_WRITE_OFFSET))(arg, str, nullptr);
		}

	};
}

