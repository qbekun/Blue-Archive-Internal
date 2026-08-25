#pragma once
#include "unitysdk.h"

#define KEYGENERATEDEVENTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91153E0)
#define KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x91154F0)

	inline static constexpr unsigned int KeyGeneratedEventHandler_TypeDefinitionIndex = 35813;

	class KeyGeneratedEventHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + KEYGENERATEDEVENTHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg, ::System::EventArgs* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + KEYGENERATEDEVENTHANDLER_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

