#pragma once
#include "unitysdk.h"

#define <>F__ANONYMOUSTYPE3`2_GET_ELEMENT1_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE3`2_GET_ELEMENT2_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE3`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE3`2_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE3`2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>F__ANONYMOUSTYPE3`2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>f__AnonymousType3`2_TypeDefinitionIndex = 4;

	class <>f__AnonymousType3`2 : public Il2CppObject
	{
	public:
		Il2CppObject* _element1_i__Field; // 0x0
		Il2CppObject* _element2_i__Field; // 0x0

		Il2CppObject* get_element1()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE3`2_GET_ELEMENT1_OFFSET))(nullptr);
		}

		Il2CppObject* get_element2()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE3`2_GET_ELEMENT2_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE3`2_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE3`2_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE3`2_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>F__ANONYMOUSTYPE3`2_TOSTRING_OFFSET))(nullptr);
		}

	};

