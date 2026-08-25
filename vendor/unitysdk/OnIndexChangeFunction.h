#pragma once
#include "unitysdk.h"

#define ONINDEXCHANGEFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C0C90)
#define ONINDEXCHANGEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA3C0D50)

	inline static constexpr unsigned int OnIndexChangeFunction_TypeDefinitionIndex = 30387;

	class OnIndexChangeFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONINDEXCHANGEFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONINDEXCHANGEFUNCTION_INVOKE_OFFSET))(nullptr);
		}

	};

