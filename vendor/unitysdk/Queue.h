#pragma once
#include "unitysdk.h"

#define QUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A535A0)
#define QUEUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9A535C0)
#define QUEUE_CREATETIMER_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Queue_TypeDefinitionIndex = 29717;

	class Queue : public Il2CppObject
	{
	public:
		::System::Int32 m_DurationMilliseconds; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + QUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUE_GET_DURATION_OFFSET))(nullptr);
		}

		Timer* CreateTimer(Callback* arg, ::System::Object* arg)
		{
			return (return (Timer*(*)(Callback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUE_CREATETIMER_OFFSET))(arg, arg, nullptr);
		}

	};

