#pragma once
#include "unitysdk.h"

#define PERCORELOCKEDSTACKS_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define PERCORELOCKEDSTACKS_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define PERCORELOCKEDSTACKS_TRYPOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define PERCORELOCKEDSTACKS_TRIM_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int PerCoreLockedStacks_TypeDefinitionIndex = 25196;

	class PerCoreLockedStacks : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _perCoreStacks; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERCORELOCKEDSTACKS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void TryPush(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PERCORELOCKEDSTACKS_TRYPUSH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TryPop()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PERCORELOCKEDSTACKS_TRYPOP_OFFSET))(nullptr);
		}

		::System::Boolean Trim(::System::UInt32 arg, ::System::Int32 arg, Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::System::Int32, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PERCORELOCKEDSTACKS_TRIM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

