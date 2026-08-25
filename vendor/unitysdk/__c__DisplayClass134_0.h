#pragma once
#include "unitysdk.h"

namespace NPA { class INPListener; }
namespace NPA::Social { class NXPToyAppLinkDataResult; }

#define <>C__DISPLAYCLASS134_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BD21E0)
#define <>C__DISPLAYCLASS134_0__FBFETCHDEFERREDAPPLINK_B__0_OFFSET UNITYSDK_OFFSET(0x9BD5D80)

	inline static constexpr unsigned int <>c__DisplayClass134_0_TypeDefinitionIndex = 25730;

	class <>c__DisplayClass134_0 : public Il2CppObject
	{
	public:
		::NPA::INPListener* listener; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS134_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _FBFetchDeferredAppLink_b__0(::NPA::Social::NXPToyAppLinkDataResult* arg)
		{
			((::System::Void(*)(::NPA::Social::NXPToyAppLinkDataResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS134_0__FBFETCHDEFERREDAPPLINK_B__0_OFFSET))(arg, nullptr);
		}

	};

