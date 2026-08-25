#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_NXPATCHERCONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x954B5A0)
#define NEXON_PUB_NXPATCHERCONFIG_SETALLOWSCELLULAR_OFFSET UNITYSDK_OFFSET(0x954B6F0)
#define NEXON_PUB_NXPATCHERCONFIG_SETDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x954B700)
#define NEXON_PUB_NXPATCHERCONFIG_SETDONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x954B710)
#define NEXON_PUB_NXPATCHERCONFIG_SETMAXDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x954B720)
#define NEXON_PUB_NXPATCHERCONFIG_SETMAXDOWNLOADBACKGROUND_OFFSET UNITYSDK_OFFSET(0x954B730)
#define NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADCOMPLETEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x954B740)
#define NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADCONTINUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x954B750)
#define NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADPROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0x954B760)
#define NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADFAILEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x954B770)
#define NEXON_PUB_NXPATCHERCONFIG_SETAPPID_OFFSET UNITYSDK_OFFSET(0x954B780)
#define NEXON_PUB_NXPATCHERCONFIG_SETPACKAGENAME_OFFSET UNITYSDK_OFFSET(0x954B790)
#define NEXON_PUB_NXPATCHERCONFIG_SETAUTOMOVETOMARKET_OFFSET UNITYSDK_OFFSET(0x954B7A0)
#define NEXON_PUB_NXPATCHERCONFIG_SETSTORAGERATE_OFFSET UNITYSDK_OFFSET(0x954B7B0)
#define NEXON_PUB_NXPATCHERCONFIG_SETADVERTISINGID_OFFSET UNITYSDK_OFFSET(0x954B7C0)
#define NEXON_PUB_NXPATCHERCONFIG_GETCHECKVERSIONRESULTONRESULTDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B7E0)
#define NEXON_PUB_NXPATCHERCONFIG_GETCHECKVERSIONRESULTONPROGRESSDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B7F0)
#define NEXON_PUB_NXPATCHERCONFIG_GETCHECKVERSIONRESULTONERRORDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B800)
#define NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONPROGRESSDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B810)
#define NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONDOWNLOADEDDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B820)
#define NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONCOMPLETEDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B830)
#define NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONSTOPDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B840)
#define NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONERRORDELEGATE_OFFSET UNITYSDK_OFFSET(0x954B850)
#define NEXON_PUB_NXPATCHERCONFIG_GETINITRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x954B860)
#define NEXON_PUB_NXPATCHERCONFIG_SETINITRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x954B870)
#define NEXON_PUB_NXPATCHERCONFIG_GETCHECKBUILDRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x954B890)
#define NEXON_PUB_NXPATCHERCONFIG_SETCHECKBUILDRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x954B8A0)
#define NEXON_PUB_NXPATCHERCONFIG_GETCHECKRESOURCERESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x954B8C0)
#define NEXON_PUB_NXPATCHERCONFIG_SETCHECKRESOURCERESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x954B8D0)
#define NEXON_PUB_NXPATCHERCONFIG_GETCHECKRESOURCEPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x954B8F0)
#define NEXON_PUB_NXPATCHERCONFIG_SETCHECKRESOURCEPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x954B900)
#define NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x954B920)
#define NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADPROGRESSHANDLER_OFFSET UNITYSDK_OFFSET(0x954B930)
#define NEXON_PUB_NXPATCHERCONFIG_GETFILEDOWNLOADEDHANDLER_OFFSET UNITYSDK_OFFSET(0x954B950)
#define NEXON_PUB_NXPATCHERCONFIG_SETFILEDOWNLOADEDHANDLER_OFFSET UNITYSDK_OFFSET(0x954B960)
#define NEXON_PUB_NXPATCHERCONFIG_GETCOMPLETEHANDLER_OFFSET UNITYSDK_OFFSET(0x954B980)
#define NEXON_PUB_NXPATCHERCONFIG_SETCOMPLETEHANDLER_OFFSET UNITYSDK_OFFSET(0x954B990)
#define NEXON_PUB_NXPATCHERCONFIG_SETCHECKPATCHVERSIONRESULTHANDLER_OFFSET UNITYSDK_OFFSET(0x954B9B0)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherConfig_TypeDefinitionIndex = 37534;

	class NXPatcherConfig : public Il2CppObject
	{
	public:
		::System::String* fileRoot; // 0x10
		::System::String* packageName; // 0x18
		::System::Int32 maxDownloadBackground; // 0x20
		::System::String* downloadContinueMessage; // 0x28
		::System::String* appId; // 0x30
		::System::Boolean useBackgroundTask; // 0x38
		::System::Boolean autoMoveToMarket; // 0x39
		::System::Boolean allowsCellular; // 0x3A
		::System::Boolean debugMode; // 0x3B
		::System::Boolean dontDestroyOnLoad; // 0x3C
		::System::Int32 maxDownload; // 0x40
		::System::String* downloadCompletedMessage; // 0x48
		::System::String* downloadProgressMessage; // 0x50
		::System::String* downloadPausedMessage; // 0x58
		::System::String* downloadFailedMessage; // 0x60
		::System::String* assetBundleManifestFileName; // 0x68
		::System::String* language; // 0x70
		::System::String* textureFormat; // 0x78
		::System::Int32 qualityLevel; // 0x80
		::System::Single storageRate; // 0x84
		::System::Boolean useNewApi; // 0x88
		::System::String* marketUrl; // 0x90
		::System::String* advertisingId; // 0x98
		Il2CppObject* checkVersionResultOnResultDelegate; // 0xA0
		Il2CppObject* checkVersionResultOnProgressDelegate; // 0xA8
		Il2CppObject* checkVersionResultOnErrorDelegate; // 0xB0
		Il2CppObject* downloadResultOnProgressDelegate; // 0xB8
		Il2CppObject* downloadResultOnDownloadedDelegate; // 0xC0
		Il2CppObject* downloadResultOnCompleteDelegate; // 0xC8
		::System::Action* downloadResultOnStopDelegate; // 0xD0
		Il2CppObject* downloadResultOnErrorDelegate; // 0xD8
		Il2CppObject* getAssetBundleResultOnProgressDelegate; // 0xE0
		Il2CppObject* getAssetBundleResultOnErrorDelegate; // 0xE8
		Il2CppObject* getAssetBundleResultOnCompleteDelegate; // 0xF0
		Il2CppObject* initResultHandler; // 0xF8
		Il2CppObject* checkBuildResultHandler; // 0x100
		Il2CppObject* checkResourceResultHandler; // 0x108
		Il2CppObject* checkResourceProgressHandler; // 0x110
		Il2CppObject* downloadProgressHandler; // 0x118
		Il2CppObject* fileDownloadedHandler; // 0x120
		Il2CppObject* completeHandler; // 0x128
		Il2CppObject* checkPatchVersionResultHandler; // 0x130
		Il2CppObject* validateResourceProgressHandler; // 0x138
		Il2CppObject* validateResourceResultHandler; // 0x140

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetAllowsCellular(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETALLOWSCELLULAR_OFFSET))(arg, nullptr);
		}

		::System::Void SetDebugMode(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETDEBUGMODE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDontDestroyOnLoad(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETDONTDESTROYONLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxDownload(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETMAXDOWNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxDownloadBackground(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETMAXDOWNLOADBACKGROUND_OFFSET))(arg, nullptr);
		}

		::System::Void SetDownloadCompletedMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADCOMPLETEDMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void SetDownloadContinueMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADCONTINUEMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void SetDownloadProgressMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADPROGRESSMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void SetDownloadFailedMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADFAILEDMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void SetAppId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETAPPID_OFFSET))(str, nullptr);
		}

		::System::Void SetPackageName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETPACKAGENAME_OFFSET))(str, nullptr);
		}

		::System::Void SetAutoMoveToMarket(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETAUTOMOVETOMARKET_OFFSET))(arg, nullptr);
		}

		::System::Void SetStorageRate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETSTORAGERATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetAdvertisingId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETADVERTISINGID_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetCheckVersionResultOnResultDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETCHECKVERSIONRESULTONRESULTDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCheckVersionResultOnProgressDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETCHECKVERSIONRESULTONPROGRESSDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetCheckVersionResultOnErrorDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETCHECKVERSIONRESULTONERRORDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDownloadResultOnProgressDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONPROGRESSDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDownloadResultOnDownloadedDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONDOWNLOADEDDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDownloadResultOnCompleteDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONCOMPLETEDELEGATE_OFFSET))(nullptr);
		}

		::System::Action* GetDownloadResultOnStopDelegate()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONSTOPDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetDownloadResultOnErrorDelegate()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADRESULTONERRORDELEGATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetInitResultHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETINITRESULTHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetInitResultHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETINITRESULTHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCheckBuildResultHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETCHECKBUILDRESULTHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetCheckBuildResultHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETCHECKBUILDRESULTHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCheckResourceResultHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETCHECKRESOURCERESULTHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetCheckResourceResultHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETCHECKRESOURCERESULTHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCheckResourceProgressHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETCHECKRESOURCEPROGRESSHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetCheckResourceProgressHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETCHECKRESOURCEPROGRESSHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDownloadProgressHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETDOWNLOADPROGRESSHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetDownloadProgressHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETDOWNLOADPROGRESSHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFileDownloadedHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETFILEDOWNLOADEDHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetFileDownloadedHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETFILEDOWNLOADEDHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCompleteHandler()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_GETCOMPLETEHANDLER_OFFSET))(nullptr);
		}

		::System::Void SetCompleteHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETCOMPLETEHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Void SetCheckPatchVersionResultHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCONFIG_SETCHECKPATCHVERSIONRESULTHANDLER_OFFSET))(arg, nullptr);
		}

	};
}

