#pragma once
#include "unitysdk.h"

#define CREATEVALUECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CREATEVALUECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CreateValueCallback_TypeDefinitionIndex = 24800;

	class CreateValueCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATEVALUECALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Invoke(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEVALUECALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

