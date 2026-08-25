#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CallbackModuleMessageDel; }

#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_GETAPISERVERURL_OFFSET UNITYSDK_OFFSET(0x9C333C0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_GETSURVEYSERVERURL_OFFSET UNITYSDK_OFFSET(0x9C33410)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C30710)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_INITIALIZEGET_OFFSET UNITYSDK_OFFSET(0x9C33460)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_INITIALIZELOAD_OFFSET UNITYSDK_OFFSET(0x9C33470)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_HANDLEMESSAGEWITHLOCALECODE_OFFSET UNITYSDK_OFFSET(0x9C33810)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_CLOSEDSURVEYVIEW_OFFSET UNITYSDK_OFFSET(0x9C339A0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x9C339B0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9C339C0)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_REQUESTLOGINWITHDATA_OFFSET UNITYSDK_OFFSET(0x9C33A90)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_ONTIMERELAPSED_OFFSET UNITYSDK_OFFSET(0x9C33B60)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE__ONTIMERELAPSED_B__25_0_OFFSET UNITYSDK_OFFSET(0x9C33C00)
#define NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE__ONTIMERELAPSED_B__25_1_OFFSET UNITYSDK_OFFSET(0x9C33CB0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKSurveyModule_TypeDefinitionIndex = 26769;

	class NXPMTKSurveyModule : public Il2CppObject
	{
	public:
		::System::Boolean debugMode; // 0x10
		::System::String* serviceId; // 0x18
		::System::String* guId; // 0x20
		::System::String* npToken; // 0x28
		::System::String* localeCode; // 0x30
		::NPA::Editor::methinks::CallbackModuleMessageDel* callbackModuleMessageDel; // 0x38
		::System::Boolean loggedin; // 0x40
		::System::Boolean enableInAppSurvey; // 0x41
		::System::Int64 refreshInterval; // 0x48
		::System::Timers::Timer* timer; // 0x50
		Il2CppObject* commandDictionary; // 0x58
		Il2CppObject* messageQueue; // 0x60
		::System::DateTime* lastDateTime; // 0x68
		::System::Boolean showSurveyView; // 0x70

		::System::String* GetApiServerUrl(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_GETAPISERVERURL_OFFSET))(arg, nullptr);
		}

		::System::String* GetSurveyServerUrl(::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_GETSURVEYSERVERURL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 InitializeGet(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_INITIALIZEGET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 InitializeLoad(::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::Editor::methinks::CallbackModuleMessageDel* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::NPA::Editor::methinks::CallbackModuleMessageDel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_INITIALIZELOAD_OFFSET))(arg, str, str, str, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Int32 HandleMessageWithLocaleCode(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_HANDLEMESSAGEWITHLOCALECODE_OFFSET))(str, str, str, nullptr);
		}

		::System::Int32 ClosedSurveyView(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_CLOSEDSURVEYVIEW_OFFSET))(arg, str, str, nullptr);
		}

		::System::Int32 Logout(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Threading::Tasks::Task* RequestLoginWithData()
		{
			return (return (::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_REQUESTLOGINWITHDATA_OFFSET))(nullptr);
		}

		::System::Void OnTimerElapsed(::System::Object* arg, ::System::Timers::ElapsedEventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Timers::ElapsedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE_ONTIMERELAPSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _OnTimerElapsed_b__25_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE__ONTIMERELAPSED_B__25_0_OFFSET))(nullptr);
		}

		::System::Void _OnTimerElapsed_b__25_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSURVEYMODULE__ONTIMERELAPSED_B__25_1_OFFSET))(nullptr);
		}

	};
}

