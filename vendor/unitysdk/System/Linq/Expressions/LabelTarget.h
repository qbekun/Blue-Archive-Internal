#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9662AC0)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9662B10)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9662B20)
#define SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9662B30)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LabelTarget_TypeDefinitionIndex = 33065;

	class LabelTarget : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_NAME_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_GET_TYPE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LABELTARGET_TOSTRING_OFFSET))(nullptr);
		}

	};
}

