#pragma once
#include "unitysdk.h"

namespace NPA::Push { class NXPToySendEventPushResultDelegate; }
namespace NPA::Push { class NXPToySendEventPushResult; }

#define <>C__DISPLAYCLASS352_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D5D690)
#define <>C__DISPLAYCLASS352_0__SENDNEXONLINKEVENTPUSH_G__ONCOMPLETE|0_OFFSET UNITYSDK_OFFSET(0x9D5F1A0)

	inline static constexpr unsigned int <>c__DisplayClass352_0_TypeDefinitionIndex = 26189;

	class <>c__DisplayClass352_0 : public Il2CppObject
	{
	public:
		::NPA::Push::NXPToySendEventPushResultDelegate* callback; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS352_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SendNexonLinkEventPush_g__OnComplete|0(::NPA::Push::NXPToySendEventPushResult* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToySendEventPushResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS352_0__SENDNEXONLINKEVENTPUSH_G__ONCOMPLETE|0_OFFSET))(arg, nullptr);
		}

	};

