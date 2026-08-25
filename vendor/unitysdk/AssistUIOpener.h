#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonType; }
class UIAssistManagement;

#define ASSISTUIOPENER_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x26C5E90)
#define ASSISTUIOPENER_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0x26C5EA0)
#define ASSISTUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C5EB0)
#define ASSISTUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C5EC0)
#define ASSISTUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C5EE0)
#define ASSISTUIOPENER__OPENUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x26C5FC0)

	inline static constexpr unsigned int AssistUIOpener_TypeDefinitionIndex = 6978;

	class AssistUIOpener : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x18

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTUIOPENER_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + ASSISTUIOPENER_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTUIOPENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + ASSISTUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSISTUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__6_0(UIAssistManagement* arg)
		{
			((::System::Void(*)(UIAssistManagement*, ::PVOID))((::PBYTE)hIl2Cpp + ASSISTUIOPENER__OPENUI_B__6_0_OFFSET))(arg, nullptr);
		}

	};

