#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKMACHINENAME_OFFSET UNITYSDK_OFFSET(0x9B47EF0)
#define SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKPATH_OFFSET UNITYSDK_OFFSET(0x9B47F80)
#define SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKROOTEDPATH_OFFSET UNITYSDK_OFFSET(0x9B48010)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SyntaxCheck_TypeDefinitionIndex = 29459;

	class SyntaxCheck : public Il2CppObject
	{
	public:
		::System::Boolean CheckMachineName(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKMACHINENAME_OFFSET))(str, nullptr);
		}

		::System::Boolean CheckPath(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean CheckRootedPath(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SYNTAXCHECK_CHECKROOTEDPATH_OFFSET))(str, nullptr);
		}

	};
}

