#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x950AB70)
#define NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_GET_COPYANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x950AB90)
#define NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_SET_COPYANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x950ABA0)
#define NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x950ABB0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JsonCloneSettings_TypeDefinitionIndex = 32038;

	class JsonCloneSettings : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JsonCloneSettings* SkipCopyAnnotations; // 0x0
		::System::Boolean _CopyAnnotations_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CopyAnnotations()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_GET_COPYANNOTATIONS_OFFSET))(nullptr);
		}

		::System::Void set_CopyAnnotations(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_SET_COPYANNOTATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONCLONESETTINGS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

