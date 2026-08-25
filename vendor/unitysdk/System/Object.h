#pragma once
#include "../unitysdk.h"

#define SYSTEM_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x93BD7F0)
#define SYSTEM_OBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x93BD800)
#define SYSTEM_OBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AE1C0)
#define SYSTEM_OBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x93BD840)
#define SYSTEM_OBJECT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93BD850)
#define SYSTEM_OBJECT_GETTYPE_OFFSET UNITYSDK_OFFSET(0x93AEA20)
#define SYSTEM_OBJECT_MEMBERWISECLONE_OFFSET UNITYSDK_OFFSET(0x93B74D0)
#define SYSTEM_OBJECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93BD870)
#define SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET UNITYSDK_OFFSET(0x93BD8A0)
#define SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93BD860)
#define SYSTEM_OBJECT_FIELDGETTER_OFFSET UNITYSDK_OFFSET(0x93BD8B0)
#define SYSTEM_OBJECT_FIELDSETTER_OFFSET UNITYSDK_OFFSET(0x93BD8C0)

namespace System
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 23985;

	class Object : public Il2CppObject
	{
	public:
		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FINALIZE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Type* GetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_GETTYPE_OFFSET))(nullptr);
		}

		::System::Object* MemberwiseClone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_MEMBERWISECLONE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean ReferenceEquals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_REFERENCEEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 InternalGetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_INTERNALGETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void FieldGetter(::System::String* str, ::System::String* str, ::System::Object&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FIELDGETTER_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void FieldSetter(::System::String* str, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECT_FIELDSETTER_OFFSET))(str, str, arg, nullptr);
		}

	};
}

