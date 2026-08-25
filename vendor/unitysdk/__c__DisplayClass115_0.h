#pragma once
#include "unitysdk.h"

#define <>C__DISPLAYCLASS115_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x112D300)
#define <>C__DISPLAYCLASS115_0__FINDSTATEFFECTEXPIRABLE_B__0_OFFSET UNITYSDK_OFFSET(0x112D310)
#define <>C__DISPLAYCLASS115_0__FINDSTATEFFECTEXPIRABLE_B__1_OFFSET UNITYSDK_OFFSET(0x112D3E0)

	inline static constexpr unsigned int <>c__DisplayClass115_0_TypeDefinitionIndex = 13038;

	class <>c__DisplayClass115_0 : public Il2CppObject
	{
	public:
		::System::String* skillGroupId; // 0x10
		::System::String* logicEffectGroupId; // 0x18
		::System::Int32 dotIndex; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS115_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindStatEffectExpirable_b__0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS115_0__FINDSTATEFFECTEXPIRABLE_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FindStatEffectExpirable_b__1(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS115_0__FINDSTATEFFECTEXPIRABLE_B__1_OFFSET))(arg, nullptr);
		}

	};

