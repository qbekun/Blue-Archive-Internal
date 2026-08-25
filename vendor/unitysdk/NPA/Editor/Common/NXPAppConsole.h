#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_NXPAPPCONSOLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C43510)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppConsole_TypeDefinitionIndex = 26835;

	class NXPAppConsole : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPCONSOLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

