#pragma once
#include "unitysdk.h"

#define EXTRACTKEYDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define EXTRACTKEYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ExtractKeyDelegate_TypeDefinitionIndex = 37298;

	class ExtractKeyDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EXTRACTKEYDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* Invoke(Il2CppObject* arg)
		{
			return (return (::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRACTKEYDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

