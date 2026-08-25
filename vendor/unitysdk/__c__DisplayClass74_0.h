#pragma once
#include "unitysdk.h"

class PlatformServiceNexon;
namespace NPA { class NXPToyWebResult; }

#define <>C__DISPLAYCLASS74_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xC65750)
#define <>C__DISPLAYCLASS74_0__OPENWEBVIEWTOY_B__0_OFFSET UNITYSDK_OFFSET(0xC6F6A0)
#define <>C__DISPLAYCLASS74_0__OPENWEBVIEWTOY_B__1_OFFSET UNITYSDK_OFFSET(0xC6F6F0)
#define <>C__DISPLAYCLASS74_0__OPENWEBVIEWTOY_B__2_OFFSET UNITYSDK_OFFSET(0xC6F740)

	inline static constexpr unsigned int <>c__DisplayClass74_0_TypeDefinitionIndex = 8982;

	class <>c__DisplayClass74_0 : public Il2CppObject
	{
	public:
		PlatformServiceNexon* __4__this; // 0x10
		::System::Action* callBackLoadingStart; // 0x18
		::System::Action* callBackFinishedLoading; // 0x20
		::System::Action* callBackError; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS74_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenWebViewToy_b__0(::NPA::NXPToyWebResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyWebResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS74_0__OPENWEBVIEWTOY_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenWebViewToy_b__1(::NPA::NXPToyWebResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyWebResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS74_0__OPENWEBVIEWTOY_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenWebViewToy_b__2(::NPA::NXPToyWebResult* arg)
		{
			((::System::Void(*)(::NPA::NXPToyWebResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS74_0__OPENWEBVIEWTOY_B__2_OFFSET))(arg, nullptr);
		}

	};

