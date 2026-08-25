#pragma once
#include "../../unitysdk.h"

namespace Nexon::Pub { class Patch; }

#define NEXON_PUB_NXPATCHERPATCH_GET_BUILDVERSION_OFFSET UNITYSDK_OFFSET(0x9553EE0)
#define NEXON_PUB_NXPATCHERPATCH_GET_BUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x9553EF0)
#define NEXON_PUB_NXPATCHERPATCH_GET_RESOURCEDATAURL_OFFSET UNITYSDK_OFFSET(0x9553F00)
#define NEXON_PUB_NXPATCHERPATCH_GET_PATCHFILEBASEURL_OFFSET UNITYSDK_OFFSET(0x9553F10)
#define NEXON_PUB_NXPATCHERPATCH_GET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0x9553F20)
#define NEXON_PUB_NXPATCHERPATCH_GET_TOTALFILECOUNT_OFFSET UNITYSDK_OFFSET(0x9553F30)
#define NEXON_PUB_NXPATCHERPATCH_GET_DOWNLOADEDFILECOUNT_OFFSET UNITYSDK_OFFSET(0x9553F40)
#define NEXON_PUB_NXPATCHERPATCH_GET_DOWNLOADEDFILESIZE_OFFSET UNITYSDK_OFFSET(0x9553F50)
#define NEXON_PUB_NXPATCHERPATCH_GET_TOTALSIZE_OFFSET UNITYSDK_OFFSET(0x9553F60)
#define NEXON_PUB_NXPATCHERPATCH_GET_GROUPLIST_OFFSET UNITYSDK_OFFSET(0x9553F70)
#define NEXON_PUB_NXPATCHERPATCH_GET_CURRENTGROUPLIST_OFFSET UNITYSDK_OFFSET(0x9553F80)
#define NEXON_PUB_NXPATCHERPATCH_SET_CURRENTGROUPLIST_OFFSET UNITYSDK_OFFSET(0x9553F90)
#define NEXON_PUB_NXPATCHERPATCH_GET_DOWNLOADTARGETFILES_OFFSET UNITYSDK_OFFSET(0x9553FA0)
#define NEXON_PUB_NXPATCHERPATCH_SET_DOWNLOADTARGETFILES_OFFSET UNITYSDK_OFFSET(0x9553FB0)
#define NEXON_PUB_NXPATCHERPATCH_GET_FILES_OFFSET UNITYSDK_OFFSET(0x9553FC0)
#define NEXON_PUB_NXPATCHERPATCH_GET_GROUPFILES_OFFSET UNITYSDK_OFFSET(0x9553FD0)
#define NEXON_PUB_NXPATCHERPATCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x9553FE0)
#define NEXON_PUB_NXPATCHERPATCH_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9554150)
#define NEXON_PUB_NXPATCHERPATCH_INIT_OFFSET UNITYSDK_OFFSET(0x95541A0)
#define NEXON_PUB_NXPATCHERPATCH_MAKEPATCHDATA_OFFSET UNITYSDK_OFFSET(0x9551370)
#define NEXON_PUB_NXPATCHERPATCH_ANALYZE_OFFSET UNITYSDK_OFFSET(0x954F960)
#define NEXON_PUB_NXPATCHERPATCH_CALLRESOURCEDATA_OFFSET UNITYSDK_OFFSET(0x9554210)
#define NEXON_PUB_NXPATCHERPATCH_INITIALIZEFILES_OFFSET UNITYSDK_OFFSET(0x95545B0)
#define NEXON_PUB_NXPATCHERPATCH_GENERATERESOURCEDATA_OFFSET UNITYSDK_OFFSET(0x9554900)
#define NEXON_PUB_NXPATCHERPATCH_COMBINEGROUPFILES_OFFSET UNITYSDK_OFFSET(0x95542B0)
#define NEXON_PUB_NXPATCHERPATCH_VALIDATEPATCHFILE_OFFSET UNITYSDK_OFFSET(0x9554C50)
#define NEXON_PUB_NXPATCHERPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9554F20)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherPatch_TypeDefinitionIndex = 37453;

	class NXPatcherPatch : public Il2CppObject
	{
	public:
		::System::String* _buildVersion; // 0x18
		::System::String* _buildNumber; // 0x20
		::System::String* _resourceDataUrl; // 0x28
		::System::String* _patchFileBaseUrl; // 0x30
		::System::String* _persistentDataPath; // 0x38
		::System::Int32 _patchVersion; // 0x40
		::System::Int32 _totalFileCount; // 0x44
		::System::Int32 _downloadedFileCount; // 0x48
		::System::Int64 _downloadedFileSize; // 0x50
		::System::Int64 _totalSize; // 0x58
		Il2CppObject* _groupList; // 0x60
		Il2CppObject* _currentGroupList; // 0x68
		Il2CppObject* _downloadTargetFiles; // 0x70
		Il2CppObject* _files; // 0x78
		Il2CppObject* _groupFiles; // 0x80
		::System::Threading::Thread* thread; // 0x88

		::System::String* get_BuildVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_BUILDVERSION_OFFSET))(nullptr);
		}

		::System::String* get_BuildNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_BUILDNUMBER_OFFSET))(nullptr);
		}

		::System::String* get_ResourceDataUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_RESOURCEDATAURL_OFFSET))(nullptr);
		}

		::System::String* get_PatchFileBaseUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_PATCHFILEBASEURL_OFFSET))(nullptr);
		}

		::System::Int32 get_PatchVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_PATCHVERSION_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalFileCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_TOTALFILECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_DownloadedFileCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_DOWNLOADEDFILECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_DownloadedFileSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_DOWNLOADEDFILESIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_TotalSize()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_TOTALSIZE_OFFSET))(nullptr);
		}

		Il2CppObject* get_GroupList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_GROUPLIST_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentGroupList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_CURRENTGROUPLIST_OFFSET))(nullptr);
		}

		::System::Void set_CurrentGroupList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_SET_CURRENTGROUPLIST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DownloadTargetFiles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_DOWNLOADTARGETFILES_OFFSET))(nullptr);
		}

		::System::Void set_DownloadTargetFiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_SET_DOWNLOADTARGETFILES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Files()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_FILES_OFFSET))(nullptr);
		}

		Il2CppObject* get_GroupFiles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GET_GROUPFILES_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void Init(::Nexon::Pub::Patch* arg)
		{
			((::System::Void(*)(::Nexon::Pub::Patch*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void MakePatchData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_MAKEPATCHDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Analyze(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_ANALYZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* CallResourceData(Il2CppObject* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_CALLRESOURCEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeFiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_INITIALIZEFILES_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateResourceData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_GENERATERESOURCEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void CombineGroupFiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_COMBINEGROUPFILES_OFFSET))(arg, nullptr);
		}

		::System::Void ValidatePatchFile(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_VALIDATEPATCHFILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERPATCH_.CTOR_OFFSET))(nullptr);
		}

	};
}

