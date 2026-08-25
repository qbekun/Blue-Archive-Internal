#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS45_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS45_0`1__LOADASYNCUNITASK_G__LOAD|0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS45_0`1__LOADASYNCUNITASK_G__GETOP|1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass45_0`1_TypeDefinitionIndex = 14958;

	class <>c__DisplayClass45_0`1 : public Il2CppObject
	{
	public:
		::System::String* addressKey; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS45_0`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* _LoadAsyncUniTask_g__Load|0(::System::Threading::CancellationToken* arg)
		{
			return ((Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS45_0`1__LOADASYNCUNITASK_G__LOAD|0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _LoadAsyncUniTask_g__GetOP|1()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS45_0`1__LOADASYNCUNITASK_G__GETOP|1_OFFSET))(nullptr);
		}

	};

