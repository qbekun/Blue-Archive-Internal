#pragma once
#include "unitysdk.h"

#define CONTINUATIONWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x922A510)
#define CONTINUATIONWRAPPER_INVOKE_OFFSET UNITYSDK_OFFSET(0x922A9B0)

	inline static constexpr unsigned int ContinuationWrapper_TypeDefinitionIndex = 24784;

	class ContinuationWrapper : public Il2CppObject
	{
	public:
		::System::Action* m_continuation; // 0x10
		::System::Action* m_invokeAction; // 0x18
		::System::Threading::Tasks::Task* m_innerTask; // 0x20

		::System::Void .ctor(::System::Action* arg, ::System::Action* arg, ::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + CONTINUATIONWRAPPER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTINUATIONWRAPPER_INVOKE_OFFSET))(nullptr);
		}

	};

