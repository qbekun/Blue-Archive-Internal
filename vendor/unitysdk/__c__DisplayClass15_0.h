#pragma once
#include "unitysdk.h"

class CoroutineInfo;

#define <>C__DISPLAYCLASS15_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423E20)
#define <>C__DISPLAYCLASS15_0__STOPCOROUTINE_B__0_OFFSET UNITYSDK_OFFSET(0x14251D0)

	inline static constexpr unsigned int <>c__DisplayClass15_0_TypeDefinitionIndex = 14824;

	class <>c__DisplayClass15_0 : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* enumerator; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS15_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _StopCoroutine_b__0(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS15_0__STOPCOROUTINE_B__0_OFFSET))(arg, nullptr);
		}

	};

