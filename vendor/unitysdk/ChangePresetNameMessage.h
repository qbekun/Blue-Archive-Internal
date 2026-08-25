#pragma once
#include "unitysdk.h"

#define CHANGEPRESETNAMEMESSAGE_GET_ISPRESETNAME_OFFSET UNITYSDK_OFFSET(0x256B290)
#define CHANGEPRESETNAMEMESSAGE_SET_ISPRESETNAME_OFFSET UNITYSDK_OFFSET(0x256B2A0)
#define CHANGEPRESETNAMEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2567750)

	inline static constexpr unsigned int ChangePresetNameMessage_TypeDefinitionIndex = 6143;

	class ChangePresetNameMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Boolean _isPresetName_k__BackingField; // 0x18

		::System::Boolean get_isPresetName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEPRESETNAMEMESSAGE_GET_ISPRESETNAME_OFFSET))(nullptr);
		}

		::System::Void set_isPresetName(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEPRESETNAMEMESSAGE_SET_ISPRESETNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEPRESETNAMEMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

