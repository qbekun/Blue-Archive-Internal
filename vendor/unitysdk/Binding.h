#pragma once
#include "unitysdk.h"

#define BINDING_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA27450)
#define BINDING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA27460)
#define BINDING_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA27470)
#define BINDING_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA27480)
#define BINDING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA27490)
#define BINDING_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA274A0)
#define BINDING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA249A0)

	inline static constexpr unsigned int Binding_TypeDefinitionIndex = 36619;

	class Binding : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Object* _Value_k__BackingField; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BINDING_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BINDING_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BINDING_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDING_GET_NAME_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDING_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDING_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINDING_.CTOR_OFFSET))(nullptr);
		}

	};

