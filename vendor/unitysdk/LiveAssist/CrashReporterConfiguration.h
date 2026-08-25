#pragma once
#include "../unitysdk.h"

class CRASH_BEHAVIOR;
class CRASH_RECEIVE_SERVER_REGION;

#define LIVEASSIST_CRASHREPORTERCONFIGURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE0180)

namespace LiveAssist
{
	inline static constexpr unsigned int CrashReporterConfiguration_TypeDefinitionIndex = 10127;

	class CrashReporterConfiguration : public Il2CppObject
	{
	public:
		::System::Boolean EnableCrashReporter; // 0x10
		::System::String* ProjectId; // 0x18
		::System::String* ClientVersion; // 0x20
		CRASH_BEHAVIOR* CrashBehavior; // 0x28
		CRASH_RECEIVE_SERVER_REGION* ReceiveServerRegion; // 0x2C
		::System::String* GameAssemblyDllFilePath; // 0x30
		::System::Boolean CaptureUnityMessage; // 0x38
		::System::Boolean EnablePrivacyProtection; // 0x39
		::System::Boolean EnableVectoredExceptionHandling; // 0x3A
		::System::Boolean SkipAccessViolation; // 0x3B

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIVEASSIST_CRASHREPORTERCONFIGURATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

