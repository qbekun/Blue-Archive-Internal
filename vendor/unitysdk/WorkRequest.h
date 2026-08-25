#pragma once
#include "unitysdk.h"

#define WORKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA236530)
#define WORKREQUEST_INVOKE_OFFSET UNITYSDK_OFFSET(0xA236A00)

	inline static constexpr unsigned int WorkRequest_TypeDefinitionIndex = 31180;

	class WorkRequest : public Il2CppObject
	{
	public:
		::System::Threading::SendOrPostCallback* m_DelagateCallback; // 0x10
		::System::Object* m_DelagateState; // 0x18
		::System::Threading::ManualResetEvent* m_WaitHandle; // 0x20

		::System::Void .ctor(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg, ::System::Threading::ManualResetEvent* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::System::Threading::ManualResetEvent*, ::PVOID))((::PBYTE)hIl2Cpp + WORKREQUEST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORKREQUEST_INVOKE_OFFSET))(nullptr);
		}

	};

