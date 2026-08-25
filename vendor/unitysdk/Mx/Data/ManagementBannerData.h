#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentType; }
namespace MX::Data { class BannerDisplayType; }
namespace MX::Data { class BannerEventTagPosition; }
namespace MX::GameLogic::DBModel { class BannerDB; }

#define MX_DATA_MANAGEMENTBANNERDATA_SET_URL_OFFSET UNITYSDK_OFFSET(0x1853DA0)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_BANNERDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1853DB0)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_LINKEDLOBBYBANNERID_OFFSET UNITYSDK_OFFSET(0x1853DC0)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_WEBVIEWURL_OFFSET UNITYSDK_OFFSET(0x1853DD0)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1853DE0)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_LINKEDLOBBYBANNERID_OFFSET UNITYSDK_OFFSET(0x1853DF0)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_BANNERTYPE_OFFSET UNITYSDK_OFFSET(0x1853E00)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_WEBVIEWURL_OFFSET UNITYSDK_OFFSET(0x1853E10)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1853E20)
#define MX_DATA_MANAGEMENTBANNERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1853E30)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1853EF0)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_BANNEREVENTTAGPOSITION_OFFSET UNITYSDK_OFFSET(0x1853F00)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_BANNERDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1853F10)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_URL_OFFSET UNITYSDK_OFFSET(0x1853F20)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1853F30)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_BANNERTYPE_OFFSET UNITYSDK_OFFSET(0x1853F40)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1853F50)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_FILENAMES_OFFSET UNITYSDK_OFFSET(0x1853F60)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1853F70)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_BANNEREVENTTAGPOSITION_OFFSET UNITYSDK_OFFSET(0x1853F80)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_FILENAMES_OFFSET UNITYSDK_OFFSET(0x1853F90)
#define MX_DATA_MANAGEMENTBANNERDATA_SET_WEBVIEWTITLE_OFFSET UNITYSDK_OFFSET(0x1853FA0)
#define MX_DATA_MANAGEMENTBANNERDATA_GET_WEBVIEWTITLE_OFFSET UNITYSDK_OFFSET(0x1853FB0)

namespace MX::Data
{
	inline static constexpr unsigned int ManagementBannerData_TypeDefinitionIndex = 15856;

	class ManagementBannerData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::DateTime* _StartDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20
		::System::String* _Url_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _FileNames_k__BackingField; // 0x30
		::System::String* _WebViewTitle_k__BackingField; // 0x38
		::System::String* _WebViewUrl_k__BackingField; // 0x40
		::System::Int32 _LinkedLobbyBannerId_k__BackingField; // 0x48
		::FlatData::EventContentType* _BannerType_k__BackingField; // 0x4C
		::MX::Data::BannerDisplayType* _BannerDisplayType_k__BackingField; // 0x50
		::MX::Data::BannerEventTagPosition* _BannerEventTagPosition_k__BackingField; // 0x54

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_URL_OFFSET))(str, nullptr);
		}

		::System::Void set_BannerDisplayType(::MX::Data::BannerDisplayType* arg)
		{
			((::System::Void(*)(::MX::Data::BannerDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_BANNERDISPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LinkedLobbyBannerId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_LINKEDLOBBYBANNERID_OFFSET))(nullptr);
		}

		::System::Void set_WebViewUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_WEBVIEWURL_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_LinkedLobbyBannerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_LINKEDLOBBYBANNERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BannerType(::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_BANNERTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_WebViewUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_WEBVIEWURL_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::BannerDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::BannerDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BannerEventTagPosition(::MX::Data::BannerEventTagPosition* arg)
		{
			((::System::Void(*)(::MX::Data::BannerEventTagPosition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_BANNEREVENTTAGPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Data::BannerDisplayType* get_BannerDisplayType()
		{
			return (return (::MX::Data::BannerDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_BANNERDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_URL_OFFSET))(nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_STARTDATE_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_BannerType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_BANNERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FileNames(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_FILENAMES_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_ID_OFFSET))(nullptr);
		}

		::MX::Data::BannerEventTagPosition* get_BannerEventTagPosition()
		{
			return (return (::MX::Data::BannerEventTagPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_BANNEREVENTTAGPOSITION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FileNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_FILENAMES_OFFSET))(nullptr);
		}

		::System::Void set_WebViewTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_SET_WEBVIEWTITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_WebViewTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTBANNERDATA_GET_WEBVIEWTITLE_OFFSET))(nullptr);
		}

	};
}

