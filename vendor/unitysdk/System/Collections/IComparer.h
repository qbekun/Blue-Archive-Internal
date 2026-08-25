#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections
{
	inline static constexpr unsigned int IComparer_TypeDefinitionIndex = 25053;

	class IComparer : public Il2CppObject
	{
	public:
		::System::Int32 Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ICOMPARER_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

