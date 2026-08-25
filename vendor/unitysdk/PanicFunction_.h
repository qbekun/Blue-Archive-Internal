#pragma once
#include "unitysdk.h"

#define PANICFUNCTION__.CTOR_OFFSET UNITYSDK_OFFSET(0xA1E1390)
#define PANICFUNCTION__INVOKE_OFFSET UNITYSDK_OFFSET(0xA1E1450)

	inline static constexpr unsigned int PanicFunction__TypeDefinitionIndex = 30882;

	class PanicFunction_ : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PANICFUNCTION__.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PANICFUNCTION__INVOKE_OFFSET))(nullptr);
		}

	};

