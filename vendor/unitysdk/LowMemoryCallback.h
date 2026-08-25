#pragma once
#include "unitysdk.h"

#define LOWMEMORYCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E41D0)
#define LOWMEMORYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1E4290)

	inline static constexpr unsigned int LowMemoryCallback_TypeDefinitionIndex = 30944;

	class LowMemoryCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOWMEMORYCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOWMEMORYCALLBACK_INVOKE_OFFSET))(nullptr);
		}

	};

