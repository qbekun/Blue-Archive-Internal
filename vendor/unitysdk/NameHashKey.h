#pragma once
#include "unitysdk.h"

#define NAMEHASHKEY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x909AAC0)
#define NAMEHASHKEY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x909AAD0)
#define NAMEHASHKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9092590)
#define NAMEHASHKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x909AAE0)
#define NAMEHASHKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x909AB40)
#define NAMEHASHKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x909ABF0)

	inline static constexpr unsigned int NameHashKey_TypeDefinitionIndex = 34448;

	class NameHashKey : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMEHASHKEY_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMEHASHKEY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEHASHKEY_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Boolean Equals(NameHashKey* arg)
		{
			return (return (::System::Boolean(*)(NameHashKey*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEHASHKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NAMEHASHKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMEHASHKEY_GETHASHCODE_OFFSET))(nullptr);
		}

	};

