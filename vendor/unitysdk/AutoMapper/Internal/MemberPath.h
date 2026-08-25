#pragma once
#include "../../unitysdk.h"

namespace AutoMapper::Internal { class MemberPath; }

#define AUTOMAPPER_INTERNAL_MEMBERPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D1B10)
#define AUTOMAPPER_INTERNAL_MEMBERPATH_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x4D1B20)
#define AUTOMAPPER_INTERNAL_MEMBERPATH_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x4D1880)
#define AUTOMAPPER_INTERNAL_MEMBERPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0x4D1B30)
#define AUTOMAPPER_INTERNAL_MEMBERPATH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4D1BA0)
#define AUTOMAPPER_INTERNAL_MEMBERPATH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4D1C90)
#define AUTOMAPPER_INTERNAL_MEMBERPATH_EQUALS_OFFSET UNITYSDK_OFFSET(0x4D1E30)
#define AUTOMAPPER_INTERNAL_MEMBERPATH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4D1F10)

namespace AutoMapper::Internal
{
	inline static constexpr unsigned int MemberPath_TypeDefinitionIndex = 37640;

	class MemberPath : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _Members_k__BackingField; // 0x10
		::AutoMapper::Internal::MemberPath* Empty; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Members()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_GET_MEMBERS_OFFSET))(nullptr);
		}

		::System::Reflection::MemberInfo* get_First()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_GET_FIRST_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::AutoMapper::Internal::MemberPath* arg)
		{
			return (return (::System::Boolean(*)(::AutoMapper::Internal::MemberPath*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_MEMBERPATH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

