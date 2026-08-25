#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::methinks { class CallbackModuleMessageDel; }

#define NPA_EDITOR_METHINKS_NXPMTKMODULE_INITIALIZEGET_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_METHINKS_NXPMTKMODULE_INITIALIZELOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_METHINKS_NXPMTKMODULE_HANDLEMESSAGEWITHLOCALECODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_METHINKS_NXPMTKMODULE_CLOSEDSURVEYVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_METHINKS_NXPMTKMODULE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_METHINKS_NXPMTKMODULE_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_METHINKS_NXPMTKMODULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2F3D0)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKModule_TypeDefinitionIndex = 26756;

	class NXPMTKModule : public Il2CppObject
	{
	public:
		::System::Int32 InitializeGet(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKMODULE_INITIALIZEGET_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 InitializeLoad(::System::Boolean arg, ::System::String* str, ::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::Editor::methinks::CallbackModuleMessageDel* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::NPA::Editor::methinks::CallbackModuleMessageDel*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKMODULE_INITIALIZELOAD_OFFSET))(arg, str, str, str, arg, arg, arg, arg, arg, str, nullptr);
		}

		::System::Int32 HandleMessageWithLocaleCode(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKMODULE_HANDLEMESSAGEWITHLOCALECODE_OFFSET))(str, str, str, nullptr);
		}

		::System::Int32 ClosedSurveyView(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKMODULE_CLOSEDSURVEYVIEW_OFFSET))(arg, str, str, nullptr);
		}

		::System::Int32 Logout(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKMODULE_LOGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKMODULE_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKMODULE_.CTOR_OFFSET))(nullptr);
		}

	};
}

