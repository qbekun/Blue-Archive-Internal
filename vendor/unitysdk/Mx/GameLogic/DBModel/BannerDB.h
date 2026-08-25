#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }
namespace MX::Data { class BannerDisplayType; }
namespace MX::Data { class BannerEventTagPosition; }

#define MX_GAMELOGIC_DBMODEL_BANNERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE44D0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_WEBVIEWURL_OFFSET UNITYSDK_OFFSET(0xFE44E0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFE44F0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_URL_OFFSET UNITYSDK_OFFSET(0xFE4500)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_FILENAME_OFFSET UNITYSDK_OFFSET(0xFE4510)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0xFE4520)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xFE4530)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_LINKEDLOBBYBANNERID_OFFSET UNITYSDK_OFFSET(0xFE4540)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0xFE4550)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0xFE4560)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNERORDER_OFFSET UNITYSDK_OFFSET(0xFE4570)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNERDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xFE4580)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_WEBVIEWTITLE_OFFSET UNITYSDK_OFFSET(0xFE4590)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_LINKEDLOBBYBANNERID_OFFSET UNITYSDK_OFFSET(0xFE45A0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNERTYPE_OFFSET UNITYSDK_OFFSET(0xFE45B0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNEREVENTTAGPOSITION_OFFSET UNITYSDK_OFFSET(0xFE45C0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_WEBVIEWTITLE_OFFSET UNITYSDK_OFFSET(0xFE45D0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNERTYPE_OFFSET UNITYSDK_OFFSET(0xFE45E0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNERDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xFE45F0)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNEREVENTTAGPOSITION_OFFSET UNITYSDK_OFFSET(0xFE4600)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNERORDER_OFFSET UNITYSDK_OFFSET(0xFE4610)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_SET_URL_OFFSET UNITYSDK_OFFSET(0xFE4620)
#define MX_GAMELOGIC_DBMODEL_BANNERDB_GET_WEBVIEWURL_OFFSET UNITYSDK_OFFSET(0xFE4630)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int BannerDB_TypeDefinitionIndex = 12490;

	class BannerDB : public Il2CppObject
	{
	public:
		::System::Int64 _BannerOrder_k__BackingField; // 0x10
		::System::DateTime* _StartDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20
		::System::String* _Url_k__BackingField; // 0x28
		::System::String* _FileName_k__BackingField; // 0x30
		::System::String* _WebViewTitle_k__BackingField; // 0x38
		::System::String* _WebViewUrl_k__BackingField; // 0x40
		::System::Int32 _LinkedLobbyBannerId_k__BackingField; // 0x48
		::FlatData::EventContentType* _BannerType_k__BackingField; // 0x4C
		::MX::Data::BannerDisplayType* _BannerDisplayType_k__BackingField; // 0x50
		::MX::Data::BannerEventTagPosition* _BannerEventTagPosition_k__BackingField; // 0x54

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WebViewUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_WEBVIEWURL_OFFSET))(str, nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_FileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_FILENAME_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LinkedLobbyBannerId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_LINKEDLOBBYBANNERID_OFFSET))(nullptr);
		}

		::System::String* get_FileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_BannerOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNERORDER_OFFSET))(arg, nullptr);
		}

		::MX::Data::BannerDisplayType* get_BannerDisplayType()
		{
			return ((::MX::Data::BannerDisplayType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNERDISPLAYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_WebViewTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_WEBVIEWTITLE_OFFSET))(str, nullptr);
		}

		::System::Void set_LinkedLobbyBannerId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_LINKEDLOBBYBANNERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BannerType(::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNERTYPE_OFFSET))(arg, nullptr);
		}

		::MX::Data::BannerEventTagPosition* get_BannerEventTagPosition()
		{
			return ((::MX::Data::BannerEventTagPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNEREVENTTAGPOSITION_OFFSET))(nullptr);
		}

		::System::String* get_WebViewTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_WEBVIEWTITLE_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_BannerType()
		{
			return ((::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_BannerDisplayType(::MX::Data::BannerDisplayType* arg)
		{
			((::System::Void(*)(::MX::Data::BannerDisplayType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNERDISPLAYTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_BannerEventTagPosition(::MX::Data::BannerEventTagPosition* arg)
		{
			((::System::Void(*)(::MX::Data::BannerEventTagPosition*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_BANNEREVENTTAGPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BannerOrder()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_BANNERORDER_OFFSET))(nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_SET_URL_OFFSET))(str, nullptr);
		}

		::System::String* get_WebViewUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_BANNERDB_GET_WEBVIEWURL_OFFSET))(nullptr);
		}

	};
}

