#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_TRIDROPDOWNITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9DCF600)
#define TRIINSPECTOR_TRIDROPDOWNITEM_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9DCF610)
#define TRIINSPECTOR_TRIDROPDOWNITEM_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x9DCF620)
#define TRIINSPECTOR_TRIDROPDOWNITEM_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x9DCF630)

namespace TriInspector
{
	inline static constexpr unsigned int TriDropdownItem_TypeDefinitionIndex = 37865;

	class TriDropdownItem : public Il2CppObject
	{
	public:
		::System::String* _Text_k__BackingField; // 0x10
		::System::Object* _Value_k__BackingField; // 0x18

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNITEM_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNITEM_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNITEM_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void set_Text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNITEM_SET_TEXT_OFFSET))(str, nullptr);
		}

	};
}

