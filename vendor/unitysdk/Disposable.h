#pragma once
#include "unitysdk.h"

#define DISPOSABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define DISPOSABLE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Disposable_TypeDefinitionIndex = 35096;

	class Disposable : public Il2CppObject
	{
	public:
		Il2CppObject* Item; // 0x0
		Il2CppObject* OnRelease; // 0x0

		::System::Void .ctor(Il2CppObject&* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject&*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DISPOSABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPOSABLE_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

	};

