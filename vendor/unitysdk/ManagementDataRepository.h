#pragma once
#include "unitysdk.h"

namespace MX::Data { class ManagementData; }
namespace MX::Data { class ManagementGuidePopupData; }
class ManagementDataRepository;

#define MANAGEMENTDATAREPOSITORY_DOWNLOADBANNERRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC29750)
#define MANAGEMENTDATAREPOSITORY_DOWNLOADCONTENTLOCKRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC29860)
#define MANAGEMENTDATAREPOSITORY_GETACTIVESURVEYGUIDEPOPUPDATA_OFFSET UNITYSDK_OFFSET(0xC29950)
#define MANAGEMENTDATAREPOSITORY_GETACTIVEGUIDEPOPUPDATALIST_OFFSET UNITYSDK_OFFSET(0xC29A70)
#define MANAGEMENTDATAREPOSITORY_DOWNLOADMANAGEMENTDATA_OFFSET UNITYSDK_OFFSET(0xC29CC0)
#define MANAGEMENTDATAREPOSITORY_SET_DATA_OFFSET UNITYSDK_OFFSET(0xC29D50)
#define MANAGEMENTDATAREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xC29D60)
#define MANAGEMENTDATAREPOSITORY_GET_DATA_OFFSET UNITYSDK_OFFSET(0xC29DD0)
#define MANAGEMENTDATAREPOSITORY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC29DE0)
#define MANAGEMENTDATAREPOSITORY_COMPLETEDOWNLOADMANAGEMENTDATA_OFFSET UNITYSDK_OFFSET(0xC298A0)

	inline static constexpr unsigned int ManagementDataRepository_TypeDefinitionIndex = 8909;

	class ManagementDataRepository : public Il2CppObject
	{
	public:
		::MX::Data::ManagementData* _Data_k__BackingField; // 0x10
		::System::Boolean WaitForDownloadManagementData; // 0x18

		::System::Void DownloadBannerResultCallback(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_DOWNLOADBANNERRESULTCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void DownloadContentLockResultCallback(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_DOWNLOADCONTENTLOCKRESULTCALLBACK_OFFSET))(arg, nullptr);
		}

		::MX::Data::ManagementGuidePopupData* GetActiveSurveyGuidePopupData()
		{
			return ((::MX::Data::ManagementGuidePopupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_GETACTIVESURVEYGUIDEPOPUPDATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetActiveGuidePopupDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_GETACTIVEGUIDEPOPUPDATALIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DownloadManagementData()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_DOWNLOADMANAGEMENTDATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::MX::Data::ManagementData* arg)
		{
			((::System::Void(*)(::MX::Data::ManagementData*, ::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_SET_DATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::ManagementData* get_Data()
		{
			return ((::MX::Data::ManagementData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_GET_DATA_OFFSET))(nullptr);
		}

		ManagementDataRepository* get_Instance()
		{
			return ((ManagementDataRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void CompleteDownloadManagementData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANAGEMENTDATAREPOSITORY_COMPLETEDOWNLOADMANAGEMENTDATA_OFFSET))(nullptr);
		}

	};

