#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_GET_REGEXMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x950AF80)
#define NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_SET_REGEXMATCHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x950AF90)
#define NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_GET_ERRORWHENNOMATCH_OFFSET UNITYSDK_OFFSET(0x950AFA0)
#define NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_SET_ERRORWHENNOMATCH_OFFSET UNITYSDK_OFFSET(0x950AFB0)
#define NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x950AFC0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JsonSelectSettings_TypeDefinitionIndex = 32041;

	class JsonSelectSettings : public Il2CppObject
	{
	public:
		Il2CppObject* _RegexMatchTimeout_k__BackingField; // 0x10
		::System::Boolean _ErrorWhenNoMatch_k__BackingField; // 0x20

		Il2CppObject* get_RegexMatchTimeout()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_GET_REGEXMATCHTIMEOUT_OFFSET))(nullptr);
		}

		::System::Void set_RegexMatchTimeout(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_SET_REGEXMATCHTIMEOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ErrorWhenNoMatch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_GET_ERRORWHENNOMATCH_OFFSET))(nullptr);
		}

		::System::Void set_ErrorWhenNoMatch(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_SET_ERRORWHENNOMATCH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONSELECTSETTINGS_.CTOR_OFFSET))(nullptr);
		}

	};
}

