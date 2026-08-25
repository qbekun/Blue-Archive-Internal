#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_TRIDROPDOWNITEM`1_TRIINSPECTOR.ITRIDROPDOWNITEM.GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRIINSPECTOR_TRIDROPDOWNITEM`1_TRIINSPECTOR.ITRIDROPDOWNITEM.GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TriInspector
{
	inline static constexpr unsigned int TriDropdownItem`1_TypeDefinitionIndex = 37866;

	class TriDropdownItem`1 : public Il2CppObject
	{
	public:
		::System::String* Text; // 0x0
		Il2CppObject* Value; // 0x0

		::System::String* TriInspector.ITriDropdownItem.get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNITEM`1_TRIINSPECTOR.ITRIDROPDOWNITEM.GET_TEXT_OFFSET))(nullptr);
		}

		::System::Object* TriInspector.ITriDropdownItem.get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_TRIDROPDOWNITEM`1_TRIINSPECTOR.ITRIDROPDOWNITEM.GET_VALUE_OFFSET))(nullptr);
		}

	};
}

