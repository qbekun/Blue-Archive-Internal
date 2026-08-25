#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class NXFileType; }

#define NEXON_PUB_NXPATCHERUTIL_CREATEPATCHERDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x954E670)
#define NEXON_PUB_NXPATCHERUTIL_CREATEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x954DD90)
#define NEXON_PUB_NXPATCHERUTIL_ROOTDIRECTORYPATH_OFFSET UNITYSDK_OFFSET(0x954CD70)
#define NEXON_PUB_NXPATCHERUTIL_PATHCOMBINE_OFFSET UNITYSDK_OFFSET(0x954CE20)
#define NEXON_PUB_NXPATCHERUTIL_REPLACEBACKSLASH_OFFSET UNITYSDK_OFFSET(0x9555540)
#define NEXON_PUB_NXPATCHERUTIL_MOVEFILE_OFFSET UNITYSDK_OFFSET(0x954CFC0)
#define NEXON_PUB_NXPATCHERUTIL_DELETEUNNECESSARYRESOURCEFILES_OFFSET UNITYSDK_OFFSET(0x9551F40)
#define NEXON_PUB_NXPATCHERUTIL_DELETEFILES_OFFSET UNITYSDK_OFFSET(0x95555A0)
#define NEXON_PUB_NXPATCHERUTIL_DELETEFILE_OFFSET UNITYSDK_OFFSET(0x954D200)
#define NEXON_PUB_NXPATCHERUTIL_DELETEEMPTYDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x9552640)
#define NEXON_PUB_NXPATCHERUTIL_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x9550720)
#define NEXON_PUB_NXPATCHERUTIL_WRITETOBINARYFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_NXPATCHERUTIL_READFROMBINARYFILE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_NXPATCHERUTIL_GETPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x9550EC0)
#define NEXON_PUB_NXPATCHERUTIL_GETPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x954F450)
#define NEXON_PUB_NXPATCHERUTIL_SETPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x9555610)
#define NEXON_PUB_NXPATCHERUTIL_SETPATCHVERSION_OFFSET UNITYSDK_OFFSET(0x9551EB0)
#define NEXON_PUB_NXPATCHERUTIL_GETMD5_OFFSET UNITYSDK_OFFSET(0x9555770)
#define NEXON_PUB_NXPATCHERUTIL_ISSAMEFILE_OFFSET UNITYSDK_OFFSET(0x954CEB0)
#define NEXON_PUB_NXPATCHERUTIL_ISLISTEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_NXPATCHERUTIL_ISLISTNOTEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEXON_PUB_NXPATCHERUTIL_SETDONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x954E5C0)
#define NEXON_PUB_NXPATCHERUTIL_ERRORCODETONXERRORCODE_OFFSET UNITYSDK_OFFSET(0x9551400)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherUtil_TypeDefinitionIndex = 37456;

	class NXPatcherUtil : public Il2CppObject
	{
	public:
		::System::Void CreatePatcherDirectories()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_CREATEPATCHERDIRECTORIES_OFFSET))(nullptr);
		}

		::System::Void CreateDirectory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_CREATEDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::String* RootDirectoryPath(::Nexon::Pub::NXFileType* arg)
		{
			return (return (::System::String*(*)(::Nexon::Pub::NXFileType*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_ROOTDIRECTORYPATH_OFFSET))(arg, nullptr);
		}

		::System::String* PathCombine(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_PATHCOMBINE_OFFSET))(str, str, nullptr);
		}

		::System::String* ReplaceBackSlash(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_REPLACEBACKSLASH_OFFSET))(str, nullptr);
		}

		::System::Void MoveFile(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_MOVEFILE_OFFSET))(str, str, nullptr);
		}

		::System::Void DeleteUnnecessaryResourceFiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_DELETEUNNECESSARYRESOURCEFILES_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteFiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_DELETEFILES_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteFile(::System::String* str, ::Nexon::Pub::NXFileType* arg)
		{
			((::System::Void(*)(::System::String*, ::Nexon::Pub::NXFileType*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_DELETEFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Void DeleteEmptyDirectories()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_DELETEEMPTYDIRECTORIES_OFFSET))(nullptr);
		}

		::System::String* GetFilePath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_GETFILEPATH_OFFSET))(str, nullptr);
		}

		::System::Void WriteToBinaryFile(::System::String* str, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_WRITETOBINARYFILE_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* ReadFromBinaryFile(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_READFROMBINARYFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetPatchVersion()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_GETPATCHVERSION_OFFSET))(nullptr);
		}

		::System::Int64 GetPatchVersion(Il2CppObject* arg)
		{
			return (return (::System::Int64(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_GETPATCHVERSION_OFFSET))(arg, nullptr);
		}

		::System::Void SetPatchVersion(::System::Int64 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_SETPATCHVERSION_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetPatchVersion(::System::Int64 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_SETPATCHVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetMD5(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_GETMD5_OFFSET))(str, nullptr);
		}

		::System::Boolean IsSameFile(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_ISSAMEFILE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean IsListEmpty(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_ISLISTEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsListNotEmpty(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_ISLISTNOTEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void SetDontDestroyOnLoad(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_SETDONTDESTROYONLOAD_OFFSET))(arg, nullptr);
		}

		::System::Int32 ErrorCodeToNXErrorCode(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERUTIL_ERRORCODETONXERRORCODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

