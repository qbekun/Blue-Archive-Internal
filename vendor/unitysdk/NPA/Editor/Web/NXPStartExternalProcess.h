#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_STARTPROCESS_OFFSET UNITYSDK_OFFSET(0x9DB3DE0)
#define NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_KILLPROCESS_OFFSET UNITYSDK_OFFSET(0x9DB3F60)
#define NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_KILLCHILDPROCESSES_OFFSET UNITYSDK_OFFSET(0x9DB4090)
#define NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_GETWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0x9DB45F0)
#define NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_GETCHILDPROCESSIDS_OFFSET UNITYSDK_OFFSET(0x9DB41F0)
#define NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DB4630)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int NXPStartExternalProcess_TypeDefinitionIndex = 26403;

	class NXPStartExternalProcess : public Il2CppObject
	{
	public:
		::System::Int32 INVALID_HANDLE_VALUE; // 0x0

		::System::UInt32 StartProcess(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::UInt32(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_STARTPROCESS_OFFSET))(str, str, arg, nullptr);
		}

		::System::Int32 KillProcess(::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_KILLPROCESS_OFFSET))(arg, nullptr);
		}

		::System::Void KillChildProcesses(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_KILLCHILDPROCESSES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetWindowHandle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_GETWINDOWHANDLE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetChildProcessIds(::System::UInt32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_GETCHILDPROCESSIDS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_NXPSTARTEXTERNALPROCESS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

