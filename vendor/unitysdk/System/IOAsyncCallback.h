#pragma once
#include "../unitysdk.h"

#define SYSTEM_IOASYNCCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD79E0)
#define SYSTEM_IOASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AD7AF0)

namespace System
{
	inline static constexpr unsigned int IOAsyncCallback_TypeDefinitionIndex = 29193;

	class IOAsyncCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::IOAsyncResult* arg)
		{
			((::System::Void(*)(::System::IOAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IOASYNCCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

