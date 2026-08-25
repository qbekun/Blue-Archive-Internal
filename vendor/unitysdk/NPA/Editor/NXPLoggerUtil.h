#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_NXPLOGGERUTIL_LISTTOSTRING_OFFSET UNITYSDK_OFFSET(0x9DA4CE0)
#define NPA_EDITOR_NXPLOGGERUTIL_DICTIONARYTOSTRING_OFFSET UNITYSDK_OFFSET(0x9DA4F60)
#define NPA_EDITOR_NXPLOGGERUTIL_SHOWPLOG_OFFSET UNITYSDK_OFFSET(0x9DA5230)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPLoggerUtil_TypeDefinitionIndex = 26361;

	class NXPLoggerUtil : public Il2CppObject
	{
	public:
		::System::String* ListToString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGERUTIL_LISTTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* DictionaryToString(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGERUTIL_DICTIONARYTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShowPLog()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPLOGGERUTIL_SHOWPLOG_OFFSET))(nullptr);
		}

	};
}

