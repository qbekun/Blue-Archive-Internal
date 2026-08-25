#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPQRView; }
namespace NPA::Promotion { class NXPToyQRCodeInfo; }

#define NPA_EDITOR_BOARD_NXPQRDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C55910)
#define NPA_EDITOR_BOARD_NXPQRDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C55AE0)
#define NPA_EDITOR_BOARD_NXPQRDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C55B70)
#define NPA_EDITOR_BOARD_NXPQRDIALOG_SETQRINFO_OFFSET UNITYSDK_OFFSET(0x9C55AB0)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPQRDialog_TypeDefinitionIndex = 26895;

	class NXPQRDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPQRView* _view; // 0x30
		Il2CppObject* resultAction; // 0x38

		::System::Void .ctor(::NPA::Promotion::NXPToyQRCodeInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRDIALOG_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetQRInfo(::NPA::Promotion::NXPToyQRCodeInfo* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyQRCodeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPQRDIALOG_SETQRINFO_OFFSET))(arg, nullptr);
		}

	};
}

