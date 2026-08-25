#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board { class NXPBatchNoticeView; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA { class NPRequestTypeTag; }
namespace NPA::Promotion { class NXPToyCloseResult; }

#define NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C4EFC0)
#define NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_GETREQUESTTAG_OFFSET UNITYSDK_OFFSET(0x9C504D0)
#define NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9C504E0)
#define NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_SETCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C50510)
#define NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C50590)
#define NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_ONURLCHANGED_OFFSET UNITYSDK_OFFSET(0x9C505E0)
#define NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG__ONURLCHANGED_B__7_0_OFFSET UNITYSDK_OFFSET(0x9C50770)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPBatchNoticeDialog_TypeDefinitionIndex = 26883;

	class NXPBatchNoticeDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPBatchNoticeView* batchNoticeView; // 0x98
		::System::Boolean isShowWeb; // 0xA0

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::NPA::NPRequestTypeTag* GetRequestTag()
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_GETREQUESTTAG_OFFSET))(nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::System::Void SetCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_SETCALLBACK_OFFSET))(nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnUrlChanged(::System::Object* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG_ONURLCHANGED_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void _OnUrlChanged_b__7_0(::NPA::Promotion::NXPToyCloseResult* arg)
		{
			((::System::Void(*)(::NPA::Promotion::NXPToyCloseResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPBATCHNOTICEDIALOG__ONURLCHANGED_B__7_0_OFFSET))(arg, nullptr);
		}

	};
}

