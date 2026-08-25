#pragma once
#include "unitysdk.h"

namespace LiveAssist { class CrashReporterConfiguration; }

#define CRASHREPORTERCLIENT_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xC5BB30)
#define CRASHREPORTERCLIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC5BB50)
#define CRASHREPORTERCLIENT_INIT_OFFSET UNITYSDK_OFFSET(0xC5BB60)
#define CRASHREPORTERCLIENT_SET_OFFSET UNITYSDK_OFFSET(0xC5BC40)
#define CRASHREPORTERCLIENT_START_OFFSET UNITYSDK_OFFSET(0xC5BC90)
#define CRASHREPORTERCLIENT_REGISTERLOGFILE_OFFSET UNITYSDK_OFFSET(0xC5BD40)
#define CRASHREPORTERCLIENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC5BD50)
#define CRASHREPORTERCLIENT_GET_PROJECTID_OFFSET UNITYSDK_OFFSET(0xC5BD90)
#define CRASHREPORTERCLIENT_INITCRASHREPORTER_OFFSET UNITYSDK_OFFSET(0xC5BC10)

	inline static constexpr unsigned int CrashReporterClient_TypeDefinitionIndex = 8956;

	class CrashReporterClient : public Il2CppObject
	{
	public:
		::LiveAssist::CrashReporterConfiguration* Configuration; // 0x18

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::LiveAssist::CrashReporterConfiguration* arg)
		{
			((::System::Void(*)(::LiveAssist::CrashReporterConfiguration*, ::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Set(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_SET_OFFSET))(str, str2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_START_OFFSET))(nullptr);
		}

		::System::Void RegisterLogFile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_REGISTERLOGFILE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_ONDESTROY_OFFSET))(nullptr);
		}

		::System::String* get_ProjectID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_GET_PROJECTID_OFFSET))(nullptr);
		}

		::System::Void InitCrashReporter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRASHREPORTERCLIENT_INITCRASHREPORTER_OFFSET))(nullptr);
		}

	};

