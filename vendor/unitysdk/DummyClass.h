#pragma once
#include "unitysdk.h"

#define DUMMYCLASS_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406D20)
#define DUMMYCLASS_SET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406D30)
#define DUMMYCLASS_GET_ADDITIONALUIDECOPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406D40)
#define DUMMYCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1406D50)
#define DUMMYCLASS_SET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1406DB0)
#define DUMMYCLASS_SET_ADDITIONALUIACTIONPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1406DC0)
#define DUMMYCLASS_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x1406DD0)

	inline static constexpr unsigned int DummyClass_TypeDefinitionIndex = 14681;

	class DummyClass : public Il2CppObject
	{
	public:
		::System::String* _UIPath_k__BackingField; // 0x10
		Il2CppObject* _AdditionalUIActionParameters_k__BackingField; // 0x18
		Il2CppObject* _AdditionalUIDecoParameters_k__BackingField; // 0x20

		Il2CppObject* get_AdditionalUIActionParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUMMYCLASS_GET_ADDITIONALUIACTIONPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_AdditionalUIDecoParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DUMMYCLASS_SET_ADDITIONALUIDECOPARAMETERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_AdditionalUIDecoParameters()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUMMYCLASS_GET_ADDITIONALUIDECOPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DUMMYCLASS_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void set_UIPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DUMMYCLASS_SET_UIPATH_OFFSET))(str, nullptr);
		}

		::System::Void set_AdditionalUIActionParameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + DUMMYCLASS_SET_ADDITIONALUIACTIONPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DUMMYCLASS_GET_UIPATH_OFFSET))(nullptr);
		}

	};

