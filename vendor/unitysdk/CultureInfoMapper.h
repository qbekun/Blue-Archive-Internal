#pragma once
#include "unitysdk.h"

#define CULTUREINFOMAPPER_CREATEMAP_OFFSET UNITYSDK_OFFSET(0x9B27B50)
#define CULTUREINFOMAPPER_GETCULTUREINFONAME_OFFSET UNITYSDK_OFFSET(0x9B27200)
#define CULTUREINFOMAPPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B2B490)

	inline static constexpr unsigned int CultureInfoMapper_TypeDefinitionIndex = 29366;

	class CultureInfoMapper : public Il2CppObject
	{
	public:
		Il2CppObject* s_cultureInfoNameMap; // 0x0

		Il2CppObject* CreateMap()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CULTUREINFOMAPPER_CREATEMAP_OFFSET))(nullptr);
		}

		::System::String* GetCultureInfoName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CULTUREINFOMAPPER_GETCULTUREINFONAME_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CULTUREINFOMAPPER_.CCTOR_OFFSET))(nullptr);
		}

	};

