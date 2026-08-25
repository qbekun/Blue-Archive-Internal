#pragma once
#include "unitysdk.h"

#define ONOVERRIDECONTROLLERDIRTYCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CCE70)
#define ONOVERRIDECONTROLLERDIRTYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1CCF30)

	inline static constexpr unsigned int OnOverrideControllerDirtyCallback_TypeDefinitionIndex = 36469;

	class OnOverrideControllerDirtyCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONOVERRIDECONTROLLERDIRTYCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOVERRIDECONTROLLERDIRTYCALLBACK_INVOKE_OFFSET))(nullptr);
		}

	};

