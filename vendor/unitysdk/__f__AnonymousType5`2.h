#pragma once
#include "unitysdk.h"

#define <>F__ANONYMOUSTYPE5`2_GET_SCHOOLGROUP_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE5`2_GET_POSSIBLETOTAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE5`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE5`2_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE5`2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE5`2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>f__AnonymousType5`2_TypeDefinitionIndex = 6;

	class <>f__AnonymousType5`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _SchoolGroup_i__Field; // 0x0
		Il2CppObject* _PossibleTotal_i__Field; // 0x0

		Il2CppObject* get_SchoolGroup()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE5`2_GET_SCHOOLGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* get_PossibleTotal()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE5`2_GET_POSSIBLETOTAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE5`2_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE5`2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE5`2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE5`2_TOSTRING_OFFSET))(nullptr);
		}

	};

