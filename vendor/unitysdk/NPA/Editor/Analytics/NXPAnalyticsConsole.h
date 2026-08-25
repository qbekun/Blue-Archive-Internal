#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class INXPApp; }

#define NPA_EDITOR_ANALYTICS_NXPANALYTICSCONSOLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC1D50)

namespace NPA::Editor::Analytics
{
	inline static constexpr unsigned int NXPAnalyticsConsole_TypeDefinitionIndex = 27212;

	class NXPAnalyticsConsole : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSCONSOLE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

