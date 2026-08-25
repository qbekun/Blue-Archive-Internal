#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JEnumerable`1_TypeDefinitionIndex = 32021;

	class JEnumerable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Empty; // 0x0
		Il2CppObject* _enumerable; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JENUMERABLE`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

