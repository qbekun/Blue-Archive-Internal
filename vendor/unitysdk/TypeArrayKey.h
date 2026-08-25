#pragma once
#include "unitysdk.h"

#define TYPEARRAYKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x90DD330)
#define TYPEARRAYKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x90DD540)
#define TYPEARRAYKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x90DD5C0)
#define TYPEARRAYKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x90DD690)

	inline static constexpr unsigned int TypeArrayKey_TypeDefinitionIndex = 34602;

	class TypeArrayKey : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _types; // 0x10
		::System::Int32 _hashCode; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEARRAYKEY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(TypeArrayKey* arg)
		{
			return (return (::System::Boolean(*)(TypeArrayKey*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEARRAYKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEARRAYKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEARRAYKEY_GETHASHCODE_OFFSET))(nullptr);
		}

	};

