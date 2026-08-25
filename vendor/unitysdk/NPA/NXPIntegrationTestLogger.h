#pragma once
#include "../unitysdk.h"

namespace NPA { class NXToyIntegrationTestCode; }

#define NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET UNITYSDK_OFFSET(0x9BC7300)
#define NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET UNITYSDK_OFFSET(0x9BC74D0)
#define NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET UNITYSDK_OFFSET(0x9BC75A0)
#define NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET UNITYSDK_OFFSET(0x9BC77C0)
#define NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET UNITYSDK_OFFSET(0x9BC78B0)
#define NPA_NXPINTEGRATIONTESTLOGGER_LOG_OFFSET UNITYSDK_OFFSET(0x9BC73F0)
#define NPA_NXPINTEGRATIONTESTLOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC7A50)
#define NPA_NXPINTEGRATIONTESTLOGGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BC7A60)

namespace NPA
{
	inline static constexpr unsigned int NXPIntegrationTestLogger_TypeDefinitionIndex = 25605;

	class NXPIntegrationTestLogger : public Il2CppObject
	{
	public:
		::System::Int32 skipFrames; // 0x0

		::System::Void AddIntegrationTestCode(::NPA::NXToyIntegrationTestCode* arg)
		{
			((::System::Void(*)(::NPA::NXToyIntegrationTestCode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET))(arg, nullptr);
		}

		::System::Void AddIntegrationTestCode(::NPA::NXToyIntegrationTestCode* arg, ::System::String* str)
		{
			((::System::Void(*)(::NPA::NXToyIntegrationTestCode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET))(arg, str, nullptr);
		}

		::System::Void AddIntegrationTestCode(::NPA::NXToyIntegrationTestCode* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::NPA::NXToyIntegrationTestCode*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void AddIntegrationTestCode(::NPA::NXToyIntegrationTestCode* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXToyIntegrationTestCode*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void AddIntegrationTestCode(::NPA::NXToyIntegrationTestCode* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::NXToyIntegrationTestCode*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_ADDINTEGRATIONTESTCODE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Log(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_LOG_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPINTEGRATIONTESTLOGGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

