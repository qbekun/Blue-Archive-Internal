#pragma once
#include "unitysdk.h"

#define SKILLVIEWERSETOPTION_GET_HIDEWHENEMPTY_OFFSET UNITYSDK_OFFSET(0xBDE860)
#define SKILLVIEWERSETOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDE870)
#define SKILLVIEWERSETOPTION_GET_HIDEFROMRIGHTCARD_OFFSET UNITYSDK_OFFSET(0xBDE880)
#define SKILLVIEWERSETOPTION_SET_HIDEWHENEMPTY_OFFSET UNITYSDK_OFFSET(0xBDE890)
#define SKILLVIEWERSETOPTION_GET_FROMMULTIFLOORRAID_OFFSET UNITYSDK_OFFSET(0xBDE8A0)
#define SKILLVIEWERSETOPTION_SET_FROMMULTIFLOORRAID_OFFSET UNITYSDK_OFFSET(0xBDE8B0)
#define SKILLVIEWERSETOPTION_SET_HIDEFROMRIGHTCARD_OFFSET UNITYSDK_OFFSET(0xBDE8C0)

	inline static constexpr unsigned int SkillViewerSetOption_TypeDefinitionIndex = 8705;

	class SkillViewerSetOption : public Il2CppObject
	{
	public:
		::System::Boolean _HideWhenEmpty_k__BackingField; // 0x10
		::System::Boolean _HideFromRightCard_k__BackingField; // 0x11
		::System::Boolean _FromMultiFloorRaid_k__BackingField; // 0x12

		::System::Boolean get_HideWhenEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLVIEWERSETOPTION_GET_HIDEWHENEMPTY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLVIEWERSETOPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_HideFromRightCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLVIEWERSETOPTION_GET_HIDEFROMRIGHTCARD_OFFSET))(nullptr);
		}

		::System::Void set_HideWhenEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLVIEWERSETOPTION_SET_HIDEWHENEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_FromMultiFloorRaid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLVIEWERSETOPTION_GET_FROMMULTIFLOORRAID_OFFSET))(nullptr);
		}

		::System::Void set_FromMultiFloorRaid(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLVIEWERSETOPTION_SET_FROMMULTIFLOORRAID_OFFSET))(arg, nullptr);
		}

		::System::Void set_HideFromRightCard(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLVIEWERSETOPTION_SET_HIDEFROMRIGHTCARD_OFFSET))(arg, nullptr);
		}

	};

