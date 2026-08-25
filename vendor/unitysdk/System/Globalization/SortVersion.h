#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9265620)
#define SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x92656E0)
#define SYSTEM_GLOBALIZATION_SORTVERSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92657D0)
#define SYSTEM_GLOBALIZATION_SORTVERSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9265750)
#define SYSTEM_GLOBALIZATION_SORTVERSION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x92656D0)

namespace System::Globalization
{
	inline static constexpr unsigned int SortVersion_TypeDefinitionIndex = 24972;

	class SortVersion : public Il2CppObject
	{
	public:
		::System::Int32 m_NlsVersion; // 0x10
		::System::Guid* m_SortId; // 0x14

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Globalization::SortVersion* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::SortVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Globalization::SortVersion* arg, ::System::Globalization::SortVersion* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::SortVersion*, ::System::Globalization::SortVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Globalization::SortVersion* arg, ::System::Globalization::SortVersion* arg)
		{
			return (return (::System::Boolean(*)(::System::Globalization::SortVersion*, ::System::Globalization::SortVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTVERSION_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

	};
}

