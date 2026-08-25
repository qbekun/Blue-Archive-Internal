#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_UTIL_NXPFILEUTIL_GETFILEVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x9DBC8F0)
#define NPA_EDITOR_UTIL_NXPFILEUTIL_GETFILEVERSIONINFOSIZE_OFFSET UNITYSDK_OFFSET(0x9DBC9A0)
#define NPA_EDITOR_UTIL_NXPFILEUTIL_VERQUERYVALUE_OFFSET UNITYSDK_OFFSET(0x9DBCA30)
#define NPA_EDITOR_UTIL_NXPFILEUTIL_GETFILEVERSION_OFFSET UNITYSDK_OFFSET(0x9DB7FA0)
#define NPA_EDITOR_UTIL_NXPFILEUTIL_GETLANGCODEPAGE_OFFSET UNITYSDK_OFFSET(0x9DBCAE0)

namespace NPA::Editor::Util
{
	inline static constexpr unsigned int NXPFileUtil_TypeDefinitionIndex = 26423;

	class NXPFileUtil : public Il2CppObject
	{
	public:
		::System::Boolean GetFileVersionInfo(::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPFILEUTIL_GETFILEVERSIONINFO_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Int32 GetFileVersionInfoSize(::System::String* str, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPFILEUTIL_GETFILEVERSIONINFOSIZE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean VerQueryValue(::Il2CppArray<::System::Object*>* arg, ::System::String* str, int32_t&* arg, uint32_t&* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::String*, int32_t&*, uint32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPFILEUTIL_VERQUERYVALUE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::String* GetFileVersion(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPFILEUTIL_GETFILEVERSION_OFFSET))(str, str, nullptr);
		}

		::System::String* GetLangCodepage(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPFILEUTIL_GETLANGCODEPAGE_OFFSET))(str, nullptr);
		}

	};
}

