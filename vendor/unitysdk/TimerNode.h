#pragma once
#include "unitysdk.h"

#define TIMERNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A53AC0)
#define TIMERNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A53770)
#define TIMERNODE_GET_HASEXPIRED_OFFSET UNITYSDK_OFFSET(0x9A53F50)
#define TIMERNODE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x9A53F60)
#define TIMERNODE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x9A53F70)
#define TIMERNODE_GET_PREV_OFFSET UNITYSDK_OFFSET(0x9A53F80)
#define TIMERNODE_SET_PREV_OFFSET UNITYSDK_OFFSET(0x9A53F90)
#define TIMERNODE_CANCEL_OFFSET UNITYSDK_OFFSET(0x9A53FA0)
#define TIMERNODE_FIRE_OFFSET UNITYSDK_OFFSET(0x9A53B40)

	inline static constexpr unsigned int TimerNode_TypeDefinitionIndex = 29723;

	class TimerNode : public Il2CppObject
	{
	public:
		TimerState* m_TimerState; // 0x18
		Callback* m_Callback; // 0x20
		::System::Object* m_Context; // 0x28
		::System::Object* m_QueueLock; // 0x30
		TimerNode* next; // 0x38
		TimerNode* prev; // 0x40

		::System::Void .ctor(Callback* arg, ::System::Object* arg, ::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(Callback*, ::System::Object*, ::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_HasExpired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_GET_HASEXPIRED_OFFSET))(nullptr);
		}

		TimerNode* get_Next()
		{
			return (return (TimerNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_GET_NEXT_OFFSET))(nullptr);
		}

		::System::Void set_Next(TimerNode* arg)
		{
			((::System::Void(*)(TimerNode*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_SET_NEXT_OFFSET))(arg, nullptr);
		}

		TimerNode* get_Prev()
		{
			return (return (TimerNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_GET_PREV_OFFSET))(nullptr);
		}

		::System::Void set_Prev(TimerNode* arg)
		{
			((::System::Void(*)(TimerNode*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_SET_PREV_OFFSET))(arg, nullptr);
		}

		::System::Boolean Cancel()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_CANCEL_OFFSET))(nullptr);
		}

		::System::Boolean Fire()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMERNODE_FIRE_OFFSET))(nullptr);
		}

	};

