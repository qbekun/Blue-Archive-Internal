#pragma once
#include "../unitysdk.h"

#define NPA_NXLOCALE_GETCOUNTRYCODENUMBER_OFFSET UNITYSDK_OFFSET(0x9CDE340)
#define NPA_NXLOCALE_GETCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9CDE360)
#define NPA_NXLOCALE_GETLOCALECODENUMBER_OFFSET UNITYSDK_OFFSET(0x9CDFC30)
#define NPA_NXLOCALE_GETLOCALECODE_OFFSET UNITYSDK_OFFSET(0x9CDFC40)
#define NPA_NXLOCALE_GETCOUNTRYFROMCODENUMBER_OFFSET UNITYSDK_OFFSET(0x9CE0BF0)
#define NPA_NXLOCALE_GETLOCALEFROMCODENUMBER_OFFSET UNITYSDK_OFFSET(0x9CE1B10)
#define NPA_NXLOCALE_GETCOUNTRYCODE_OFFSET UNITYSDK_OFFSET(0x9CE1B20)
#define NPA_NXLOCALE_GETLOCALECODE_OFFSET UNITYSDK_OFFSET(0x9CE4560)

namespace NPA
{
	inline static constexpr unsigned int NXLocale_TypeDefinitionIndex = 25780;

	class NXLocale : public Il2CppObject
	{
	public:
		::System::Int32 getCountryCodeNumber(COUNTRY* arg)
		{
			return (return (::System::Int32(*)(COUNTRY*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETCOUNTRYCODENUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* getCountryCode(COUNTRY* arg)
		{
			return (return (::System::String*(*)(COUNTRY*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETCOUNTRYCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 getLocaleCodeNumber(LOCALE* arg)
		{
			return (return (::System::Int32(*)(LOCALE*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETLOCALECODENUMBER_OFFSET))(arg, nullptr);
		}

		::System::String* getLocaleCode(LOCALE* arg)
		{
			return (return (::System::String*(*)(LOCALE*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETLOCALECODE_OFFSET))(arg, nullptr);
		}

		COUNTRY* getCountryFromCodeNumber(::System::Int32 arg)
		{
			return (return (COUNTRY*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETCOUNTRYFROMCODENUMBER_OFFSET))(arg, nullptr);
		}

		LOCALE* getLocaleFromCodeNumber(::System::Int32 arg)
		{
			return (return (LOCALE*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETLOCALEFROMCODENUMBER_OFFSET))(arg, nullptr);
		}

		COUNTRY* getCountryCode(::System::String* str)
		{
			return (return (COUNTRY*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETCOUNTRYCODE_OFFSET))(str, nullptr);
		}

		LOCALE* getLocaleCode(::System::String* str)
		{
			return (return (LOCALE*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXLOCALE_GETLOCALECODE_OFFSET))(str, nullptr);
		}

	};
}

