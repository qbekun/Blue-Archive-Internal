#pragma once
#include "unitysdk.h"

#define ORDERING_.CTOR_OFFSET UNITYSDK_OFFSET(0xA27720)
#define ORDERING_GET_ASCENDING_OFFSET UNITYSDK_OFFSET(0xA27730)
#define ORDERING_SET_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0xA27740)
#define ORDERING_SET_ASCENDING_OFFSET UNITYSDK_OFFSET(0xA27750)
#define ORDERING_GET_COLUMNNAME_OFFSET UNITYSDK_OFFSET(0xA27760)

	inline static constexpr unsigned int Ordering_TypeDefinitionIndex = 36631;

	class Ordering : public Il2CppObject
	{
	public:
		::System::String* _ColumnName_k__BackingField; // 0x10
		::System::Boolean _Ascending_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDERING_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Ascending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDERING_GET_ASCENDING_OFFSET))(nullptr);
		}

		::System::Void set_ColumnName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ORDERING_SET_COLUMNNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Ascending(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ORDERING_SET_ASCENDING_OFFSET))(arg, nullptr);
		}

		::System::String* get_ColumnName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ORDERING_GET_COLUMNNAME_OFFSET))(nullptr);
		}

	};

