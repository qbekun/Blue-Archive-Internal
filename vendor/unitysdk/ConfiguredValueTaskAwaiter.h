#pragma once
#include "unitysdk.h"

#define CONFIGUREDVALUETASKAWAITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONFIGUREDVALUETASKAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONFIGUREDVALUETASKAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONFIGUREDVALUETASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ConfiguredValueTaskAwaiter_TypeDefinitionIndex = 24742;

	class ConfiguredValueTaskAwaiter : public Il2CppObject
	{
	public:
		Il2CppObject* _value; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDVALUETASKAWAITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDVALUETASKAWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		Il2CppObject* GetResult()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDVALUETASKAWAITER_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDVALUETASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

	};

