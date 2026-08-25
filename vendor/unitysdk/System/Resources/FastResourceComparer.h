#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x922DF40)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x922E060)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_HASHFUNCTION_OFFSET UNITYSDK_OFFSET(0x922E010)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x922E100)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x922E190)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x922E1A0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x922E1B0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x922E240)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x922E300)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET UNITYSDK_OFFSET(0x922E3F0)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x922E480)
#define SYSTEM_RESOURCES_FASTRESOURCECOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x922E490)

namespace System::Resources
{
	inline static constexpr unsigned int FastResourceComparer_TypeDefinitionIndex = 24816;

	class FastResourceComparer : public Il2CppObject
	{
	public:
		::System::Resources::FastResourceComparer* Default; // 0x0

		::System::Int32 GetHashCode(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Int32 HashFunction(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_HASHFUNCTION_OFFSET))(str, nullptr);
		}

		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPARE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareOrdinal(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 CompareOrdinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Int32 CompareOrdinal(::System::Object** arg, ::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_COMPAREORDINAL_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_FASTRESOURCECOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

