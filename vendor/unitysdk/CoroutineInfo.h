#pragma once
#include "unitysdk.h"

#define COROUTINEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1423E40)

	inline static constexpr unsigned int CoroutineInfo_TypeDefinitionIndex = 14817;

	class CoroutineInfo : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* Enumerator; // 0x10
		::System::Int32 WaitCount; // 0x18
		::System::Boolean IsStopCalled; // 0x1C

		::System::Void .ctor(::System::Collections::IEnumerator* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Collections::IEnumerator*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINEINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

