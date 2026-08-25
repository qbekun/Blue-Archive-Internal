#pragma once
#include "unitysdk.h"

#define ACTION`4_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ACTION`4_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Action`4_TypeDefinitionIndex = 32297;

	class Action`4 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACTION`4_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ACTION`4_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

