#pragma once
#include "unitysdk.h"

#define SCENARIOQUESTIONSELECTMESSAGE_GET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x27E4050)
#define SCENARIOQUESTIONSELECTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E4060)
#define SCENARIOQUESTIONSELECTMESSAGE_SET_SELECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x27E4090)
#define SCENARIOQUESTIONSELECTMESSAGE_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x27E40A0)
#define SCENARIOQUESTIONSELECTMESSAGE_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x27E40B0)

	inline static constexpr unsigned int ScenarioQuestionSelectMessage_TypeDefinitionIndex = 7677;

	class ScenarioQuestionSelectMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int64 _SelectionGroup_k__BackingField; // 0x18
		::System::Single _Delay_k__BackingField; // 0x20

		::System::Int64 get_SelectionGroup()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTMESSAGE_GET_SELECTIONGROUP_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SelectionGroup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTMESSAGE_SET_SELECTIONGROUP_OFFSET))(arg, nullptr);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTMESSAGE_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTMESSAGE_SET_DELAY_OFFSET))(arg, nullptr);
		}

	};

