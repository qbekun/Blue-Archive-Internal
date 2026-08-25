#pragma once
#include "unitysdk.h"

#define DELEGATE_RELEASE_OFFSET UNITYSDK_OFFSET(0x4B5F10)
#define DELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B5F70)
#define DELEGATE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x4B53C0)
#define DELEGATE_CALCULATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x4B5F80)

	inline static constexpr unsigned int Delegate_TypeDefinitionIndex = 35177;

	class Delegate : public Il2CppObject
	{
	public:
		Il2CppObject* _CalculateWeight; // 0x48

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DELEGATE_.CTOR_OFFSET))(nullptr);
		}

		Delegate* Acquire(Il2CppObject* arg)
		{
			return (return (Delegate*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATE_ACQUIRE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateWeight(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATE_CALCULATEWEIGHT_OFFSET))(arg, nullptr);
		}

	};

