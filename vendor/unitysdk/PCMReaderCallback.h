#pragma once
#include "unitysdk.h"

#define PCMREADERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DB8E0)
#define PCMREADERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1DB9B0)

	inline static constexpr unsigned int PCMReaderCallback_TypeDefinitionIndex = 37467;

	class PCMReaderCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PCMREADERCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PCMREADERCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

