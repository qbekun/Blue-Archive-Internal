#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_COMPARISONCOMPARER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_COMPARISONCOMPARER`1_COMPARE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ComparisonComparer`1_TypeDefinitionIndex = 25177;

	class ComparisonComparer`1 : public ::MX_SupportTool::O8d0a1ebfb766e2d5858b70e5fe6ac9ca7b3961fa36682f886b3417e5179d6047
	{
	public:
		Il2CppObject* _comparison; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARISONCOMPARER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_COMPARISONCOMPARER`1_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};
}

