#pragma once
#include "unitysdk.h"

#define TIMERCOMPARER_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET UNITYSDK_OFFSET(0x93ECF20)
#define TIMERCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x93ECFE0)

	inline static constexpr unsigned int TimerComparer_TypeDefinitionIndex = 24124;

	class TimerComparer : public Il2CppObject
	{
	public:
		::System::Int32 System.Collections.IComparer.Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERCOMPARER_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::Threading::Timer* arg, ::System::Threading::Timer* arg)
		{
			return (return (::System::Int32(*)(::System::Threading::Timer*, ::System::Threading::Timer*, ::PVOID))((::PBYTE)hIl2Cpp + TIMERCOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};

