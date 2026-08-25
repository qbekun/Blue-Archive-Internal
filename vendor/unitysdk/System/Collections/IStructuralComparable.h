#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections
{
	inline static constexpr unsigned int IStructuralComparable_TypeDefinitionIndex = 25060;

	class IStructuralComparable : public Il2CppObject
	{
	public:
		::System::Int32 CompareTo(::System::Object* arg, ::System::Collections::IComparer* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Collections::IComparer*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ISTRUCTURALCOMPARABLE_COMPARETO_OFFSET))(arg, arg, nullptr);
		}

	};
}

