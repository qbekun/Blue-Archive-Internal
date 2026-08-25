#pragma once
#include "unitysdk.h"

class PatchGroupType;
namespace Nexon::Pub { class Error; }
namespace Nexon::Pub { class BuildStatus; }
class NXPatcherDownloadData;
namespace Nexon::Pub { class PatchStatus; }
namespace Nexon::Pub { class DownloadInformation; }

#define NXPATCHERSERVICE_COTOTALDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC612E0)
#define NXPATCHERSERVICE_ONINITRESULT_OFFSET UNITYSDK_OFFSET(0xC61390)
#define NXPATCHERSERVICE_GETTARGETPATCHVERSION_OFFSET UNITYSDK_OFFSET(0xC617E0)
#define NXPATCHERSERVICE_ONFILEDOWNLOADED_OFFSET UNITYSDK_OFFSET(0xC618C0)
#define NXPATCHERSERVICE_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC618D0)
#define NXPATCHERSERVICE_ONCHECKBUILDRESULT_OFFSET UNITYSDK_OFFSET(0xC618E0)
#define NXPATCHERSERVICE_GETPATCHERDOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xC62070)
#define NXPATCHERSERVICE_SETERRORPOPUP_OFFSET UNITYSDK_OFFSET(0xC61530)
#define NXPATCHERSERVICE_COPREPAREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC62130)
#define NXPATCHERSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0xC621D0)
#define NXPATCHERSERVICE_ONCHECKRESOURCERESULT_OFFSET UNITYSDK_OFFSET(0xC62AB0)
#define NXPATCHERSERVICE_OPENPOPUPUI_OFFSET UNITYSDK_OFFSET(0xC61ED0)
#define NXPATCHERSERVICE_CODOWNLOAD_OFFSET UNITYSDK_OFFSET(0xC62D90)
#define NXPATCHERSERVICE_CHECKRESOURCE_OFFSET UNITYSDK_OFFSET(0xC62E30)
#define NXPATCHERSERVICE_ONDOWNLOADPROGRESS_OFFSET UNITYSDK_OFFSET(0xC62FA0)
#define NXPATCHERSERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xC63190)
#define NXPATCHERSERVICE_CHECKBUILD_OFFSET UNITYSDK_OFFSET(0xC61520)
#define NXPATCHERSERVICE_ONCHECKRESOURCEPROGRESS_OFFSET UNITYSDK_OFFSET(0xC632B0)
#define NXPATCHERSERVICE_GETTOTALDOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0xC63470)
#define NXPATCHERSERVICE_MOVETOMARKET_OFFSET UNITYSDK_OFFSET(0xC63610)
#define NXPATCHERSERVICE_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xC63620)
#define NXPATCHERSERVICE_ISAUTOMOVETOMARKETMODE_OFFSET UNITYSDK_OFFSET(0xC61EB0)

	inline static constexpr unsigned int NXPatcherService_TypeDefinitionIndex = 8965;

	class NXPatcherService : public Il2CppObject
	{
	public:
		::System::Boolean IsLatestBuild; // 0x0
		PatchGroupType* CurGroupType; // 0x4
		Il2CppObject* downloadDataList; // 0x8
		Il2CppObject* OnVerifyAction; // 0x10
		Il2CppObject* OnDownloadAction; // 0x18
		::System::Int64 TargetPatchVersion; // 0x20

		::System::Collections::IEnumerator* CoTotalDownload(PatchGroupType* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(PatchGroupType*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_COTOTALDOWNLOAD_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnInitResult(::System::Boolean arg, ::Nexon::Pub::Error* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ONINITRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetTargetPatchVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_GETTARGETPATCHVERSION_OFFSET))(nullptr);
		}

		::System::Void OnFileDownloaded(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ONFILEDOWNLOADED_OFFSET))(str, str2, nullptr);
		}

		::System::Void StartDownload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_STARTDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void OnCheckBuildResult(::Nexon::Pub::BuildStatus* arg, ::Nexon::Pub::Error* arg2)
		{
			((::System::Void(*)(::Nexon::Pub::BuildStatus*, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ONCHECKBUILDRESULT_OFFSET))(arg, arg2, nullptr);
		}

		NXPatcherDownloadData* GetPatcherDownloadData(PatchGroupType* arg)
		{
			return ((NXPatcherDownloadData*(*)(PatchGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_GETPATCHERDOWNLOADDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetErrorPopup(::System::Int32 arg, ::System::String* str, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_SETERRORPOPUP_OFFSET))(arg, str, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* CoPrepareDownload(PatchGroupType* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(PatchGroupType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_COPREPAREDOWNLOAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_INIT_OFFSET))(nullptr);
		}

		::System::Void OnCheckResourceResult(::Nexon::Pub::PatchStatus* arg, ::Nexon::Pub::DownloadInformation* arg2, ::Nexon::Pub::Error* arg3)
		{
			((::System::Void(*)(::Nexon::Pub::PatchStatus*, ::Nexon::Pub::DownloadInformation*, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ONCHECKRESOURCERESULT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenPopupUI(::System::String* str, ::System::String* str2, ::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_OPENPOPUPUI_OFFSET))(str, str2, arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoDownload(PatchGroupType* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(PatchGroupType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_CODOWNLOAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckResource(PatchGroupType* arg)
		{
			((::System::Void(*)(PatchGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_CHECKRESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void OnDownloadProgress(::Nexon::Pub::DownloadInformation* arg)
		{
			((::System::Void(*)(::Nexon::Pub::DownloadInformation*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ONDOWNLOADPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void CheckBuild()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_CHECKBUILD_OFFSET))(nullptr);
		}

		::System::Void OnCheckResourceProgress(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ONCHECKRESOURCEPROGRESS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetTotalDownloadSize(PatchGroupType* arg)
		{
			return ((::System::Int64(*)(PatchGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_GETTOTALDOWNLOADSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveToMarket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_MOVETOMARKET_OFFSET))(nullptr);
		}

		::System::Void OnComplete(Il2CppObject* arg, ::System::Int32 arg2, ::Nexon::Pub::Error* arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::Nexon::Pub::Error*, ::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ONCOMPLETE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsAutoMoveToMarketMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NXPATCHERSERVICE_ISAUTOMOVETOMARKETMODE_OFFSET))(nullptr);
		}

	};

