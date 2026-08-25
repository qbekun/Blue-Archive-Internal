#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_PLATFORMS_WIN32_USER32_FINDWINDOW_OFFSET UNITYSDK_OFFSET(0x9C151A0)
#define NPA_EDITOR_PLATFORMS_WIN32_USER32_GETDOUBLECLICKTIME_OFFSET UNITYSDK_OFFSET(0x9C15230)
#define NPA_EDITOR_PLATFORMS_WIN32_USER32_GETSYSTEMMETRICS_OFFSET UNITYSDK_OFFSET(0x9C152B0)

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int User32_TypeDefinitionIndex = 26595;

	class User32 : public Il2CppObject
	{
	public:
		::System::Int32 FindWindow(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_USER32_FINDWINDOW_OFFSET))(str, str, nullptr);
		}

		::System::UInt32 GetDoubleClickTime()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_USER32_GETDOUBLECLICKTIME_OFFSET))(nullptr);
		}

		::System::Int32 GetSystemMetrics(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_USER32_GETSYSTEMMETRICS_OFFSET))(arg, nullptr);
		}

	};
}

