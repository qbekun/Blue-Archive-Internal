#pragma once
#include "unitysdk.h"

#define UPDATEFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA24D140)
#define UPDATEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0xA24D200)

	inline static constexpr unsigned int UpdateFunction_TypeDefinitionIndex = 31319;

	class UpdateFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATEFUNCTION_INVOKE_OFFSET))(nullptr);
		}

	};

