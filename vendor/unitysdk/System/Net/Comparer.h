#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_COMPARER_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET UNITYSDK_OFFSET(0x9A58180)
#define SYSTEM_NET_COMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A56650)

namespace System::Net
{
	inline static constexpr unsigned int Comparer_TypeDefinitionIndex = 29732;

	class Comparer : public Il2CppObject
	{
	public:
		::System::Int32 System.Collections.IComparer.Compare(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPARER_SYSTEM.COLLECTIONS.ICOMPARER.COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COMPARER_.CTOR_OFFSET))(nullptr);
		}

	};
}

