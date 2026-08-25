#pragma once
#include "unitysdk.h"

class CoroutineInfo;

#define <>C__DISPLAYCLASS14_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423E30)
#define <>C__DISPLAYCLASS14_0__STARTCOROUTINE_B__0_OFFSET UNITYSDK_OFFSET(0x1425190)
#define <>C__DISPLAYCLASS14_0__STARTCOROUTINE_B__1_OFFSET UNITYSDK_OFFSET(0x14251B0)

	inline static constexpr unsigned int <>c__DisplayClass14_0_TypeDefinitionIndex = 14823;

	class <>c__DisplayClass14_0 : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* enumerator; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _StartCoroutine_b__0(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_0__STARTCOROUTINE_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _StartCoroutine_b__1(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS14_0__STARTCOROUTINE_B__1_OFFSET))(arg, nullptr);
		}

	};

