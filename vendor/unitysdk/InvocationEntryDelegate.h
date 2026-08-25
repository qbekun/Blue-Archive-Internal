#pragma once
#include "unitysdk.h"

#define INVOCATIONENTRYDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93E3C00)
#define INVOCATIONENTRYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x93E3DF0)

	inline static constexpr unsigned int InvocationEntryDelegate_TypeDefinitionIndex = 24094;

	class InvocationEntryDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INVOCATIONENTRYDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INVOCATIONENTRYDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

