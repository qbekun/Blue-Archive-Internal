#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class GuidePopupType; }
namespace MX::Data { class PopupType; }

#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1854200)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1854210)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1854220)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_SURVEYID_OFFSET UNITYSDK_OFFSET(0x1854230)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_URL_OFFSET UNITYSDK_OFFSET(0x1854240)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_NOTIFYURL_OFFSET UNITYSDK_OFFSET(0x1854250)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1854260)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_GOTOURL_OFFSET UNITYSDK_OFFSET(0x1854270)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1854280)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_URL_OFFSET UNITYSDK_OFFSET(0x1854290)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_NOTIFYURL_OFFSET UNITYSDK_OFFSET(0x18542A0)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x18542B0)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_POPUPOKTEXT_OFFSET UNITYSDK_OFFSET(0x18542C0)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x18542D0)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_POPUPTYPE_OFFSET UNITYSDK_OFFSET(0x18542E0)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x18542F0)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1854300)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_GUIDEPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x1854310)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1854320)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_SURVEYID_OFFSET UNITYSDK_OFFSET(0x1854330)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1854340)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1854350)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1854360)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_GOTOURL_OFFSET UNITYSDK_OFFSET(0x1854370)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_POPUPOKTEXT_OFFSET UNITYSDK_OFFSET(0x1854380)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1854390)
#define MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_GUIDEPOPUPTYPE_OFFSET UNITYSDK_OFFSET(0x18543A0)

namespace MX::Data
{
	inline static constexpr unsigned int ManagementGuidePopupData_TypeDefinitionIndex = 15865;

	class ManagementGuidePopupData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::MX::Data::GuidePopupType* _GuidePopupType_k__BackingField; // 0x18
		::MX::Data::PopupType* _PopupType_k__BackingField; // 0x1C
		::System::DateTime* _StartDate_k__BackingField; // 0x20
		::System::DateTime* _EndDate_k__BackingField; // 0x28
		::System::String* _FileName_k__BackingField; // 0x30
		::System::String* _Url_k__BackingField; // 0x38
		::System::String* _Message_k__BackingField; // 0x40
		::System::Int32 _SurveyId_k__BackingField; // 0x48
		::System::String* _NotifyUrl_k__BackingField; // 0x50
		::System::String* _GotoUrl_k__BackingField; // 0x58
		::System::Int32 _DisplayOrder_k__BackingField; // 0x60
		::System::String* _PopupOKText_k__BackingField; // 0x68

		::System::Void set_Message(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_MESSAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_FileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_FILENAME_OFFSET))(str, nullptr);
		}

		::MX::Data::PopupType* get_PopupType()
		{
			return (return (::MX::Data::PopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_POPUPTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_SurveyId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_SURVEYID_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_NotifyUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_NOTIFYURL_OFFSET))(str, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_GotoUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_GOTOURL_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_URL_OFFSET))(str, nullptr);
		}

		::System::String* get_NotifyUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_NOTIFYURL_OFFSET))(nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_PopupOKText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_POPUPOKTEXT_OFFSET))(str, nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Void set_PopupType(::MX::Data::PopupType* arg)
		{
			((::System::Void(*)(::MX::Data::PopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_POPUPTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_.CTOR_OFFSET))(nullptr);
		}

		::MX::Data::GuidePopupType* get_GuidePopupType()
		{
			return (return (::MX::Data::GuidePopupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_GUIDEPOPUPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_SurveyId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_SURVEYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DisplayOrder(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_GotoUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_GOTOURL_OFFSET))(nullptr);
		}

		::System::String* get_PopupOKText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_POPUPOKTEXT_OFFSET))(nullptr);
		}

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::Void set_GuidePopupType(::MX::Data::GuidePopupType* arg)
		{
			((::System::Void(*)(::MX::Data::GuidePopupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTGUIDEPOPUPDATA_SET_GUIDEPOPUPTYPE_OFFSET))(arg, nullptr);
		}

	};
}

