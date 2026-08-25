#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_ITRIDROPDOWNITEM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRIINSPECTOR_ITRIDROPDOWNITEM_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace TriInspector
{
	inline static constexpr unsigned int ITriDropdownItem_TypeDefinitionIndex = 37864;

	class ITriDropdownItem : public Il2CppObject
	{
	public:
		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ITRIDROPDOWNITEM_GET_VALUE_OFFSET))(nullptr);
		}

		::System::String* get_Text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_ITRIDROPDOWNITEM_GET_TEXT_OFFSET))(nullptr);
		}

	};
}

