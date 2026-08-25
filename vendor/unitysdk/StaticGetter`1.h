#pragma once
#include "unitysdk.h"

#define STATICGETTER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define STATICGETTER`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int StaticGetter`1_TypeDefinitionIndex = 24924;

	class StaticGetter`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATICGETTER`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Invoke()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATICGETTER`1_INVOKE_OFFSET))(nullptr);
		}

	};

