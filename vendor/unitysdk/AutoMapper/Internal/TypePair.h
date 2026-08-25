#pragma once
#include "../../unitysdk.h"

namespace AutoMapper::Internal { class TypePair; }

#define AUTOMAPPER_INTERNAL_TYPEPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D2920)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x4D2950)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_GET_DESTINATIONTYPE_OFFSET UNITYSDK_OFFSET(0x4D2960)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x4D2970)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x4D29D0)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4D2A30)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x4D2B00)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4D2CA0)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x4D2D30)
#define AUTOMAPPER_INTERNAL_TYPEPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x4D2DB0)

namespace AutoMapper::Internal
{
	inline static constexpr unsigned int TypePair_TypeDefinitionIndex = 37644;

	class TypePair : public Il2CppObject
	{
	public:
		::System::Type* _SourceType_k__BackingField; // 0x10
		::System::Type* _DestinationType_k__BackingField; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_SourceType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_GET_SOURCETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_DestinationType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_GET_DESTINATIONTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsConstructedGenericType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_GET_ISCONSTRUCTEDGENERICTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_GET_CONTAINSGENERICPARAMETERS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Boolean(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_PRINTMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::AutoMapper::Internal::TypePair* arg)
		{
			return (return (::System::Boolean(*)(::AutoMapper::Internal::TypePair*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_TYPEPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

