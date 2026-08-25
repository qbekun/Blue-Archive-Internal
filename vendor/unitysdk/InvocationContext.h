#pragma once
#include "unitysdk.h"

#define INVOCATIONCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E3CD0)
#define INVOCATIONCONTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x93E3D30)

	inline static constexpr unsigned int InvocationContext_TypeDefinitionIndex = 24095;

	class InvocationContext : public Il2CppObject
	{
	public:
		::System::Threading::SendOrPostCallback* m_Delegate; // 0x10
		::System::Object* m_State; // 0x18

		::System::Void .ctor(::System::Threading::SendOrPostCallback* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Threading::SendOrPostCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INVOCATIONCONTEXT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INVOCATIONCONTEXT_INVOKE_OFFSET))(nullptr);
		}

	};

