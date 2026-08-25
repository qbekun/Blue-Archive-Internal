#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_PATHINTERNAL_ISVALIDDRIVECHAR_OFFSET UNITYSDK_OFFSET(0x92F19F0)
#define SYSTEM_IO_PATHINTERNAL_ENDSWITHPERIODORSPACE_OFFSET UNITYSDK_OFFSET(0x92F1A20)
#define SYSTEM_IO_PATHINTERNAL_ENSUREEXTENDEDPREFIXIFNEEDED_OFFSET UNITYSDK_OFFSET(0x92F1A80)
#define SYSTEM_IO_PATHINTERNAL_ENSUREEXTENDEDPREFIX_OFFSET UNITYSDK_OFFSET(0x92EC8A0)
#define SYSTEM_IO_PATHINTERNAL_ISDEVICE_OFFSET UNITYSDK_OFFSET(0x92F1B50)
#define SYSTEM_IO_PATHINTERNAL_ISDEVICEUNC_OFFSET UNITYSDK_OFFSET(0x92F1D20)
#define SYSTEM_IO_PATHINTERNAL_ISEXTENDED_OFFSET UNITYSDK_OFFSET(0x92F1CC0)
#define SYSTEM_IO_PATHINTERNAL_GETROOTLENGTH_OFFSET UNITYSDK_OFFSET(0x92EB2B0)
#define SYSTEM_IO_PATHINTERNAL_ISDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92F1E10)
#define SYSTEM_IO_PATHINTERNAL_ENDSINDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92EB230)
#define SYSTEM_IO_PATHINTERNAL_STARTSWITHDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92F1E30)
#define SYSTEM_IO_PATHINTERNAL_TRIMENDINGDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92EBD50)
#define SYSTEM_IO_PATHINTERNAL_TRIMENDINGDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x92F1F10)
#define SYSTEM_IO_PATHINTERNAL_ISROOT_OFFSET UNITYSDK_OFFSET(0x92F1EA0)
#define SYSTEM_IO_PATHINTERNAL_GET_ISCASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x92F20E0)
#define SYSTEM_IO_PATHINTERNAL_GETISCASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x92F2130)
#define SYSTEM_IO_PATHINTERNAL_ISPARTIALLYQUALIFIED_OFFSET UNITYSDK_OFFSET(0x92F1B40)
#define SYSTEM_IO_PATHINTERNAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92F2450)

namespace System::IO
{
	inline static constexpr unsigned int PathInternal_TypeDefinitionIndex = 25233;

	class PathInternal : public Il2CppObject
	{
	public:
		::System::Boolean s_isCaseSensitive; // 0x0

		::System::Boolean IsValidDriveChar(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISVALIDDRIVECHAR_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndsWithPeriodOrSpace(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ENDSWITHPERIODORSPACE_OFFSET))(str, nullptr);
		}

		::System::String* EnsureExtendedPrefixIfNeeded(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ENSUREEXTENDEDPREFIXIFNEEDED_OFFSET))(str, nullptr);
		}

		::System::String* EnsureExtendedPrefix(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ENSUREEXTENDEDPREFIX_OFFSET))(str, nullptr);
		}

		::System::Boolean IsDevice(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISDEVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDeviceUNC(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISDEVICEUNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExtended(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISEXTENDED_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetRootLength(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_GETROOTLENGTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDirectorySeparator(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISDIRECTORYSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean EndsInDirectorySeparator(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ENDSINDIRECTORYSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean StartsWithDirectorySeparator(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_STARTSWITHDIRECTORYSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::String* TrimEndingDirectorySeparator(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_TRIMENDINGDIRECTORYSEPARATOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* TrimEndingDirectorySeparator(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_TRIMENDINGDIRECTORYSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRoot(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISROOT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCaseSensitive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_GET_ISCASESENSITIVE_OFFSET))(nullptr);
		}

		::System::Boolean GetIsCaseSensitive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_GETISCASESENSITIVE_OFFSET))(nullptr);
		}

		::System::Boolean IsPartiallyQualified(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISPARTIALLYQUALIFIED_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

