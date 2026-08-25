#pragma once
#include "unitysdk.h"

#define ARRAYPROPERTYDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21ED0)
#define ARRAYPROPERTYDESCRIPTOR_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9B21F80)
#define ARRAYPROPERTYDESCRIPTOR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x9B22010)

	inline static constexpr unsigned int ArrayPropertyDescriptor_TypeDefinitionIndex = 29344;

	class ArrayPropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 _index; // 0x98

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYPROPERTYDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* GetValue(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYPROPERTYDESCRIPTOR_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValue(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYPROPERTYDESCRIPTOR_SETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};

