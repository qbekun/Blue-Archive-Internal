#pragma once
#include "unitysdk.h"

namespace NPA::Push { class NXPToySendEventPushResultDelegate; }
namespace NPA::Push { class NXPToySendEventPushResult; }

#define <>C__DISPLAYCLASS246_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D76F90)
#define <>C__DISPLAYCLASS246_0__SENDNEXONLINKEVENTPUSH_G__ONRESULT|0_OFFSET UNITYSDK_OFFSET(0x9D7CCE0)

	inline static constexpr unsigned int <>c__DisplayClass246_0_TypeDefinitionIndex = 26243;

	class <>c__DisplayClass246_0 : public Il2CppObject
	{
	public:
		::NPA::Push::NXPToySendEventPushResultDelegate* callback; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS246_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SendNexonLinkEventPush_g__OnResult|0(::NPA::Push::NXPToySendEventPushResult* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToySendEventPushResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS246_0__SENDNEXONLINKEVENTPUSH_G__ONRESULT|0_OFFSET))(arg, nullptr);
		}

	};

