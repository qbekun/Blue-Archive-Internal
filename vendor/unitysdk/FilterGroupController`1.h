#pragma once
#include "unitysdk.h"

class UIFilterUnit;

#define FILTERGROUPCONTROLLER`1_GET_FILTERTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_SET_TOGGLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_GET_TOGGLES_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_GET_GROUPNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_SETFILTERUNITS_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_GET_ISWIDETOGGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FILTERGROUPCONTROLLER`1_SETFILTERUNIT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int FilterGroupController`1_TypeDefinitionIndex = 8100;

	class FilterGroupController`1 : public ::System::Xml::Schema::XsdDateTime
	{
	public:
		::System::String* groupNameLocalizeKey; // 0x0

		::System::Type* get_FilterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_GET_FILTERTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_Toggles(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_SET_TOGGLES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Toggles()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_GET_TOGGLES_OFFSET))(nullptr);
		}

		::System::String* get_GroupNameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_GET_GROUPNAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnits(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_SETFILTERUNITS_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_RESET_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWideToggle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_GET_ISWIDETOGGLE_OFFSET))(nullptr);
		}

		::System::Void SetFilterUnit(Il2CppObject* arg, UIFilterUnit* arg2)
		{
			((::System::Void(*)(Il2CppObject*, UIFilterUnit*, ::PVOID))((::PBYTE)hIl2Cpp + FILTERGROUPCONTROLLER`1_SETFILTERUNIT_OFFSET))(arg, arg2, nullptr);
		}

	};

