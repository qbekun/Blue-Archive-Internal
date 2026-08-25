#pragma once
#include "unitysdk.h"

#define LINKED2CANCELLATIONTOKENSOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DC440)
#define LINKED2CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93DC910)

	inline static constexpr unsigned int Linked2CancellationTokenSource_TypeDefinitionIndex = 24060;

	class Linked2CancellationTokenSource : public Il2CppObject
	{
	public:
		::System::Threading::CancellationTokenRegistration* _reg1; // 0x40
		::System::Threading::CancellationTokenRegistration* _reg2; // 0x58

		::System::Void .ctor(::System::Threading::CancellationToken* arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + LINKED2CANCELLATIONTOKENSOURCE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LINKED2CANCELLATIONTOKENSOURCE_DISPOSE_OFFSET))(arg, nullptr);
		}

	};

