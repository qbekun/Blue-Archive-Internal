#pragma once
#include "unitysdk.h"

#define LISTINDEXLABELATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21634A0)

	inline static constexpr unsigned int ListIndexLabelAttribute_TypeDefinitionIndex = 4011;

	class ListIndexLabelAttribute : public Il2CppObject
	{
	public:
		::System::String* prefix; // 0x18
		::System::Int32 startIndex; // 0x20
		::System::Boolean showIndex; // 0x24

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LISTINDEXLABELATTRIBUTE_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

	};

