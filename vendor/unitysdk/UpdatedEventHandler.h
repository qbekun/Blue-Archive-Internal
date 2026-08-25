#pragma once
#include "unitysdk.h"

#define UPDATEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49EDD0)
#define UPDATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA49EE90)

	inline static constexpr unsigned int UpdatedEventHandler_TypeDefinitionIndex = 38010;

	class UpdatedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATEDEVENTHANDLER_INVOKE_OFFSET))(nullptr);
		}

	};

