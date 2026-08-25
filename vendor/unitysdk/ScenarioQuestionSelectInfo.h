#pragma once
#include "unitysdk.h"

#define SCENARIOQUESTIONSELECTINFO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EDF360)
#define SCENARIOQUESTIONSELECTINFO_SET_QUESTIONTITLE_OFFSET UNITYSDK_OFFSET(0x1EDF370)
#define SCENARIOQUESTIONSELECTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF380)
#define SCENARIOQUESTIONSELECTINFO_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EDF480)
#define SCENARIOQUESTIONSELECTINFO_GET_QUESTIONTITLE_OFFSET UNITYSDK_OFFSET(0x1EDF490)
#define SCENARIOQUESTIONSELECTINFO_GET_NEEDTOMOVENEXTSCENARIO_OFFSET UNITYSDK_OFFSET(0x1EDF4A0)

	inline static constexpr unsigned int ScenarioQuestionSelectInfo_TypeDefinitionIndex = 1855;

	class ScenarioQuestionSelectInfo : public Il2CppObject
	{
	public:
		::System::String* _QuestionTitle_k__BackingField; // 0x10
		::System::Boolean _IsValid_k__BackingField; // 0x18
		Il2CppObject* QuestionSelections; // 0x20
		Il2CppObject* DisabledSelections; // 0x28

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTINFO_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void set_QuestionTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTINFO_SET_QUESTIONTITLE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsValid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTINFO_SET_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::String* get_QuestionTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTINFO_GET_QUESTIONTITLE_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedToMoveNextScenario()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOQUESTIONSELECTINFO_GET_NEEDTOMOVENEXTSCENARIO_OFFSET))(nullptr);
		}

	};

