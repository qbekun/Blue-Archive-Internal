#pragma once
#include "unitysdk.h"

namespace NPA::Push { class NXPToySendEventPushResultDelegate; }
namespace NPA::Push { class NXPToySendEventPushResult; }

#define <>C__DISPLAYCLASS243_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D76BB0)
#define <>C__DISPLAYCLASS243_0__SENDEVENTPUSH_G__ONRESULT|0_OFFSET UNITYSDK_OFFSET(0x9D7CCC0)

	inline static constexpr unsigned int <>c__DisplayClass243_0_TypeDefinitionIndex = 26242;

	class <>c__DisplayClass243_0 : public Il2CppObject
	{
	public:
		::NPA::Push::NXPToySendEventPushResultDelegate* callback; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS243_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SendEventPush_g__OnResult|0(::NPA::Push::NXPToySendEventPushResult* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToySendEventPushResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS243_0__SENDEVENTPUSH_G__ONRESULT|0_OFFSET))(arg, nullptr);
		}

	};

