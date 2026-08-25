#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CallbackModuleMessageDel; }

#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_GETMODULEFILEFULLNAME_OFFSET UNITYSDK_OFFSET(0x9C365D0)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_INITIALIZEGET_OFFSET UNITYSDK_OFFSET(0x9C36600)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_LOADRAWLIBRARY_OFFSET UNITYSDK_OFFSET(0x9C36A50)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9C36F50)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_CALLBACKNATIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C36550)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_INITIALIZELOAD_OFFSET UNITYSDK_OFFSET(0x9C37180)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9C37470)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_HANDLEMESSAGEWITHLOCALECODE_OFFSET UNITYSDK_OFFSET(0x9C37490)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_CLOSEDSURVEYVIEW_OFFSET UNITYSDK_OFFSET(0x9C374C0)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_GETPLUGINPATHNAME_OFFSET UNITYSDK_OFFSET(0x9C37400)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_ISVALID_OFFSET UNITYSDK_OFFSET(0x9C30200)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_ISLOADEDAPPTESTMODULE_OFFSET UNITYSDK_OFFSET(0x9C30050)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_NATIVEUTF8FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9C374F0)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_STRINGFROMNATIVEUTF8_OFFSET UNITYSDK_OFFSET(0x9C37090)
#define NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2FA90)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKWindowsModule_TypeDefinitionIndex = 26780;

	class NXPMTKWindowsModule : public Il2CppObject
	{
	public:
		::System::Int32 dllHandle; // 0x10
		::System::Int32 loadLibraryStatus; // 0x18
		InitializeDel* initialize; // 0x20
		LogoutDel* logout; // 0x28
		HandleMessageWithLocaleCodeDel* handleMessageWithLocaleCode; // 0x30
		ClosedSurveyViewDel* closedSurveyView; // 0x38
		GetSystemTypeDel* getSystemType; // 0x40
		SetUserInfoEnvironmentWithAppTestDel* setUserInfoEnvironmentWithAppTest; // 0x48
		::NPA::Editor::methinks::CallbackModuleMessageDel* callbackModuleMessage; // 0x0

		::System::String* GetModuleFileFullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_GETMODULEFILEFULLNAME_OFFSET))(nullptr);
		}

		::System::Int32 InitializeGet(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_INITIALIZEGET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean LoadRawLibrary(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_LOADRAWLIBRARY_OFFSET))(str, nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Int32 CallbackNativeMessage(::System::UInt64 arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_CALLBACKNATIVEMESSAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 InitializeLoad(::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::Editor::methinks::CallbackModuleMessageDel* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::NPA::Editor::methinks::CallbackModuleMessageDel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_INITIALIZELOAD_OFFSET))(arg, str, str, str, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Int32 Logout(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Int32 HandleMessageWithLocaleCode(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_HANDLEMESSAGEWITHLOCALECODE_OFFSET))(str, str, str, nullptr);
		}

		::System::Int32 ClosedSurveyView(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_CLOSEDSURVEYVIEW_OFFSET))(arg, str, str, nullptr);
		}

		::System::String* GetPluginPathName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_GETPLUGINPATHNAME_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean IsLoadedAppTestModule()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_ISLOADEDAPPTESTMODULE_OFFSET))(nullptr);
		}

		::System::Int32 NativeUtf8FromString(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_NATIVEUTF8FROMSTRING_OFFSET))(str, nullptr);
		}

		::System::String* StringFromNativeUtf8(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_STRINGFROMNATIVEUTF8_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWINDOWSMODULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

