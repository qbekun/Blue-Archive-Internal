#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_FLOORLOG2PLUSONE_OFFSET UNITYSDK_OFFSET(0x92DB5C0)
#define SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_THROWORIGNOREBADCOMPARER_OFFSET UNITYSDK_OFFSET(0x92DB5E0)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int IntrospectiveSortUtilities_TypeDefinitionIndex = 25170;

	class IntrospectiveSortUtilities : public Il2CppObject
	{
	public:
		::System::Int32 FloorLog2PlusOne(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_FLOORLOG2PLUSONE_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowOrIgnoreBadComparer(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_INTROSPECTIVESORTUTILITIES_THROWORIGNOREBADCOMPARER_OFFSET))(arg, nullptr);
		}

	};
}

