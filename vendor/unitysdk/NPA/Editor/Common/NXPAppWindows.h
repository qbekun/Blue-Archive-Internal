#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_NXPAPPWINDOWS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C43750)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppWindows_TypeDefinitionIndex = 26836;

	class NXPAppWindows : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPWINDOWS_.CTOR_OFFSET))(nullptr);
		}

	};
}

