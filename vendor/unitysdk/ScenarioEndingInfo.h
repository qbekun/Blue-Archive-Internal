#pragma once
#include "unitysdk.h"

class ScenarioEndingType;

#define SCENARIOENDINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE700)
#define SCENARIOENDINGINFO_GET_ENDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EDE760)
#define SCENARIOENDINGINFO_SET_ENDINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EDE770)
#define SCENARIOENDINGINFO_GET_ENDINGTEXT_OFFSET UNITYSDK_OFFSET(0x1EDE780)
#define SCENARIOENDINGINFO_SET_ENDINGTEXT_OFFSET UNITYSDK_OFFSET(0x1EDE790)

	inline static constexpr unsigned int ScenarioEndingInfo_TypeDefinitionIndex = 1849;

	class ScenarioEndingInfo : public Il2CppObject
	{
	public:
		ScenarioEndingType* _EndingType_k__BackingField; // 0x10
		::System::String* _EndingText_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENDINGINFO_.CTOR_OFFSET))(nullptr);
		}

		ScenarioEndingType* get_EndingType()
		{
			return ((ScenarioEndingType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENDINGINFO_GET_ENDINGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EndingType(ScenarioEndingType* arg)
		{
			((::System::Void(*)(ScenarioEndingType*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENDINGINFO_SET_ENDINGTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* get_EndingText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENDINGINFO_GET_ENDINGTEXT_OFFSET))(nullptr);
		}

		::System::Void set_EndingText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENDINGINFO_SET_ENDINGTEXT_OFFSET))(str, nullptr);
		}

	};

