#pragma once
#include "unitysdk.h"

#define THREADSAFELOGGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20AF3C0)
#define THREADSAFELOGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x20AF4A0)
#define THREADSAFELOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20AF5F0)
#define THREADSAFELOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x20AF650)
#define THREADSAFELOGGER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20AF6F0)
#define THREADSAFELOGGER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x20AF700)

	inline static constexpr unsigned int ThreadSafeLogger_TypeDefinitionIndex = 3572;

	class ThreadSafeLogger : public ::ToyWebViewShared::Messages::RequestJsDialog
	{
	public:
		Il2CppObject* logQueue; // 0x0
		Il2CppObject* logErrorQueue; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THREADSAFELOGGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THREADSAFELOGGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THREADSAFELOGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + THREADSAFELOGGER_LOG_OFFSET))(str, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + THREADSAFELOGGER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LogError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + THREADSAFELOGGER_LOGERROR_OFFSET))(str, nullptr);
		}

	};

