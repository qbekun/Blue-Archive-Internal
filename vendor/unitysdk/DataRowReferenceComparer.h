#pragma once
#include "unitysdk.h"

#define DATAROWREFERENCECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x974D430)
#define DATAROWREFERENCECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x974D440)
#define DATAROWREFERENCECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x974D450)
#define DATAROWREFERENCECOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x974D470)

	inline static constexpr unsigned int DataRowReferenceComparer_TypeDefinitionIndex = 32234;

	class DataRowReferenceComparer : public Il2CppObject
	{
	public:
		DataRowReferenceComparer* s_default; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATAROWREFERENCECOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Data::DataRow* arg, ::System::Data::DataRow* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::DataRow*, ::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + DATAROWREFERENCECOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode(::System::Data::DataRow* arg)
		{
			return (return (::System::Int32(*)(::System::Data::DataRow*, ::PVOID))((::PBYTE)hIl2Cpp + DATAROWREFERENCECOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATAROWREFERENCECOMPARER_.CCTOR_OFFSET))(nullptr);
		}

	};

