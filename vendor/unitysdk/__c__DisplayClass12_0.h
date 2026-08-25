#pragma once
#include "unitysdk.h"

namespace MX::Logic::Coroutine { class WaitForCoroutine; }
class CoroutineInfo;

#define <>C__DISPLAYCLASS12_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1424E60)
#define <>C__DISPLAYCLASS12_0__UPDATE_B__2_OFFSET UNITYSDK_OFFSET(0x1425050)

	inline static constexpr unsigned int <>c__DisplayClass12_0_TypeDefinitionIndex = 14819;

	class <>c__DisplayClass12_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Coroutine::WaitForCoroutine* waitFor; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS12_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Update_b__2(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS12_0__UPDATE_B__2_OFFSET))(arg, nullptr);
		}

	};

