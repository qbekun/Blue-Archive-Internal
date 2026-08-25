#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class Loglevels; }

#define BESTHTTP_LOGGER_FILEOUTPUT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89BBB0)
#define BESTHTTP_LOGGER_FILEOUTPUT_WRITE_OFFSET UNITYSDK_OFFSET(0x89BC30)
#define BESTHTTP_LOGGER_FILEOUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x89BEA0)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int FileOutput_TypeDefinitionIndex = 23289;

	class FileOutput : public Il2CppObject
	{
	public:
		::System::IO::Stream* fileStream; // 0x10

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_FILEOUTPUT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Write(::BestHTTP::Logger::Loglevels* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::Logger::Loglevels*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_FILEOUTPUT_WRITE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_FILEOUTPUT_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

