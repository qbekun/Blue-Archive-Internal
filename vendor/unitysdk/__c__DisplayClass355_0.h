#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS355_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AA7E80)
#define <>C__DISPLAYCLASS355_0__QUEUEIOSELECTORJOB_B__0_OFFSET UNITYSDK_OFFSET(0x9AA7E90)

	inline static constexpr unsigned int <>c__DisplayClass355_0_TypeDefinitionIndex = 29900;

	class <>c__DisplayClass355_0 : public Il2CppObject
	{
	public:
		::System::Net::Sockets::Socket* __4__this; // 0x10
		::System::IOSelectorJob* job; // 0x18
		::System::Int32 handle; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS355_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _QueueIOSelectorJob_b__0(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS355_0__QUEUEIOSELECTORJOB_B__0_OFFSET))(arg, nullptr);
		}

	};

