#pragma once
#include "unitysdk.h"

#define ASYNCLOADVALIDATOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D9ECB0)
#define ASYNCLOADVALIDATOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D9ECE0)
#define ASYNCLOADVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ED10)
#define ASYNCLOADVALIDATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D9EDD0)

	inline static constexpr unsigned int AsyncLoadValidator_TypeDefinitionIndex = 20377;

	class AsyncLoadValidator : public Il2CppObject
	{
	public:
		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCLOADVALIDATOR_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCLOADVALIDATOR_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASYNCLOADVALIDATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ASYNCLOADVALIDATOR_INVOKE_OFFSET))(nullptr);
		}

	};

