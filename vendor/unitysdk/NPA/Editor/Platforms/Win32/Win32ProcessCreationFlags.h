#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Platforms::Win32 { class Win32ProcessCreationFlags; }

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int Win32ProcessCreationFlags_TypeDefinitionIndex = 26597;

	class Win32ProcessCreationFlags : public Il2CppObject
	{
	public:
		::System::UInt32 value__; // 0x10
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* NONE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_BREAKAWAY_FROM_JOB; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_DEFAULT_ERROR_MODE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_NEW_CONSOLE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_NEW_PROCESS_GROUP; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_NO_WINDOW; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_PROTECTED_PROCESS; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_PRESERVE_CODE_AUTHZ_LEVEL; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_SECURE_PROCESS; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_SEPARATE_WOW_VDM; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_SHARED_WOW_VDM; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_SUSPENDED; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* CREATE_UNICODE_ENVIRONMENT; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* DEBUG_ONLY_THIS_PROCESS; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* DEBUG_PROCESS; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* DETACHED_PROCESS; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* EXTENDED_STARTUPINFO_PRESENT; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessCreationFlags* INHERIT_PARENT_AFFINITY; // 0x0

	};
}

