#pragma once
#include "unitysdk.h"

class FurnitureCharacterTouchRouter;
class CafeCharacter;
namespace UnityEngine { class CapsuleCollider; }

#define <>C__DISPLAYCLASS120_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x19B11D0)
#define <>C__DISPLAYCLASS120_0__SETFLOATER_G__YIELDSETFLOATER|0_OFFSET UNITYSDK_OFFSET(0x19B11E0)
#define <>C__DISPLAYCLASS120_0__SETFLOATER_B__1_OFFSET UNITYSDK_OFFSET(0x19B24C0)

	inline static constexpr unsigned int <>c__DisplayClass120_0_TypeDefinitionIndex = 1338;

	class <>c__DisplayClass120_0 : public Il2CppObject
	{
	public:
		FurnitureCharacterTouchRouter* touchRouter; // 0x10
		CafeCharacter* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS120_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _SetFloater_g__YieldSetFloater|0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS120_0__SETFLOATER_G__YIELDSETFLOATER|0_OFFSET))(nullptr);
		}

		::System::Void _SetFloater_b__1(::UnityEngine::CapsuleCollider* arg)
		{
			((::System::Void(*)(::UnityEngine::CapsuleCollider*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS120_0__SETFLOATER_B__1_OFFSET))(arg, nullptr);
		}

	};

