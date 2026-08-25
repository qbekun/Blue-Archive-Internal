#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Logger { class Loglevels; }

#define BESTHTTP_LOGGER_UNITYOUTPUT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89E6A0)
#define BESTHTTP_LOGGER_UNITYOUTPUT_WRITE_OFFSET UNITYSDK_OFFSET(0x89E6F0)
#define BESTHTTP_LOGGER_UNITYOUTPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x89DF90)

namespace BestHTTP::Logger
{
	inline static constexpr unsigned int UnityOutput_TypeDefinitionIndex = 23299;

	class UnityOutput : public Il2CppObject
	{
	public:
		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_UNITYOUTPUT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Write(::BestHTTP::Logger::Loglevels* arg, ::System::String* str)
		{
			((::System::Void(*)(::BestHTTP::Logger::Loglevels*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_UNITYOUTPUT_WRITE_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_LOGGER_UNITYOUTPUT_.CTOR_OFFSET))(nullptr);
		}

	};
}

