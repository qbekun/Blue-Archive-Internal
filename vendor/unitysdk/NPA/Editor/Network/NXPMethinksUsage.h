#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPMETHINKSUSAGE_TODICTIONARY_OFFSET UNITYSDK_OFFSET(0x9C19F60)
#define NPA_EDITOR_NETWORK_NXPMETHINKSUSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A070)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPMethinksUsage_TypeDefinitionIndex = 26617;

	class NXPMethinksUsage : public Il2CppObject
	{
	public:
		::System::Int32 useStreaming; // 0x10
		::System::Int32 useSurvey; // 0x14
		::System::Int32 useScreenshot; // 0x18
		::System::Int32 useAlwaysOnRecording; // 0x1C

		Il2CppObject* ToDictionary()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPMETHINKSUSAGE_TODICTIONARY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPMETHINKSUSAGE_.CTOR_OFFSET))(nullptr);
		}

	};
}

