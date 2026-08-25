#pragma once
#include "unitysdk.h"

#define INPUTBUFFER`1_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_SET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_GET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_SET_STATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_BUFFER_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_TRYENTERSTATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INPUTBUFFER`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int InputBuffer`1_TypeDefinitionIndex = 37780;

	class InputBuffer`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _StateMachine; // 0x0
		Il2CppObject* _State_k__BackingField; // 0x0
		::System::Single _TimeOut_k__BackingField; // 0x0

		Il2CppObject* get_StateMachine()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_GET_STATEMACHINE_OFFSET))(nullptr);
		}

		::System::Void set_StateMachine(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_SET_STATEMACHINE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_State()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_TimeOut()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_GET_TIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_TimeOut(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_SET_TIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Buffer(Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_BUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryEnterState()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_TRYENTERSTATE_OFFSET))(nullptr);
		}

		::System::Boolean Update()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean Update(::System::Single arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPUTBUFFER`1_CLEAR_OFFSET))(nullptr);
		}

	};

