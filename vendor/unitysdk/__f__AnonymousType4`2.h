#pragma once
#include "unitysdk.h"

#define <>F__ANONYMOUSTYPE4`2_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE4`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE4`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE4`2_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE4`2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE4`2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>f__AnonymousType4`2_TypeDefinitionIndex = 5;

	class <>f__AnonymousType4`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _School_i__Field; // 0x0
		Il2CppObject* _Count_i__Field; // 0x0

		Il2CppObject* get_School()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE4`2_GET_SCHOOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_Count()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE4`2_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE4`2_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE4`2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE4`2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE4`2_TOSTRING_OFFSET))(nullptr);
		}

	};

