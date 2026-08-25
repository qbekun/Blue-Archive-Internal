#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class NXPMTKSDK; }
namespace NPA::Editor::Board { class NXPWebDialog; }
namespace NPA::Editor::methinks { class NXPMTKModule; }
namespace NPA::Editor::Analytics { class INXPAnalytics; }
namespace NPA::Editor { class NXPToySession; }

#define NPA_EDITOR_METHINKS_NXPMTKSDK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2F3E0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9C2F3F0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_GETUSAGE_OFFSET UNITYSDK_OFFSET(0x9C2F610)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_GETDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x9C2F810)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZEGETMODULE_OFFSET UNITYSDK_OFFSET(0x9C2F920)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C2FAA0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9C2FE00)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_ONCHANGESESSION_OFFSET UNITYSDK_OFFSET(0x9C30620)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_SHUTDOWNMODULE_OFFSET UNITYSDK_OFFSET(0x9C306F0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZELOADMODULE_OFFSET UNITYSDK_OFFSET(0x9C30320)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_LOGOUTMODULE_OFFSET UNITYSDK_OFFSET(0x9C306D0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_HANDLEMESSAGEMODULE_OFFSET UNITYSDK_OFFSET(0x9C30720)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_CLOSEDSURVEYVIEWMODULE_OFFSET UNITYSDK_OFFSET(0x9C307B0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_GETSCHEMEACTION_OFFSET UNITYSDK_OFFSET(0x9C307E0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_CALLBACKMODULEMESSAGE_OFFSET UNITYSDK_OFFSET(0x9C308F0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9C31200)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_RUNONSTART_OFFSET UNITYSDK_OFFSET(0x9C312B0)
#define NPA_EDITOR_METHINKS_NXPMTKSDK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C31320)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKSDK_TypeDefinitionIndex = 26761;

	class NXPMTKSDK : public Il2CppObject
	{
	public:
		::NPA::Editor::methinks::NXPMTKSDK* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::System::Boolean isInitialized; // 0x10
		::NPA::Editor::Board::NXPWebDialog* webDialog; // 0x18
		::System::String* SCHEME_BROWSER; // 0x20
		::NPA::Editor::methinks::NXPMTKModule* module; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_.CTOR_OFFSET))(nullptr);
		}

		::NPA::Editor::methinks::NXPMTKSDK* get_Instance()
		{
			return (return (::NPA::Editor::methinks::NXPMTKSDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean GetUsage(int32_t&* arg, int32_t&* arg, int32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, int32_t&*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_GETUSAGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean GetDebugMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_GETDEBUGMODE_OFFSET))(nullptr);
		}

		::System::Int32 InitializeGetModule(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZEGETMODULE_OFFSET))(str, str, nullptr);
		}

		::System::Void Initialize(::NPA::Editor::Analytics::INXPAnalytics* arg)
		{
			((::System::Void(*)(::NPA::Editor::Analytics::INXPAnalytics*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::String* str, ::NPA::Editor::Analytics::INXPAnalytics* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::NPA::Editor::Analytics::INXPAnalytics*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZE_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void OnChangeSession(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_ONCHANGESESSION_OFFSET))(arg, nullptr);
		}

		::System::Void ShutdownModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_SHUTDOWNMODULE_OFFSET))(nullptr);
		}

		::System::Int32 InitializeLoadModule(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_INITIALIZELOADMODULE_OFFSET))(str, str, arg, arg, arg, arg, nullptr);
		}

		::System::Void LogoutModule(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_LOGOUTMODULE_OFFSET))(arg, nullptr);
		}

		::System::Void HandleMessageModule(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_HANDLEMESSAGEMODULE_OFFSET))(str, str, nullptr);
		}

		::System::Void ClosedSurveyViewModule(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_CLOSEDSURVEYVIEWMODULE_OFFSET))(arg, str, str, nullptr);
		}

		Il2CppObject* GetSchemeAction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_GETSCHEMEACTION_OFFSET))(nullptr);
		}

		::System::Int32 CallbackModuleMessage(::System::UInt64 arg, ::System::Int64 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::UInt64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_CALLBACKMODULEMESSAGE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void RunOnStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_RUNONSTART_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKSDK_.CCTOR_OFFSET))(nullptr);
		}

	};
}

