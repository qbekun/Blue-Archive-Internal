#pragma once
#include "unitysdk.h"

#define LOCKEDSTACK_TRYPUSH_OFFSET UNITYSDK_OFFSET(0x000000)
#define LOCKEDSTACK_TRYPOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define LOCKEDSTACK_TRIM_OFFSET UNITYSDK_OFFSET(0x000000)
#define LOCKEDSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int LockedStack_TypeDefinitionIndex = 25197;

	class LockedStack : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _arrays; // 0x0
		::System::Int32 _count; // 0x0
		::System::UInt32 _firstStackItemMS; // 0x0

		::System::Boolean TryPush(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + LOCKEDSTACK_TRYPUSH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TryPop()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCKEDSTACK_TRYPOP_OFFSET))(nullptr);
		}

		::System::Void Trim(::System::UInt32 arg, ::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Int32, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOCKEDSTACK_TRIM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCKEDSTACK_.CTOR_OFFSET))(nullptr);
		}

	};

