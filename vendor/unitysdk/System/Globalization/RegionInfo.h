#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENTREGION_OFFSET UNITYSDK_OFFSET(0x92C4920)
#define SYSTEM_GLOBALIZATION_REGIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C4BE0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C4D90)
#define SYSTEM_GLOBALIZATION_REGIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C4A00)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GETBYTERRITORY_OFFSET UNITYSDK_OFFSET(0x92C4CE0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_CONSTRUCT_INTERNAL_REGION_FROM_NAME_OFFSET UNITYSDK_OFFSET(0x92C4ED0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x92C4EE0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x92C4EF0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x92C4F00)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x92C4F10)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x92C4F20)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISMETRIC_OFFSET UNITYSDK_OFFSET(0x92C4F30)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISOCURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0x92C4FB0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_NATIVENAME_OFFSET UNITYSDK_OFFSET(0x92C4FC0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYNATIVENAME_OFFSET UNITYSDK_OFFSET(0x92C4FD0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x92C4FE0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERISOREGIONNAME_OFFSET UNITYSDK_OFFSET(0x92C4FF0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERWINDOWSREGIONNAME_OFFSET UNITYSDK_OFFSET(0x92C5000)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GET_TWOLETTERISOREGIONNAME_OFFSET UNITYSDK_OFFSET(0x92C5010)
#define SYSTEM_GLOBALIZATION_REGIONINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x92C5020)
#define SYSTEM_GLOBALIZATION_REGIONINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92C50C0)
#define SYSTEM_GLOBALIZATION_REGIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92C5100)
#define SYSTEM_GLOBALIZATION_REGIONINFO_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x92C5120)

namespace System::Globalization
{
	inline static constexpr unsigned int RegionInfo_TypeDefinitionIndex = 25018;

	class RegionInfo : public Il2CppObject
	{
	public:
		::System::Globalization::RegionInfo* currentRegion; // 0x0
		::System::Int32 regionId; // 0x10
		::System::String* iso2Name; // 0x18
		::System::String* iso3Name; // 0x20
		::System::String* win3Name; // 0x28
		::System::String* englishName; // 0x30
		::System::String* nativeName; // 0x38
		::System::String* currencySymbol; // 0x40
		::System::String* isoCurrencySymbol; // 0x48
		::System::String* currencyEnglishName; // 0x50
		::System::String* currencyNativeName; // 0x58

		::System::Globalization::RegionInfo* get_CurrentRegion()
		{
			return (return (::System::Globalization::RegionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENTREGION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetByTerritory(::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GETBYTERRITORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean construct_internal_region_from_name(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_CONSTRUCT_INTERNAL_REGION_FROM_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_CurrencyEnglishName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYENGLISHNAME_OFFSET))(nullptr);
		}

		::System::String* get_CurrencySymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYSYMBOL_OFFSET))(nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_EnglishName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_ENGLISHNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_GeoId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_GEOID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMetric()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISMETRIC_OFFSET))(nullptr);
		}

		::System::String* get_ISOCurrencySymbol()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_ISOCURRENCYSYMBOL_OFFSET))(nullptr);
		}

		::System::String* get_NativeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_NATIVENAME_OFFSET))(nullptr);
		}

		::System::String* get_CurrencyNativeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_CURRENCYNATIVENAME_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_ThreeLetterISORegionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERISOREGIONNAME_OFFSET))(nullptr);
		}

		::System::String* get_ThreeLetterWindowsRegionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_THREELETTERWINDOWSREGIONNAME_OFFSET))(nullptr);
		}

		::System::String* get_TwoLetterISORegionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GET_TWOLETTERISOREGIONNAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void ClearCachedData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_REGIONINFO_CLEARCACHEDDATA_OFFSET))(nullptr);
		}

	};
}

