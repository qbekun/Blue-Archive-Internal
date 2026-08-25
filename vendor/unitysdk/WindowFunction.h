#pragma once
#include "unitysdk.h"

#define WINDOWFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27C820)
#define WINDOWFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA27C8F0)

	inline static constexpr unsigned int WindowFunction_TypeDefinitionIndex = 36531;

	class WindowFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WINDOWFUNCTION_INVOKE_OFFSET))(arg, nullptr);
		}

	};

