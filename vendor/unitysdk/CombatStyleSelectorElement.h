#pragma once
#include "unitysdk.h"

class MXToggle;
namespace MX::Data::Excel { class CharacterExcel; }

#define COMBATSTYLESELECTORELEMENT_START_OFFSET UNITYSDK_OFFSET(0x22BC6D0)
#define COMBATSTYLESELECTORELEMENT_SET_ONTOGGLED_OFFSET UNITYSDK_OFFSET(0x22BC7C0)
#define COMBATSTYLESELECTORELEMENT_GET_EXCEL_OFFSET UNITYSDK_OFFSET(0x22BC7D0)
#define COMBATSTYLESELECTORELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x22BC7E0)
#define COMBATSTYLESELECTORELEMENT_GET_ONTOGGLED_OFFSET UNITYSDK_OFFSET(0x22BC7F0)
#define COMBATSTYLESELECTORELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22BC2B0)
#define COMBATSTYLESELECTORELEMENT_SET_EXCEL_OFFSET UNITYSDK_OFFSET(0x22BC800)
#define COMBATSTYLESELECTORELEMENT_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x22BC820)
#define COMBATSTYLESELECTORELEMENT_INIT_OFFSET UNITYSDK_OFFSET(0x22BBDA0)

	inline static constexpr unsigned int CombatStyleSelectorElement_TypeDefinitionIndex = 4790;

	class CombatStyleSelectorElement : public Il2CppObject
	{
	public:
		MXToggle* toggle; // 0x18
		::Il2CppArray<::System::Object*>* characterIcons; // 0x20
		::Il2CppArray<::System::Object*>* indexLabels; // 0x28
		::MX::Data::Excel::CharacterExcel* _Excel_k__BackingField; // 0x30
		Il2CppObject* _OnToggled_k__BackingField; // 0x40

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_START_OFFSET))(nullptr);
		}

		::System::Void set_OnToggled(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_SET_ONTOGGLED_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_Excel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_GET_EXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_OnToggled()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_GET_ONTOGGLED_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::CharacterExcel* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Excel(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_SET_EXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Init(::System::Int32 arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTORELEMENT_INIT_OFFSET))(arg, arg2, nullptr);
		}

	};

