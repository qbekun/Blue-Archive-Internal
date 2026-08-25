#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class MergeArrayHandling; }
namespace Newtonsoft::Json::Linq { class MergeNullValueHandling; }

#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x950ADE0)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGEARRAYHANDLING_OFFSET UNITYSDK_OFFSET(0x950AE00)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGEARRAYHANDLING_OFFSET UNITYSDK_OFFSET(0x950AE10)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGENULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x950AE80)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGENULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x950AE90)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_PROPERTYNAMECOMPARISON_OFFSET UNITYSDK_OFFSET(0x950AF00)
#define NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_PROPERTYNAMECOMPARISON_OFFSET UNITYSDK_OFFSET(0x950AF10)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JsonMergeSettings_TypeDefinitionIndex = 32040;

	class JsonMergeSettings : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::MergeArrayHandling* _mergeArrayHandling; // 0x10
		::Newtonsoft::Json::Linq::MergeNullValueHandling* _mergeNullValueHandling; // 0x14
		::System::StringComparison* _propertyNameComparison; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::MergeArrayHandling* get_MergeArrayHandling()
		{
			return (return (::Newtonsoft::Json::Linq::MergeArrayHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGEARRAYHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MergeArrayHandling(::Newtonsoft::Json::Linq::MergeArrayHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::MergeArrayHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGEARRAYHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::MergeNullValueHandling* get_MergeNullValueHandling()
		{
			return (return (::Newtonsoft::Json::Linq::MergeNullValueHandling*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_MERGENULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MergeNullValueHandling(::Newtonsoft::Json::Linq::MergeNullValueHandling* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::MergeNullValueHandling*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_MERGENULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::System::StringComparison* get_PropertyNameComparison()
		{
			return (return (::System::StringComparison*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_GET_PROPERTYNAMECOMPARISON_OFFSET))(nullptr);
		}

		::System::Void set_PropertyNameComparison(::System::StringComparison* arg)
		{
			((::System::Void(*)(::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONMERGESETTINGS_SET_PROPERTYNAMECOMPARISON_OFFSET))(arg, nullptr);
		}

	};
}

