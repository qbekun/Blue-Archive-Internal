#pragma once
#include "unitysdk.h"

#define GETTERADAPTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9251710)
#define GETTERADAPTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9251820)

	inline static constexpr unsigned int GetterAdapter_TypeDefinitionIndex = 24922;

	class GetterAdapter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTERADAPTER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Invoke(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETTERADAPTER_INVOKE_OFFSET))(arg, nullptr);
		}

	};

