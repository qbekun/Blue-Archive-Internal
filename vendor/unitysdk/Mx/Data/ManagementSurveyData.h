#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class PopupType; }

#define MX_DATA_MANAGEMENTSURVEYDATA_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x18540F0)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1854100)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_URL_OFFSET UNITYSDK_OFFSET(0x1854110)
#define MX_DATA_MANAGEMENTSURVEYDATA_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1854120)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1854130)
#define MX_DATA_MANAGEMENTSURVEYDATA_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1854140)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1854150)
#define MX_DATA_MANAGEMENTSURVEYDATA_SET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1854160)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_SURVEYID_OFFSET UNITYSDK_OFFSET(0x1854170)
#define MX_DATA_MANAGEMENTSURVEYDATA_SET_NOTIFYURL_OFFSET UNITYSDK_OFFSET(0x1854180)
#define MX_DATA_MANAGEMENTSURVEYDATA_SET_SURVEYID_OFFSET UNITYSDK_OFFSET(0x1854190)
#define MX_DATA_MANAGEMENTSURVEYDATA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x18541A0)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x18541B0)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_NOTIFYURL_OFFSET UNITYSDK_OFFSET(0x18541C0)
#define MX_DATA_MANAGEMENTSURVEYDATA_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18541D0)
#define MX_DATA_MANAGEMENTSURVEYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18541E0)
#define MX_DATA_MANAGEMENTSURVEYDATA_SET_URL_OFFSET UNITYSDK_OFFSET(0x18541F0)

namespace MX::Data
{
	inline static constexpr unsigned int ManagementSurveyData_TypeDefinitionIndex = 15863;

	class ManagementSurveyData : public Il2CppObject
	{
	public:
		::System::Int32 _SurveyId_k__BackingField; // 0x10
		::MX::Data::PopupType* _PopupType_k__BackingField; // 0x14
		::System::DateTime* _StartDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20
		::System::String* _FileName_k__BackingField; // 0x28
		::System::String* _Url_k__BackingField; // 0x30
		::System::String* _Text_k__BackingField; // 0x38
		::System::String* _NotifyUrl_k__BackingField; // 0x40

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::MX::Data::PopupType* get_PopupType()
		{
			return (return (::MX::Data::PopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_POPUPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_PopupType(::MX::Data::PopupType* arg)
		{
			((::System::Void(*)(::MX::Data::PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_POPUPTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SurveyId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_SURVEYID_OFFSET))(nullptr);
		}

		::System::Void set_NotifyUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_NOTIFYURL_OFFSET))(str, nullptr);
		}

		::System::Void set_SurveyId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_SURVEYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_FILENAME_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::String* get_NotifyUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_NOTIFYURL_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTSURVEYDATA_SET_URL_OFFSET))(str, nullptr);
		}

	};
}

