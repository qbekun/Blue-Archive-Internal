#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_BOARD_NXPBATCHNOTICEVIEW_LOAD_OFFSET UNITYSDK_OFFSET(0x9C5A6F0)
#define NPA_EDITOR_BOARD_NXPBATCHNOTICEVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C5AB90)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPBatchNoticeView_TypeDefinitionIndex = 26900;

	class NXPBatchNoticeView : public Il2CppObject
	{
	public:
		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEVIEW_LOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEVIEW_.CTOR_OFFSET))(nullptr);
		}

	};
}

