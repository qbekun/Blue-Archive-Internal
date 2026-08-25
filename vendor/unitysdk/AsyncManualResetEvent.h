#pragma once
#include "unitysdk.h"

#define ASYNCMANUALRESETEVENT_WAITASYNC_OFFSET UNITYSDK_OFFSET(0x9A7CD90)
#define ASYNCMANUALRESETEVENT_SET_OFFSET UNITYSDK_OFFSET(0x9A7A440)
#define ASYNCMANUALRESETEVENT_RESET_OFFSET UNITYSDK_OFFSET(0x9A7AEF0)
#define ASYNCMANUALRESETEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A7A1C0)

	inline static constexpr unsigned int AsyncManualResetEvent_TypeDefinitionIndex = 29794;

	class AsyncManualResetEvent : public Il2CppObject
	{
	public:
		Il2CppObject* m_tcs; // 0x10

		Il2CppObject* WaitAsync(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCMANUALRESETEVENT_WAITASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCMANUALRESETEVENT_SET_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCMANUALRESETEVENT_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCMANUALRESETEVENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

