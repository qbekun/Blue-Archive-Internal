#pragma once
#include "unitysdk.h"

namespace NPA::Push { class NXPToySendEventPushResultDelegate; }
namespace NPA::Push { class NXPToySendEventPushResult; }

#define <>C__DISPLAYCLASS351_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D5D580)
#define <>C__DISPLAYCLASS351_0__SENDEVENTPUSH_G__ONCOMPLETE|0_OFFSET UNITYSDK_OFFSET(0x9D5F180)

	inline static constexpr unsigned int <>c__DisplayClass351_0_TypeDefinitionIndex = 26188;

	class <>c__DisplayClass351_0 : public Il2CppObject
	{
	public:
		::NPA::Push::NXPToySendEventPushResultDelegate* callback; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS351_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SendEventPush_g__OnComplete|0(::NPA::Push::NXPToySendEventPushResult* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToySendEventPushResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS351_0__SENDEVENTPUSH_G__ONCOMPLETE|0_OFFSET))(arg, nullptr);
		}

	};

