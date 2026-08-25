#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_PATH_CHANGEEXTENSION_OFFSET UNITYSDK_OFFSET(0x9324750)
#define SYSTEM_IO_PATH_COMBINE_OFFSET UNITYSDK_OFFSET(0x9324A30)
#define SYSTEM_IO_PATH_CLEANPATH_OFFSET UNITYSDK_OFFSET(0x9324DF0)
#define SYSTEM_IO_PATH_GETDIRECTORYNAME_OFFSET UNITYSDK_OFFSET(0x931F9D0)
#define SYSTEM_IO_PATH_GETDIRECTORYNAME_OFFSET UNITYSDK_OFFSET(0x9325B00)
#define SYSTEM_IO_PATH_GETEXTENSION_OFFSET UNITYSDK_OFFSET(0x9325BC0)
#define SYSTEM_IO_PATH_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x9323FC0)
#define SYSTEM_IO_PATH_GETFILENAMEWITHOUTEXTENSION_OFFSET UNITYSDK_OFFSET(0x9325D60)
#define SYSTEM_IO_PATH_GETFULLPATH_OFFSET UNITYSDK_OFFSET(0x931FDB0)
#define SYSTEM_IO_PATH_GETFULLPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x9325DB0)
#define SYSTEM_IO_PATH_GETFULLPATHNAME_OFFSET UNITYSDK_OFFSET(0x9325E00)
#define SYSTEM_IO_PATH_GETFULLPATHNAME_OFFSET UNITYSDK_OFFSET(0x9325ED0)
#define SYSTEM_IO_PATH_WINDOWSDRIVEADJUSTMENT_OFFSET UNITYSDK_OFFSET(0x93261E0)
#define SYSTEM_IO_PATH_INSECUREGETFULLPATH_OFFSET UNITYSDK_OFFSET(0x931EE80)
#define SYSTEM_IO_PATH_ISDIRECTORYSEPARATOR_OFFSET UNITYSDK_OFFSET(0x9326470)
#define SYSTEM_IO_PATH_GETPATHROOT_OFFSET UNITYSDK_OFFSET(0x93252A0)
#define SYSTEM_IO_PATH_GETTEMPPATH_OFFSET UNITYSDK_OFFSET(0x9327100)
#define SYSTEM_IO_PATH_GET_TEMP_PATH_OFFSET UNITYSDK_OFFSET(0x9327200)
#define SYSTEM_IO_PATH_ISPATHROOTED_OFFSET UNITYSDK_OFFSET(0x9327210)
#define SYSTEM_IO_PATH_ISPATHROOTED_OFFSET UNITYSDK_OFFSET(0x9324CC0)
#define SYSTEM_IO_PATH_GETINVALIDPATHCHARS_OFFSET UNITYSDK_OFFSET(0x9327330)
#define SYSTEM_IO_PATH_FINDEXTENSION_OFFSET UNITYSDK_OFFSET(0x93249B0)
#define SYSTEM_IO_PATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93273B0)
#define SYSTEM_IO_PATH_GETSERVERANDSHARE_OFFSET UNITYSDK_OFFSET(0x9327690)
#define SYSTEM_IO_PATH_SAMEROOT_OFFSET UNITYSDK_OFFSET(0x9327900)
#define SYSTEM_IO_PATH_CANONICALIZEPATH_OFFSET UNITYSDK_OFFSET(0x93264F0)
#define SYSTEM_IO_PATH_COMBINE_OFFSET UNITYSDK_OFFSET(0x9327D90)
#define SYSTEM_IO_PATH_COMBINE_OFFSET UNITYSDK_OFFSET(0x93280D0)
#define SYSTEM_IO_PATH_COMBINE_OFFSET UNITYSDK_OFFSET(0x93282C0)
#define SYSTEM_IO_PATH_GETFILENAME_OFFSET UNITYSDK_OFFSET(0x9328510)
#define SYSTEM_IO_PATH_JOIN_OFFSET UNITYSDK_OFFSET(0x9328710)
#define SYSTEM_IO_PATH_JOIN_OFFSET UNITYSDK_OFFSET(0x9328AC0)
#define SYSTEM_IO_PATH_JOININTERNAL_OFFSET UNITYSDK_OFFSET(0x93287C0)
#define SYSTEM_IO_PATH_JOININTERNAL_OFFSET UNITYSDK_OFFSET(0x9328C10)

