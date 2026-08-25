#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Common { class INXPApp; }

#define NPA_EDITOR_ANALYTICS_NXPANALYTICSEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC1DC0)

namespace NPA::Editor::Analytics
{
	inline static constexpr unsigned int NXPAnalyticsEditor_TypeDefinitionIndex = 27213;

	class NXPAnalyticsEditor : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Editor::Common::INXPApp* arg)
		{
			((::System::Void(*)(::NPA::Editor::Common::INXPApp*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_ANALYTICS_NXPANALYTICSEDITOR_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

