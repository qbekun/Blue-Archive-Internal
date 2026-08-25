#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPWebSettings; }
namespace NPA { class NXPWeb; }
namespace NPA { class NXPWebURLRequest; }

#define NPA_NXPWEB_CREATE_OFFSET UNITYSDK_OFFSET(0x9BCC6C0)
#define NPA_NXPWEB_SETONSTARTEDLOADINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_SETONFINISHEDLOADINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_SETONRECEIVEDERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_SETDISMISSCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_SHOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_SHOW_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_SETWEBSETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_GETWEBSETTINGS_OFFSET UNITYSDK_OFFSET(0x9BCC6D0)
#define NPA_NXPWEB_SETSORTORDER_OFFSET UNITYSDK_OFFSET(0x9BCC6E0)
#define NPA_NXPWEB_CANGOBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_GOBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPWEB_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCC6F0)

namespace NPA
{
	inline static constexpr unsigned int NXPWeb_TypeDefinitionIndex = 25652;

	class NXPWeb : public Il2CppObject
	{
	public:
		::NPA::NXPWebSettings* webSettings_; // 0x10

		::NPA::NXPWeb* Create(::NPA::NXPWebSettings* arg)
		{
			return (return (::NPA::NXPWeb*(*)(::NPA::NXPWebSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnStartedLoadingCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SETONSTARTEDLOADINGCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnFinishedLoadingCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SETONFINISHEDLOADINGCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetOnReceivedErrorCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SETONRECEIVEDERRORCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetDismissCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SETDISMISSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void Show(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SHOW_OFFSET))(str, nullptr);
		}

		::System::Void Show(::NPA::NXPWebURLRequest* arg)
		{
			((::System::Void(*)(::NPA::NXPWebURLRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SHOW_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_LOAD_OFFSET))(str, nullptr);
		}

		::System::Void Load(::NPA::NXPWebURLRequest* arg)
		{
			((::System::Void(*)(::NPA::NXPWebURLRequest*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_CLOSE_OFFSET))(nullptr);
		}

		::System::Void SetWebSettings(::NPA::NXPWebSettings* arg)
		{
			((::System::Void(*)(::NPA::NXPWebSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SETWEBSETTINGS_OFFSET))(arg, nullptr);
		}

		::NPA::NXPWebSettings* GetWebSettings()
		{
			return (return (::NPA::NXPWebSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_GETWEBSETTINGS_OFFSET))(nullptr);
		}

		::System::Void SetSortOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_SETSORTORDER_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanGoBack()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_CANGOBACK_OFFSET))(nullptr);
		}

		::System::Void GoBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_GOBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPWEB_.CTOR_OFFSET))(nullptr);
		}

	};
}

