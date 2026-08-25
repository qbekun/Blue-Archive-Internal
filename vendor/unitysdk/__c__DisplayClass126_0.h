#pragma once
#include "unitysdk.h"

class UIManager;
namespace UnityEngine { class GameObject; }

#define <>C__DISPLAYCLASS126_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x268D290)
#define <>C__DISPLAYCLASS126_0__LOAD_B__0_OFFSET UNITYSDK_OFFSET(0x2693910)

	inline static constexpr unsigned int <>c__DisplayClass126_0_TypeDefinitionIndex = 6787;

	class <>c__DisplayClass126_0 : public Il2CppObject
	{
	public:
		UIManager* __4__this; // 0x10
		::System::String* uiName; // 0x18
		::System::Action* completedCallback; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS126_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Load_b__0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS126_0__LOAD_B__0_OFFSET))(arg, nullptr);
		}

	};

