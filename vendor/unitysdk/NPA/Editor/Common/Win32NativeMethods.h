#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_COMMON_WIN32NATIVEMETHODS_GETCOMMANDLINE_OFFSET UNITYSDK_OFFSET(0x9C490C0)
#define NPA_EDITOR_COMMON_WIN32NATIVEMETHODS_GETCOMMANDLINEARGS_OFFSET UNITYSDK_OFFSET(0x9C47770)

namespace NPA::Editor::Common
{
	inline static constexpr unsigned int Win32NativeMethods_TypeDefinitionIndex = 26852;

	class Win32NativeMethods : public Il2CppObject
	{
	public:
		::System::String* GetCommandLine()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_WIN32NATIVEMETHODS_GETCOMMANDLINE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetCommandLineArgs()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_COMMON_WIN32NATIVEMETHODS_GETCOMMANDLINEARGS_OFFSET))(nullptr);
		}

	};
}

