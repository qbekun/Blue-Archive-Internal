#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class WebEventSeasonExcel; }

#define MX_DATA_WEBEVENTSEASONINFO_SET_WEBEVENTURL_OFFSET UNITYSDK_OFFSET(0x1913110)
#define MX_DATA_WEBEVENTSEASONINFO_SET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x1913120)
#define MX_DATA_WEBEVENTSEASONINFO_SET_USEEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0x1913130)
#define MX_DATA_WEBEVENTSEASONINFO_GET_WEBEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1913140)
#define MX_DATA_WEBEVENTSEASONINFO_SET_POPUPTITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1913150)
#define MX_DATA_WEBEVENTSEASONINFO_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1913160)
#define MX_DATA_WEBEVENTSEASONINFO_GET_WEBEVENTURL_OFFSET UNITYSDK_OFFSET(0x1913170)
#define MX_DATA_WEBEVENTSEASONINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1913180)
#define MX_DATA_WEBEVENTSEASONINFO_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1913190)
#define MX_DATA_WEBEVENTSEASONINFO_SET_ISFULL_OFFSET UNITYSDK_OFFSET(0x19131A0)
#define MX_DATA_WEBEVENTSEASONINFO_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x19131B0)
#define MX_DATA_WEBEVENTSEASONINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x19131C0)
#define MX_DATA_WEBEVENTSEASONINFO_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x19131D0)
#define MX_DATA_WEBEVENTSEASONINFO_GET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x19131E0)
#define MX_DATA_WEBEVENTSEASONINFO_GET_POPUPTITLELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x19131F0)
#define MX_DATA_WEBEVENTSEASONINFO_GET_USEEXTERNALBROWSER_OFFSET UNITYSDK_OFFSET(0x1913200)
#define MX_DATA_WEBEVENTSEASONINFO_GET_LOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x1913210)
#define MX_DATA_WEBEVENTSEASONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1913220)
#define MX_DATA_WEBEVENTSEASONINFO_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x19134F0)
#define MX_DATA_WEBEVENTSEASONINFO_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1913500)
#define MX_DATA_WEBEVENTSEASONINFO_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1913510)
#define MX_DATA_WEBEVENTSEASONINFO_SET_WEBEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1913520)
#define MX_DATA_WEBEVENTSEASONINFO_SET_LOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x1913530)
#define MX_DATA_WEBEVENTSEASONINFO_ISOPENED_OFFSET UNITYSDK_OFFSET(0x1913540)

namespace MX::Data
{
	inline static constexpr unsigned int WebEventSeasonInfo_TypeDefinitionIndex = 16256;

	class WebEventSeasonInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Boolean _Enabled_k__BackingField; // 0x18
		::System::DateTime* _StartDate_k__BackingField; // 0x20
		::System::DateTime* _EndDate_k__BackingField; // 0x28
		::System::String* _LobbyBannerImage_k__BackingField; // 0x30
		::System::String* _PopupTitleLocalizeKey_k__BackingField; // 0x38
		::System::String* _WebEventUrl_k__BackingField; // 0x40
		::System::Boolean _IsFull_k__BackingField; // 0x48
		::System::Boolean _UseExternalBrowser_k__BackingField; // 0x49
		::System::Int64 _IconOrder_k__BackingField; // 0x50
		Il2CppObject* _WebEventIds_k__BackingField; // 0x58

		::System::Void set_WebEventUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_WEBEVENTURL_OFFSET))(str, nullptr);
		}

		::System::Void set_IconOrder(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_ICONORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseExternalBrowser(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_USEEXTERNALBROWSER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WebEventIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_WEBEVENTIDS_OFFSET))(nullptr);
		}

		::System::Void set_PopupTitleLocalizeKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_POPUPTITLELOCALIZEKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::String* get_WebEventUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_WEBEVENTURL_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_STARTDATE_OFFSET))(nullptr);
		}

		::System::Void set_IsFull(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_ISFULL_OFFSET))(arg, nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_IconOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_ICONORDER_OFFSET))(nullptr);
		}

		::System::String* get_PopupTitleLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_POPUPTITLELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_UseExternalBrowser()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_USEEXTERNALBROWSER_OFFSET))(nullptr);
		}

		::System::String* get_LobbyBannerImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_LOBBYBANNERIMAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WebEventSeasonExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::WebEventSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFull()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_GET_ISFULL_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_WebEventIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_WEBEVENTIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_LobbyBannerImage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_SET_LOBBYBANNERIMAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsOpened(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_WEBEVENTSEASONINFO_ISOPENED_OFFSET))(arg, nullptr);
		}

	};
}

