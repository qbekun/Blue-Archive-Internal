#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_POSITIONS_ADD_OFFSET UNITYSDK_OFFSET(0x9A0E200)
#define SYSTEM_XML_SCHEMA_POSITIONS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9A0E2A0)
#define SYSTEM_XML_SCHEMA_POSITIONS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9A0E330)
#define SYSTEM_XML_SCHEMA_POSITIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0E360)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Positions_TypeDefinitionIndex = 27971;

	class Positions : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* positions; // 0x10

		::System::Int32 Add(::System::Int32 arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::Position* get_Item(::System::Int32 arg)
		{
			return (return (::System::Xml::Schema::Position*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITIONS_.CTOR_OFFSET))(nullptr);
		}

	};
}

