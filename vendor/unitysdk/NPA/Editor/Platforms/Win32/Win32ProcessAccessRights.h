#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Platforms::Win32 { class Win32ProcessAccessRights; }

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int Win32ProcessAccessRights_TypeDefinitionIndex = 26596;

	class Win32ProcessAccessRights : public Il2CppObject
	{
	public:
		::System::UInt32 value__; // 0x10
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_CREATE_PROCESS; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_CREATE_THREAD; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_DUP_HANDLE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_QUERY_INFORMATION; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_QUERY_LIMITED_INFORMATION; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_SET_INFORMATION; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_SET_QUOTA; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_SUSPEND_RESUME; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_TERMINATE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_VM_OPERATION; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_VM_READ; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_VM_WRITE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* DELETE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* READ_CONTROL; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* SYNCHRONIZE; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* WRITE_DAC; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* WRITE_OWNER; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* STANDARD_RIGHTS_REQUIRED; // 0x0
		::NPA::Editor::Platforms::Win32::Win32ProcessAccessRights* PROCESS_ALL_ACCESS; // 0x0

	};
}

