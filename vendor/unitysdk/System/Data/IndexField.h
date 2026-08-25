#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_INDEXFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x976DC10)
#define SYSTEM_DATA_INDEXFIELD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x976DC30)
#define SYSTEM_DATA_INDEXFIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x976DC50)
#define SYSTEM_DATA_INDEXFIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x976DCE0)

namespace System::Data
{
	inline static constexpr unsigned int IndexField_TypeDefinitionIndex = 32292;

	class IndexField : public Il2CppObject
	{
	public:
		::System::Data::DataColumn* Column; // 0x10
		::System::Boolean IsDescending; // 0x18

		::System::Void .ctor(::System::Data::DataColumn* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataColumn*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::System::Data::IndexField* arg, ::System::Data::IndexField* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::IndexField*, ::System::Data::IndexField*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

