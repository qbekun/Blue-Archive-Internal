#pragma once
#include "unitysdk.h"

#define IVALUEFIELD_VALIDATEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IVALUEFIELD_SETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IVALUEFIELD_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IValueField_TypeDefinitionIndex = 33953;

	class IValueField : public Il2CppObject
	{
	public:
		::System::Object* ValidateValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IVALUEFIELD_VALIDATEVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + IVALUEFIELD_SETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IVALUEFIELD_GETVALUE_OFFSET))(nullptr);
		}

	};

