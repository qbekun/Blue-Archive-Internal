#pragma once
#include "unitysdk.h"

#define CONFIGUREDTASKAWAITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONFIGUREDTASKAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONFIGUREDTASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CONFIGUREDTASKAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ConfiguredTaskAwaiter_TypeDefinitionIndex = 24776;

	class ConfiguredTaskAwaiter : public Il2CppObject
	{
	public:
		Il2CppObject* m_task; // 0x0
		::System::Boolean m_continueOnCapturedContext; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDTASKAWAITER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDTASKAWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDTASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetResult()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREDTASKAWAITER_GETRESULT_OFFSET))(nullptr);
		}

	};

