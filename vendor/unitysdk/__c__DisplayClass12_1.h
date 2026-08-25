#pragma once
#include "unitysdk.h"

namespace MX::Logic::Coroutine { class WaitForCoroutine; }
class CoroutineInfo;

#define <>C__DISPLAYCLASS12_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1424E70)
#define <>C__DISPLAYCLASS12_1__UPDATE_B__3_OFFSET UNITYSDK_OFFSET(0x1425080)

	inline static constexpr unsigned int <>c__DisplayClass12_1_TypeDefinitionIndex = 14820;

	class <>c__DisplayClass12_1 : public Il2CppObject
	{
	public:
		::MX::Logic::Coroutine::WaitForCoroutine* wait; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS12_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Update_b__3(CoroutineInfo* arg)
		{
			return ((::System::Boolean(*)(CoroutineInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS12_1__UPDATE_B__3_OFFSET))(arg, nullptr);
		}

	};

