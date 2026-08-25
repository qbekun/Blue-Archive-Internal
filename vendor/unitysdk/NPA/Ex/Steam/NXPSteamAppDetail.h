#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_APPID_OFFSET UNITYSDK_OFFSET(0x9D2BF70)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_APPID_OFFSET UNITYSDK_OFFSET(0x9D2BF80)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9D2BF90)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9D2BFA0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x9D2BFB0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_SUCCESS_OFFSET UNITYSDK_OFFSET(0x9D2BFC0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9D2BFD0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9D2BFE0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9D2BFF0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9D2C000)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_ASSOCIATEDDOWNLOADABLECONTENT_OFFSET UNITYSDK_OFFSET(0x9D2C010)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_ASSOCIATEDDOWNLOADABLECONTENT_OFFSET UNITYSDK_OFFSET(0x9D2C020)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_FULLGAMEAPPID_OFFSET UNITYSDK_OFFSET(0x9D2C030)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_FULLGAMEAPPID_OFFSET UNITYSDK_OFFSET(0x9D2C040)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_FULLGAMENAME_OFFSET UNITYSDK_OFFSET(0x9D2C050)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_FULLGAMENAME_OFFSET UNITYSDK_OFFSET(0x9D2C060)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICECURRENCY_OFFSET UNITYSDK_OFFSET(0x9D2C070)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICECURRENCY_OFFSET UNITYSDK_OFFSET(0x9D2C080)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEINITIAL_OFFSET UNITYSDK_OFFSET(0x9D2C090)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEINITIAL_OFFSET UNITYSDK_OFFSET(0x9D2C0A0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEFINAL_OFFSET UNITYSDK_OFFSET(0x9D2C0B0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEFINAL_OFFSET UNITYSDK_OFFSET(0x9D2C0C0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEDISCOUNTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9D2C0D0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEDISCOUNTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9D2C0E0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEINITIALFORMATTED_OFFSET UNITYSDK_OFFSET(0x9D2C0F0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEINITIALFORMATTED_OFFSET UNITYSDK_OFFSET(0x9D2C100)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEFINALFORMATTED_OFFSET UNITYSDK_OFFSET(0x9D2C110)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEFINALFORMATTED_OFFSET UNITYSDK_OFFSET(0x9D2C120)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2C130)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D27080)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_LOAD_OFFSET UNITYSDK_OFFSET(0x9D271D0)
#define NPA_EX_STEAM_NXPSTEAMAPPDETAIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D27CA0)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamAppDetail_TypeDefinitionIndex = 26052;

	class NXPSteamAppDetail : public Il2CppObject
	{
	public:
		::System::String* _appId_k__BackingField; // 0x10
		::System::Boolean _isValid_k__BackingField; // 0x18
		::System::Boolean _success_k__BackingField; // 0x19
		::System::String* _type_k__BackingField; // 0x20
		::System::String* _name_k__BackingField; // 0x28
		Il2CppObject* _associatedDownloadableContent_k__BackingField; // 0x30
		::System::String* _fullGameAppId_k__BackingField; // 0x38
		::System::String* _fullGameName_k__BackingField; // 0x40
		::System::String* _priceCurrency_k__BackingField; // 0x48
		::System::UInt32 _priceInitial_k__BackingField; // 0x50
		::System::UInt32 _priceFinal_k__BackingField; // 0x54
		::System::UInt32 _priceDiscountPercentage_k__BackingField; // 0x58
		::System::String* _priceInitialFormatted_k__BackingField; // 0x60
		::System::String* _priceFinalFormatted_k__BackingField; // 0x68

		::System::String* get_appId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_APPID_OFFSET))(nullptr);
		}

		::System::Void set_appId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_APPID_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_isValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_success()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_SUCCESS_OFFSET))(nullptr);
		}

		::System::Void set_success(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_SUCCESS_OFFSET))(arg, nullptr);
		}

		::System::String* get_type()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_type(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_TYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_NAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_associatedDownloadableContent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_ASSOCIATEDDOWNLOADABLECONTENT_OFFSET))(nullptr);
		}

		::System::Void set_associatedDownloadableContent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_ASSOCIATEDDOWNLOADABLECONTENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_fullGameAppId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_FULLGAMEAPPID_OFFSET))(nullptr);
		}

		::System::Void set_fullGameAppId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_FULLGAMEAPPID_OFFSET))(str, nullptr);
		}

		::System::String* get_fullGameName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_FULLGAMENAME_OFFSET))(nullptr);
		}

		::System::Void set_fullGameName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_FULLGAMENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_priceCurrency()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICECURRENCY_OFFSET))(nullptr);
		}

		::System::Void set_priceCurrency(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICECURRENCY_OFFSET))(str, nullptr);
		}

		::System::UInt32 get_priceInitial()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEINITIAL_OFFSET))(nullptr);
		}

		::System::Void set_priceInitial(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEINITIAL_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_priceFinal()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEFINAL_OFFSET))(nullptr);
		}

		::System::Void set_priceFinal(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEFINAL_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_priceDiscountPercentage()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEDISCOUNTPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Void set_priceDiscountPercentage(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEDISCOUNTPERCENTAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_priceInitialFormatted()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEINITIALFORMATTED_OFFSET))(nullptr);
		}

		::System::Void set_priceInitialFormatted(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEINITIALFORMATTED_OFFSET))(str, nullptr);
		}

		::System::String* get_priceFinalFormatted()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_GET_PRICEFINALFORMATTED_OFFSET))(nullptr);
		}

		::System::Void set_priceFinalFormatted(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_SET_PRICEFINALFORMATTED_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_LOAD_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMAPPDETAIL_TOSTRING_OFFSET))(nullptr);
		}

	};
}

