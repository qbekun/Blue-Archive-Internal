#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_GET_ALLOWNULLITEMS_OFFSET UNITYSDK_OFFSET(0x944AC40)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_SET_ALLOWNULLITEMS_OFFSET UNITYSDK_OFFSET(0x944AC50)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944AC60)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944AC80)
#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944ACA0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonArrayAttribute_TypeDefinitionIndex = 31681;

	class JsonArrayAttribute : public Il2CppObject
	{
	public:
		::System::Boolean _allowNullItems; // 0x68

		::System::Boolean get_AllowNullItems()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_GET_ALLOWNULLITEMS_OFFSET))(nullptr);
		}

		::System::Void set_AllowNullItems(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_SET_ALLOWNULLITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

