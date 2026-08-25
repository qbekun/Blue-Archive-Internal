#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_PLATFORMS_WIN32_SHELL32_COMMANDLINETOARGVW_OFFSET UNITYSDK_OFFSET(0x9C15110)

namespace NPA::Editor::Platforms::Win32
{
	inline static constexpr unsigned int Shell32_TypeDefinitionIndex = 26594;

	class Shell32 : public Il2CppObject
	{
	public:
		::System::Int32 CommandLineToArgvW(::System::String* str, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_WIN32_SHELL32_COMMANDLINETOARGVW_OFFSET))(str, arg, nullptr);
		}

	};
}

