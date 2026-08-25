#pragma once
#include "../../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonSelectSettings; }

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_START_OFFSET UNITYSDK_OFFSET(0x95212E0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_START_OFFSET UNITYSDK_OFFSET(0x95212F0)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_END_OFFSET UNITYSDK_OFFSET(0x9521300)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_END_OFFSET UNITYSDK_OFFSET(0x9521310)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_STEP_OFFSET UNITYSDK_OFFSET(0x9521320)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_STEP_OFFSET UNITYSDK_OFFSET(0x9521330)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_EXECUTEFILTER_OFFSET UNITYSDK_OFFSET(0x9521340)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9521420)
#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9521440)

namespace Newtonsoft::Json::Linq::JsonPath
{
	inline static constexpr unsigned int ArraySliceFilter_TypeDefinitionIndex = 32064;

	class ArraySliceFilter : public Il2CppObject
	{
	public:
		Il2CppObject* _Start_k__BackingField; // 0x10
		Il2CppObject* _End_k__BackingField; // 0x18
		Il2CppObject* _Step_k__BackingField; // 0x20

		Il2CppObject* get_Start()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_Start(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_START_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_End()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_END_OFFSET))(nullptr);
		}

		::System::Void set_End(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_END_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Step()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_GET_STEP_OFFSET))(nullptr);
		}

		::System::Void set_Step(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_SET_STEP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ExecuteFilter(::Newtonsoft::Json::Linq::JToken* arg, Il2CppObject* arg, ::Newtonsoft::Json::Linq::JsonSelectSettings* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::Linq::JToken*, Il2CppObject*, ::Newtonsoft::Json::Linq::JsonSelectSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_EXECUTEFILTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsValid(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_ISVALID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

