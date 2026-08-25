#pragma once
#include "unitysdk.h"

#define REPLICATABLEUSERACTION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define REPLICATABLEUSERACTION`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ReplicatableUserAction`1_TypeDefinitionIndex = 24161;

	class ReplicatableUserAction`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + REPLICATABLEUSERACTION`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject&* arg, ::System::Int32 arg, bool&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + REPLICATABLEUSERACTION`1_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

