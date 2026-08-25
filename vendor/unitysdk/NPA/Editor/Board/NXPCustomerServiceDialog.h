#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Board::JavaScriptInterface { class CustomerServiceJavaScriptInterface; }
namespace NPA::Service { class NXPWebInfo; }
namespace NPA { class NPCSInfo; }
namespace NPA { class NPRequestTypeTag; }

#define NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C4D150)
#define NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_GETREQUESTTAG_OFFSET UNITYSDK_OFFSET(0x9C50DC0)
#define NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9C50DD0)
#define NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C50E00)
#define NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_ONEXECUTENATIVEMETHOD_OFFSET UNITYSDK_OFFSET(0x9C50EF0)
#define NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C50F60)

namespace NPA::Editor::Board
{
	inline static constexpr unsigned int NXPCustomerServiceDialog_TypeDefinitionIndex = 26886;

	class NXPCustomerServiceDialog : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::JavaScriptInterface::CustomerServiceJavaScriptInterface* customerServiceJS; // 0x98

		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, ::NPA::NPCSInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, ::NPA::NPCSInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::NPA::NPRequestTypeTag* GetRequestTag()
		{
			return (return (::NPA::NPRequestTypeTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_GETREQUESTTAG_OFFSET))(nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnExecuteNativeMethod(::System::String* str, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_ONEXECUTENATIVEMETHOD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BOARD_NXPCUSTOMERSERVICEDIALOG_CLOSE_OFFSET))(nullptr);
		}

	};
}

