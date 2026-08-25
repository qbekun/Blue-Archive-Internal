#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_LIVESTREAM_NXPLIVESTREAMSDKTARGETEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C38150)

namespace NPA::Editor::Livestream
{
	inline static constexpr unsigned int NXPLivestreamSdkTargetEvent_TypeDefinitionIndex = 26785;

	class NXPLivestreamSdkTargetEvent : public ::NPA::NXPConsoleSystemMessageType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_LIVESTREAM_NXPLIVESTREAMSDKTARGETEVENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