namespace System::IO
{
	inline static constexpr unsigned int Path_TypeDefinitionIndex = 25303;

	class Path : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* InvalidPathChars; // 0x0
		::System::Char AltDirectorySeparatorChar; // 0x8
		::System::Char DirectorySeparatorChar; // 0xA
		::System::Char PathSeparator; // 0xC
		::System::String* DirectorySeparatorStr; // 0x10
		::System::Char VolumeSeparatorChar; // 0x18
		::Il2CppArray<::System::Object*>* PathSeparatorChars; // 0x20
		::System::Boolean dirEqualsVolume; // 0x28
		::Il2CppArray<::System::Object*>* trimEndCharsWindows; // 0x30
		::Il2CppArray<::System::Object*>* trimEndCharsUnix; // 0x38

		::System::String* ChangeExtension(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CHANGEEXTENSION_OFFSET))(str, str, nullptr);
		}

		::System::String* Combine(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_OFFSET))(str, str, nullptr);
		}

		::System::String* CleanPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CLEANPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetDirectoryName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETDIRECTORYNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetDirectoryName(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETDIRECTORYNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetExtension(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETEXTENSION_OFFSET))(str, nullptr);
		}

		::System::String* GetFileName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFILENAME_OFFSET))(str, nullptr);
		}

		::System::String* GetFileNameWithoutExtension(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFILENAMEWITHOUTEXTENSION_OFFSET))(str, nullptr);
		}

		::System::String* GetFullPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetFullPathInternal(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATHINTERNAL_OFFSET))(str, nullptr);
		}

		::System::Int32 GetFullPathName(::System::String* str, ::System::Int32 arg, ::System::Text::StringBuilder* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Text::StringBuilder*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATHNAME_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* GetFullPathName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFULLPATHNAME_OFFSET))(str, nullptr);
		}

		::System::String* WindowsDriveAdjustment(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_WINDOWSDRIVEADJUSTMENT_OFFSET))(str, nullptr);
		}

		::System::String* InsecureGetFullPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_INSECUREGETFULLPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean IsDirectorySeparator(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_ISDIRECTORYSEPARATOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetPathRoot(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETPATHROOT_OFFSET))(str, nullptr);
		}

		::System::String* GetTempPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETTEMPPATH_OFFSET))(nullptr);
		}

		::System::String* get_temp_path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GET_TEMP_PATH_OFFSET))(nullptr);
		}

		::System::Boolean IsPathRooted(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_ISPATHROOTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPathRooted(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_ISPATHROOTED_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetInvalidPathChars()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETINVALIDPATHCHARS_OFFSET))(nullptr);
		}

		::System::Int32 findExtension(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_FINDEXTENSION_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_.CCTOR_OFFSET))(nullptr);
		}

		::System::String* GetServerAndShare(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETSERVERANDSHARE_OFFSET))(str, nullptr);
		}

		::System::Boolean SameRoot(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_SAMEROOT_OFFSET))(str, str, nullptr);
		}

		::System::String* CanonicalizePath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_CANONICALIZEPATH_OFFSET))(str, nullptr);
		}

		::System::String* Combine(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_OFFSET))(arg, nullptr);
		}

		::System::String* Combine(::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_OFFSET))(str, str, str, nullptr);
		}

		::System::String* Combine(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_COMBINE_OFFSET))(str, str, str, str, nullptr);
		}

		Il2CppObject* GetFileName(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_GETFILENAME_OFFSET))(arg, nullptr);
		}

		::System::String* Join(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_JOIN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Join(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_JOIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* JoinInternal(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_JOININTERNAL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* JoinInternal(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATH_JOININTERNAL_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

