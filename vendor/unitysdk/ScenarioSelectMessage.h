#pragma once
#include "unitysdk.h"

#define SCENARIOSELECTMESSAGE_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x27E8AF0)
#define SCENARIOSELECTMESSAGE_SET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x27E8B00)
#define SCENARIOSELECTMESSAGE_GET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x27E8B10)
#define SCENARIOSELECTMESSAGE_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x27E8B20)
#define SCENARIOSELECTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E8B30)

	inline static constexpr unsigned int ScenarioSelectMessage_TypeDefinitionIndex = 7694;

	class ScenarioSelectMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _SelectionGroup_k__BackingField; // 0x18
		::System::Single _Delay_k__BackingField; // 0x20

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTMESSAGE_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_SelectionGroup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTMESSAGE_SET_SELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SelectionGroup()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTMESSAGE_GET_SELECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTMESSAGE_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOSELECTMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

