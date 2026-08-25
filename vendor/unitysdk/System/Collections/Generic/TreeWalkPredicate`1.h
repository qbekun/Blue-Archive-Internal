#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_TREEWALKPREDICATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_TREEWALKPREDICATE`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int TreeWalkPredicate`1_TypeDefinitionIndex = 29620;

	class TreeWalkPredicate`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_TREEWALKPREDICATE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_TREEWALKPREDICATE`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

