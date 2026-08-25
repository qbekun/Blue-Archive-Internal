#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor::Board { class NXPInAppWeb; }
namespace NPA::Editor { class NXPWebWindows; }
namespace NPA { class NXPWebSettings; }
namespace NPA { class NXPWebURLRequest; }

#define NPA_EDITOR_NXPWEBWINDOWS_CREATE_OFFSET UNITYSDK_OFFSET(0x9D8B970)
#define NPA_EDITOR_NXPWEBWINDOWS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D8B9F0)
#define NPA_EDITOR_NXPWEBWINDOWS_SETONSTARTEDLOADINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D8BA40)
#define NPA_EDITOR_NXPWEBWINDOWS_SETONFINISHEDLOADINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D8BA70)
#define NPA_EDITOR_NXPWEBWINDOWS_SETONRECEIVEDERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D8BAA0)
#define NPA_EDITOR_NXPWEBWINDOWS_SETDISMISSCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D8BAD0)
#define NPA_EDITOR_NXPWEBWINDOWS_SHOW_OFFSET UNITYSDK_OFFSET(0x9D8BB00)
#define NPA_EDITOR_NXPWEBWINDOWS_SHOW_OFFSET UNITYSDK_OFFSET(0x9D8BB20)
#define NPA_EDITOR_NXPWEBWINDOWS_LOAD_OFFSET UNITYSDK_OFFSET(0x9D8BB40)
#define NPA_EDITOR_NXPWEBWINDOWS_LOAD_OFFSET UNITYSDK_OFFSET(0x9D8BB60)
#define NPA_EDITOR_NXPWEBWINDOWS_CLOSE_OFFSET UNITYSDK_OFFSET(0x9D8BB80)
#define NPA_EDITOR_NXPWEBWINDOWS_SETWEBSETTINGS_OFFSET UNITYSDK_OFFSET(0x9D8BBC0)
#define NPA_EDITOR_NXPWEBWINDOWS_SETSORTORDER_OFFSET UNITYSDK_OFFSET(0x9D8BC00)
#define NPA_EDITOR_NXPWEBWINDOWS_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x9D8BC20)
#define NPA_EDITOR_NXPWEBWINDOWS_GOBACK_OFFSET UNITYSDK_OFFSET(0x9D8BC40)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPWebWindows_TypeDefinitionIndex = 26293;

	class NXPWebWindows : public Il2CppObject
	{
	public:
		::NPA::Editor::Board::NXPInAppWeb* inAppWebView; // 0x18

		::NPA::Editor::NXPWebWindows* Create(::NPA::NXPWebSettings* arg)
		{
			return (return (::NPA::Editor::NXPWebWindows*(*)(::NPA::NXPWebSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::NPA::NXPWebSettings* arg)
		{
			((::System::Void(*)(::NPA::NXPWebSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnStartedLoadingCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SETONSTARTEDLOADINGCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnFinishedLoadingCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SETONFINISHEDLOADINGCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnReceivedErrorCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SETONRECEIVEDERRORCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetDismissCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SETDISMISSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Show(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SHOW_OFFSET))(str, nullptr);
		}

		::System::Void Show(::NPA::NXPWebURLRequest* arg)
		{
			((::System::Void(*)(::NPA::NXPWebURLRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_LOAD_OFFSET))(str, nullptr);
		}

		::System::Void Load(::NPA::NXPWebURLRequest* arg)
		{
			((::System::Void(*)(::NPA::NXPWebURLRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_CLOSE_OFFSET))(nullptr);
		}

		::System::Void SetWebSettings(::NPA::NXPWebSettings* arg)
		{
			((::System::Void(*)(::NPA::NXPWebSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SETWEBSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void SetSortOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_SETSORTORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanGoBack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_CANGOBACK_OFFSET))(nullptr);
		}

		::System::Void GoBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPWEBWINDOWS_GOBACK_OFFSET))(nullptr);
		}

	};
}

