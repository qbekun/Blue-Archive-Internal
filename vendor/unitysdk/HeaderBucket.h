#pragma once
#include "unitysdk.h"

#define HEADERBUCKET_.CTOR_OFFSET UNITYSDK_OFFSET(0x981F540)
#define HEADERBUCKET_GET_HASSTRINGVALUES_OFFSET UNITYSDK_OFFSET(0x9820090)
#define HEADERBUCKET_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x981F590)
#define HEADERBUCKET_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x98200E0)
#define HEADERBUCKET_PARSEDTOSTRING_OFFSET UNITYSDK_OFFSET(0x9820050)

	inline static constexpr unsigned int HeaderBucket_TypeDefinitionIndex = 36684;

	class HeaderBucket : public Il2CppObject
	{
	public:
		::System::Object* Parsed; // 0x10
		Il2CppObject* values; // 0x18
		Il2CppObject* CustomToString; // 0x20

		::System::Void .ctor(::System::Object* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEADERBUCKET_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HasStringValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEADERBUCKET_GET_HASSTRINGVALUES_OFFSET))(nullptr);
		}

		Il2CppObject* get_Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEADERBUCKET_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void set_Values(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HEADERBUCKET_SET_VALUES_OFFSET))(arg, nullptr);
		}

		::System::String* ParsedToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEADERBUCKET_PARSEDTOSTRING_OFFSET))(nullptr);
		}

	};

