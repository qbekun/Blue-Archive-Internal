#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }

#define <>C__DISPLAYCLASS49_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS49_0`1__LOADINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS49_0`1__LOADINTERNAL_G__LOAD|1_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS49_0`1__LOADINTERNAL_G__GETOP|3_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass49_0`1_TypeDefinitionIndex = 14961;

	class <>c__DisplayClass49_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* callback; // 0x0
		Il2CppObject* container; // 0x0
		::System::String* addressKey; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadInternal_b__0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_0`1__LOADINTERNAL_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _LoadInternal_g__Load|1(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_0`1__LOADINTERNAL_G__LOAD|1_OFFSET))(arg, nullptr);
		}

		Il2CppObject* _LoadInternal_g__GetOP|3()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_0`1__LOADINTERNAL_G__GETOP|3_OFFSET))(nullptr);
		}

	};

