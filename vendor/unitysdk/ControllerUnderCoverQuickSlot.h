#pragma once
#include "unitysdk.h"

namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Vector2; }

#define CONTROLLERUNDERCOVERQUICKSLOT_SET_OFFSET UNITYSDK_OFFSET(0xC82B10)
#define CONTROLLERUNDERCOVERQUICKSLOT_GET__POSS_OFFSET UNITYSDK_OFFSET(0xC82B40)
#define CONTROLLERUNDERCOVERQUICKSLOT__UNDERCOVERQUICKSLOTCOROUTINE_G__CHECK|16_0_OFFSET UNITYSDK_OFFSET(0xC82D30)
#define CONTROLLERUNDERCOVERQUICKSLOT_MOVEITEMSLOT_OFFSET UNITYSDK_OFFSET(0xC82D80)
#define CONTROLLERUNDERCOVERQUICKSLOT__UNDERCOVERQUICKSLOTCOROUTINE_B__16_1_OFFSET UNITYSDK_OFFSET(0xC82EF0)
#define CONTROLLERUNDERCOVERQUICKSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC82F00)
#define CONTROLLERUNDERCOVERQUICKSLOT_ISQUICKSLOTENDED_OFFSET UNITYSDK_OFFSET(0xC82F50)
#define CONTROLLERUNDERCOVERQUICKSLOT__UNDERCOVERQUICKSLOTCOROUTINE_B__16_2_OFFSET UNITYSDK_OFFSET(0xC83090)
#define CONTROLLERUNDERCOVERQUICKSLOT_UNDERCOVERQUICKSLOTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xC830A0)
#define CONTROLLERUNDERCOVERQUICKSLOT_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xC83130)

	inline static constexpr unsigned int ControllerUnderCoverQuickSlot_TypeDefinitionIndex = 9067;

	class ControllerUnderCoverQuickSlot : public Il2CppObject
	{
	public:
		::System::Boolean Active; // 0x10
		::System::Collections::IEnumerator* _underCoverQuickSlotCoroutine; // 0x18
		::UnityEngine::MonoBehaviour* _coroutineBody; // 0x20
		::System::Single _buttonIntervalSec; // 0x28
		::System::Single _clickTime; // 0x2C
		::UnityEngine::Vector2* _standardValues; // 0x30
		::Il2CppArray<::System::Object*>* _buttons; // 0x38
		::System::Int32 _index; // 0x40
		::System::Int32 _startIndex; // 0x44
		::System::Boolean _firstMove; // 0x48
		::System::Boolean _initialized; // 0x49

		::System::Void Set(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT_SET_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get__poss()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT_GET__POSS_OFFSET))(nullptr);
		}

		::System::Void _UnderCoverQuickSlotCoroutine_g__Check|16_0(::System::Boolean arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT__UNDERCOVERQUICKSLOTCOROUTINE_G__CHECK|16_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveItemSlot(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT_MOVEITEMSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void _UnderCoverQuickSlotCoroutine_b__16_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT__UNDERCOVERQUICKSLOTCOROUTINE_B__16_1_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::MonoBehaviour* arg)
		{
			((::System::Void(*)(::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsQuickSlotEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT_ISQUICKSLOTENDED_OFFSET))(nullptr);
		}

		::System::Void _UnderCoverQuickSlotCoroutine_b__16_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT__UNDERCOVERQUICKSLOTCOROUTINE_B__16_2_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* UnderCoverQuickSlotCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT_UNDERCOVERQUICKSLOTCOROUTINE_OFFSET))(nullptr);
		}

		::System::Void SetActive(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLLERUNDERCOVERQUICKSLOT_SETACTIVE_OFFSET))(arg, arg2, nullptr);
		}

	};

