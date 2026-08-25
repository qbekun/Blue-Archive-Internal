#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_NXPAPPMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C43C90)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int NXPAppMac_TypeDefinitionIndex = 26837;

	class NXPAppMac : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_NXPAPPMAC_.CTOR_OFFSET))(nullptr);
		}

	};
}

