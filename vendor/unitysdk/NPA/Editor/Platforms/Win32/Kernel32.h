#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Platforms::Win32 { class Win32ProcessCreationFlags; }
namespace NPA::Editor::Platforms::Win32 { class Win32StartupInfo&; }
namespace NPA::Editor::Platforms::Win32 { class Win32ProcessInformation&; }
namespace NPA::Editor::Platforms::Win32 { class Win32ProcessAccessRights; }
namespace NPA::Editor::Platforms::Win32 { class Win32ProcessEntry32&; }

#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_LOADLIBRARY_OFFSET UNITYSDK_OFFSET(0x9C13FF0)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETPROCADDRESSBYORDINAL_OFFSET UNITYSDK_OFFSET(0x9C14210)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETPROCADDRESSBYNAME_OFFSET UNITYSDK_OFFSET(0x9C142A0)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_FREELIBRARY_OFFSET UNITYSDK_OFFSET(0x9C143C0)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETMODULEHANDLE_OFFSET UNITYSDK_OFFSET(0x9C14890)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x9C14920)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_CREATEPROCESSW_OFFSET UNITYSDK_OFFSET(0x9C149B0)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_TERMINATEPROCESS_OFFSET UNITYSDK_OFFSET(0x9C14B00)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETEXITCODEPROCESS_OFFSET UNITYSDK_OFFSET(0x9C14B90)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_OPENPROCESS_OFFSET UNITYSDK_OFFSET(0x9C14C20)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_CREATETOOLHELP32SNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9C14CC0)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_PROCESS32FIRST_OFFSET UNITYSDK_OFFSET(0x9C14D50)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_PROCESS32NEXT_OFFSET UNITYSDK_OFFSET(0x9C14EF0)
#define NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETCOMMANDLINEW_OFFSET UNITYSDK_OFFSET(0x9C15090)

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int Kernel32_TypeDefinitionIndex = 26593;

	class Kernel32 : public Il2CppObject
	{
	public:
		::System::Int32 LoadLibrary(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_LOADLIBRARY_OFFSET))(str, nullptr);
		}

		::System::Int32 GetProcAddressByOrdinal(::System::Int32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETPROCADDRESSBYORDINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetProcAddressByName(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETPROCADDRESSBYNAME_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean FreeLibrary(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_FREELIBRARY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetModuleHandle(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETMODULEHANDLE_OFFSET))(str, nullptr);
		}

		::System::Boolean CloseHandle(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_CLOSEHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CreateProcessW(::System::String* str, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* arg, ::System::Int32 arg, ::System::String* str, ::NPA::Editor::Platforms::Win32::Win32StartupInfo&* arg, ::NPA::Editor::Platforms::Win32::Win32ProcessInformation&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags*, ::System::Int32, ::System::String*, ::NPA::Editor::Platforms::Win32::Win32StartupInfo&*, ::NPA::Editor::Platforms::Win32::Win32ProcessInformation&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_CREATEPROCESSW_OFFSET))(str, str, arg, arg, arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::Boolean TerminateProcess(::System::Int32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_TERMINATEPROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetExitCodeProcess(::System::Int32 arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETEXITCODEPROCESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 OpenProcess(::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* arg, ::System::Boolean arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights*, ::System::Boolean, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_OPENPROCESS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 CreateToolhelp32Snapshot(::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_CREATETOOLHELP32SNAPSHOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Process32First(::System::Int32 arg, ::NPA::Editor::Platforms::Win32::Win32ProcessEntry32&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Editor::Platforms::Win32::Win32ProcessEntry32&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_PROCESS32FIRST_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Process32Next(::System::Int32 arg, ::NPA::Editor::Platforms::Win32::Win32ProcessEntry32&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::NPA::Editor::Platforms::Win32::Win32ProcessEntry32&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_PROCESS32NEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetCommandLineW()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_KERNEL32_GETCOMMANDLINEW_OFFSET))(nullptr);
		}

	};
}

