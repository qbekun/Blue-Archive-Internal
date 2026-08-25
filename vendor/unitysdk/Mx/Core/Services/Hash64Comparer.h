#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Services { class Hash64; }

#define MX_CORE_SERVICES_HASH64COMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1017BC0)
#define MX_CORE_SERVICES_HASH64COMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1017C00)
#define MX_CORE_SERVICES_HASH64COMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1017C50)

namespace MX::Core::Services
{
	inline static constexpr unsigned int Hash64Comparer_TypeDefinitionIndex = 12796;

	class Hash64Comparer : public ::MX::GameLogic::DBModel::CraftNodeDB
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64COMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::Core::Services::Hash64* arg, ::MX::Core::Services::Hash64* arg2)
		{
			return ((::System::Boolean(*)(::MX::Core::Services::Hash64*, ::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64COMPARER_EQUALS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetHashCode(::MX::Core::Services::Hash64* arg)
		{
			return ((::System::Int32(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_SERVICES_HASH64COMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};
}

