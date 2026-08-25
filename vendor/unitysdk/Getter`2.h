#pragma once
#include "unitysdk.h"

#define GETTER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define GETTER`2_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Getter`2_TypeDefinitionIndex = 24923;

	class Getter`2 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETTER`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Invoke(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + GETTER`2_INVOKE_OFFSET))(arg, nullptr);
		}

	};

