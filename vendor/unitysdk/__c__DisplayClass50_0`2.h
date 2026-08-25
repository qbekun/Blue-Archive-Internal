#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define <>C__DISPLAYCLASS50_0`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_B__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_B__1_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_G__LOAD|2_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_G__GETOP|4_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass50_0`2_TypeDefinitionIndex = 14963;

	class <>c__DisplayClass50_0`2 : public Il2CppObject
	{
	public:
		Il2CppObject* callback; // 0x0
		Il2CppObject* key; // 0x0
		::System::String* addressKey; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS50_0`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadAsyncWithKey_b__0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadAsyncWithKey_b__1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_B__1_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadAsyncWithKey_g__Load|2(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_G__LOAD|2_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _LoadAsyncWithKey_g__GetOP|4()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS50_0`2__LOADASYNCWITHKEY_G__GETOP|4_OFFSET))(nullptr);
		}

	};

