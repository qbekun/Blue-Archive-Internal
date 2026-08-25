#pragma once
#include "unitysdk.h"

class ScenarioTitleType;

#define SCENARIOTITLEINFO_SET_TITLETYPE_OFFSET UNITYSDK_OFFSET(0x1EDE5B0)
#define SCENARIOTITLEINFO_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1EDE5C0)
#define SCENARIOTITLEINFO_GET_TITLENUMBER_OFFSET UNITYSDK_OFFSET(0x1EDE5D0)
#define SCENARIOTITLEINFO_SET_TITLENUMBER_OFFSET UNITYSDK_OFFSET(0x1EDE5E0)
#define SCENARIOTITLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE5F0)
#define SCENARIOTITLEINFO_GET_TITLETYPE_OFFSET UNITYSDK_OFFSET(0x1EDE660)
#define SCENARIOTITLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDE670)
#define SCENARIOTITLEINFO_GET_USEDEFAULTBG_OFFSET UNITYSDK_OFFSET(0x1EDE6E0)
#define SCENARIOTITLEINFO_SET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1EDE6F0)

	inline static constexpr unsigned int ScenarioTitleInfo_TypeDefinitionIndex = 1847;

	class ScenarioTitleInfo : public Il2CppObject
	{
	public:
		ScenarioTitleType* _TitleType_k__BackingField; // 0x10
		::System::String* _TitleNumber_k__BackingField; // 0x18
		::System::String* _TitleText_k__BackingField; // 0x20

		::System::Void set_TitleType(ScenarioTitleType* arg)
		{
			((::System::Void(*)(ScenarioTitleType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_SET_TITLETYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_TitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_GET_TITLETEXT_OFFSET))(nullptr);
		}

		::System::String* get_TitleNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_GET_TITLENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_TitleNumber(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_SET_TITLENUMBER_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_.CTOR_OFFSET))(nullptr);
		}

		ScenarioTitleType* get_TitleType()
		{
			return ((ScenarioTitleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_GET_TITLETYPE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_UseDefaultBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_GET_USEDEFAULTBG_OFFSET))(nullptr);
		}

		::System::Void set_TitleText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOTITLEINFO_SET_TITLETEXT_OFFSET))(str, nullptr);
		}

	};

