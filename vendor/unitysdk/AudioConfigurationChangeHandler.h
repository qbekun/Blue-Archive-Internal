#pragma once
#include "unitysdk.h"

#define AUDIOCONFIGURATIONCHANGEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DA910)
#define AUDIOCONFIGURATIONCHANGEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1DA9E0)

	inline static constexpr unsigned int AudioConfigurationChangeHandler_TypeDefinitionIndex = 37465;

	class AudioConfigurationChangeHandler : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONFIGURATIONCHANGEHANDLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUDIOCONFIGURATIONCHANGEHANDLER_INVOKE_OFFSET))(arg, nullptr);
		}

	};

