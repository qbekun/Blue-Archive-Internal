#pragma once
#include "unitysdk.h"

class UIInputItemController;

#define CLICKEXPENDABLESMESSAGE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xC1EC70)
#define CLICKEXPENDABLESMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1EC80)
#define CLICKEXPENDABLESMESSAGE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0xC1ECB0)

	inline static constexpr unsigned int ClickExpendablesMessage_TypeDefinitionIndex = 8868;

	class ClickExpendablesMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UIInputItemController* _Material_k__BackingField; // 0x18

		::System::Void set_Material(UIInputItemController* arg)
		{
			((::System::Void(*)(UIInputItemController*, ::PVOID))((::PBYTE)hIl2Cpp + CLICKEXPENDABLESMESSAGE_SET_MATERIAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(UIInputItemController* arg)
		{
			((::System::Void(*)(UIInputItemController*, ::PVOID))((::PBYTE)hIl2Cpp + CLICKEXPENDABLESMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		UIInputItemController* get_Material()
		{
			return ((UIInputItemController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKEXPENDABLESMESSAGE_GET_MATERIAL_OFFSET))(nullptr);
		}

	};

