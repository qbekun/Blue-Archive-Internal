#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS298_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA7DD0)
#define <>C__DISPLAYCLASS298_0__BEGINSENDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x9AA7DE0)

	inline static constexpr unsigned int <>c__DisplayClass298_0_TypeDefinitionIndex = 29899;

	class <>c__DisplayClass298_0 : public Il2CppObject
	{
	public:
		::System::Int32 sent_so_far; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS298_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _BeginSendCallback_b__0(::System::IOAsyncResult* arg)
		{
			((::System::Void(*)(::System::IOAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS298_0__BEGINSENDCALLBACK_B__0_OFFSET))(arg, nullptr);
		}

	};

