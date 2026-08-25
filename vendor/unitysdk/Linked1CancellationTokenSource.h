#pragma once
#include "unitysdk.h"

#define LINKED1CANCELLATIONTOKENSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DC2F0)
#define LINKED1CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DC8D0)

	inline static constexpr unsigned int Linked1CancellationTokenSource_TypeDefinitionIndex = 24059;

	class Linked1CancellationTokenSource : public Il2CppObject
	{
	public:
		::System::Threading::CancellationTokenRegistration* _reg1; // 0x40

		::System::Void .ctor(::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + LINKED1CANCELLATIONTOKENSOURCE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LINKED1CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};

