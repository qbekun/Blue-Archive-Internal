#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPCustomQRView; }
namespace NPA::Promotion { class NXPToyCustomQRCodeInfo; }

#define NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C50F80)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C51090)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x9C51120)
#define NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_SETQRINFO_OFFSET UNITYSDK_OFFSET(0x9C51060)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPCustomQRDialog_TypeDefinitionIndex = 26887;

	class NXPCustomQRDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPCustomQRView* _view; // 0x30
		::System::Action* closeAction; // 0x38

		::System::Void .ctor(::NPA::Promotion::NXPToyCustomQRCodeInfo* arg, ::System::Action* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCustomQRCodeInfo*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetQRInfo(::NPA::Promotion::NXPToyCustomQRCodeInfo* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCustomQRCodeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMQRDIALOG_SETQRINFO_OFFSET))(arg, nullptr);
		}

	};
}

