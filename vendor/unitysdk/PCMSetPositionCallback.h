#pragma once
#include "unitysdk.h"

#define PCMSETPOSITIONCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DB9C0)
#define PCMSETPOSITIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1DBA90)

	inline static constexpr unsigned int PCMSetPositionCallback_TypeDefinitionIndex = 37468;

	class PCMSetPositionCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PCMSETPOSITIONCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PCMSETPOSITIONCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

