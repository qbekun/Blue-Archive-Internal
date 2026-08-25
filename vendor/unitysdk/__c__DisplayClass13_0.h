#pragma once
#include "unitysdk.h"

namespace MX::Logic::Coroutine { class WaitForCoroutine; }
class CoroutineInfo;

#define <>C__DISPLAYCLASS13_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1424580)
#define <>C__DISPLAYCLASS13_0__LATEUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x1425160)

	inline static constexpr unsigned int <>c__DisplayClass13_0_TypeDefinitionIndex = 14822;

	class <>c__DisplayClass13_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Coroutine::WaitForCoroutine* wait; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS13_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _LateUpdate_b__1(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS13_0__LATEUPDATE_B__1_OFFSET))(arg, nullptr);
		}

	};

