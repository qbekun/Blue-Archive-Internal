#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_METHINKS_NXPMTKWIN32API_LOADLIBRARY_OFFSET UNITYSDK_OFFSET(0x9C36300)
#define NPA_EDITOR_METHINKS_NXPMTKWIN32API_GETPROCADDRESS_OFFSET UNITYSDK_OFFSET(0x9C36310)
#define NPA_EDITOR_METHINKS_NXPMTKWIN32API_FREELIBRARY_OFFSET UNITYSDK_OFFSET(0x9C36320)
#define NPA_EDITOR_METHINKS_NXPMTKWIN32API_GETMODULEHANDLE_OFFSET UNITYSDK_OFFSET(0x9C36330)
#define NPA_EDITOR_METHINKS_NXPMTKWIN32API_CLOSEHANDLE_OFFSET UNITYSDK_OFFSET(0x9C36340)
#define NPA_EDITOR_METHINKS_NXPMTKWIN32API_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C36350)

namespace NPA::Editor::methinks
{
	inline static constexpr unsigned int NXPMTKWin32Api_TypeDefinitionIndex = 26772;

	class NXPMTKWin32Api : public Il2CppObject
	{
	public:
		::System::Int32 LoadLibrary(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWIN32API_LOADLIBRARY_OFFSET))(str, nullptr);
		}

		::System::Int32 GetProcAddress(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWIN32API_GETPROCADDRESS_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean FreeLibrary(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWIN32API_FREELIBRARY_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetModuleHandle(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWIN32API_GETMODULEHANDLE_OFFSET))(str, nullptr);
		}

		::System::Boolean CloseHandle(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWIN32API_CLOSEHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_METHINKS_NXPMTKWIN32API_.CTOR_OFFSET))(nullptr);
		}

	};
}

