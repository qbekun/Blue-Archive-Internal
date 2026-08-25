#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_TRANSLATEWIN32EXPRESSION_OFFSET UNITYSDK_OFFSET(0x932BAB0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_MATCHESWIN32EXPRESSION_OFFSET UNITYSDK_OFFSET(0x932C440)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_MATCHESSIMPLEEXPRESSION_OFFSET UNITYSDK_OFFSET(0x932C3D0)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_MATCHPATTERN_OFFSET UNITYSDK_OFFSET(0x932D820)
#define SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x932E170)

namespace System::IO::Enumeration
{
	inline static constexpr unsigned int FileSystemName_TypeDefinitionIndex = 25323;

	class FileSystemName : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_wildcardChars; // 0x0
		::Il2CppArray<::System::Object*>* s_simpleWildcardChars; // 0x8

		::System::String* TranslateWin32Expression(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_TRANSLATEWIN32EXPRESSION_OFFSET))(str, nullptr);
		}

		::System::Boolean MatchesWin32Expression(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_MATCHESWIN32EXPRESSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchesSimpleExpression(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_MATCHESSIMPLEEXPRESSION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean MatchPattern(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_MATCHPATTERN_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENUMERATION_FILESYSTEMNAME_.CCTOR_OFFSET))(nullptr);
		}

	};
}

