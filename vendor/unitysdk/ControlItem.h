#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class InternedString; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::Utilities { class PrimitiveValue; }

#define CONTROLITEM_SET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F704C0)
#define CONTROLITEM_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F704D0)
#define CONTROLITEM_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9F704E0)
#define CONTROLITEM_GET_USESTATEFROM_OFFSET UNITYSDK_OFFSET(0x9F704F0)
#define CONTROLITEM_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9F70500)
#define CONTROLITEM_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9F70510)
#define CONTROLITEM_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F70520)
#define CONTROLITEM_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x9F70530)
#define CONTROLITEM_SET_ISSYNTHETIC_OFFSET UNITYSDK_OFFSET(0x9F6DB70)
#define CONTROLITEM_SET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F6DB10)
#define CONTROLITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9F70540)
#define CONTROLITEM_GET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9F70550)
#define CONTROLITEM_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x9F6A8E0)
#define CONTROLITEM_SET_USESTATEFROM_OFFSET UNITYSDK_OFFSET(0x9F70560)
#define CONTROLITEM_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9F70570)
#define CONTROLITEM_SET_USAGES_OFFSET UNITYSDK_OFFSET(0x9F70580)
#define CONTROLITEM_SET_ISNOISY_OFFSET UNITYSDK_OFFSET(0x9F6DB30)
#define CONTROLITEM_SET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x9F705A0)
#define CONTROLITEM_GET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET UNITYSDK_OFFSET(0x9F705B0)
#define CONTROLITEM_GET_SHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F705C0)
#define CONTROLITEM_GET_ISSYNTHETIC_OFFSET UNITYSDK_OFFSET(0x9F705D0)
#define CONTROLITEM_SET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9F705E0)
#define CONTROLITEM_GET_ISMODIFYINGEXISTINGCONTROL_OFFSET UNITYSDK_OFFSET(0x9F70600)
#define CONTROLITEM_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9F70610)
#define CONTROLITEM_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9F70620)
#define CONTROLITEM_SET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x9F70630)
#define CONTROLITEM_GET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x9F70650)
#define CONTROLITEM_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9F70660)
#define CONTROLITEM_GET_ALIASES_OFFSET UNITYSDK_OFFSET(0x9F70670)
#define CONTROLITEM_SET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x9F6DB50)
#define CONTROLITEM_SET_ARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x9F70680)
#define CONTROLITEM_MERGE_OFFSET UNITYSDK_OFFSET(0x9F6F9D0)
#define CONTROLITEM_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x9F706B0)
#define CONTROLITEM_SET_BIT_OFFSET UNITYSDK_OFFSET(0x9F706C0)
#define CONTROLITEM_SET_VARIANTS_OFFSET UNITYSDK_OFFSET(0x9F706D0)
#define CONTROLITEM_GET_ARRAYSIZE_OFFSET UNITYSDK_OFFSET(0x9F706F0)
#define CONTROLITEM_GET_DONTRESET_OFFSET UNITYSDK_OFFSET(0x9F706A0)
#define CONTROLITEM_GET_USAGES_OFFSET UNITYSDK_OFFSET(0x9F70700)
#define CONTROLITEM_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x9F70710)
#define CONTROLITEM_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9F70720)
#define CONTROLITEM_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x9F70730)
#define CONTROLITEM_SET_ALIASES_OFFSET UNITYSDK_OFFSET(0x9F70750)
#define CONTROLITEM_GET_ISNOISY_OFFSET UNITYSDK_OFFSET(0x9F70690)
#define CONTROLITEM_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x9F70770)
#define CONTROLITEM_GET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x9F70780)
#define CONTROLITEM_SET_DEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x9F70790)
#define CONTROLITEM_SET_ISMODIFYINGEXISTINGCONTROL_OFFSET UNITYSDK_OFFSET(0x9F6DAF0)
#define CONTROLITEM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x9F707A0)
#define CONTROLITEM_GET_BIT_OFFSET UNITYSDK_OFFSET(0x9F707B0)
#define CONTROLITEM_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x9F707C0)

	inline static constexpr unsigned int ControlItem_TypeDefinitionIndex = 28848;

	class ControlItem : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::InternedString* _name_k__BackingField; // 0x10
		::UnityEngine::InputSystem::Utilities::InternedString* _layout_k__BackingField; // 0x20
		::UnityEngine::InputSystem::Utilities::InternedString* _variants_k__BackingField; // 0x30
		::System::String* _useStateFrom_k__BackingField; // 0x40
		::System::String* _displayName_k__BackingField; // 0x48
		::System::String* _shortDisplayName_k__BackingField; // 0x50
		Il2CppObject* _usages_k__BackingField; // 0x58
		Il2CppObject* _aliases_k__BackingField; // 0x68
		Il2CppObject* _parameters_k__BackingField; // 0x78
		Il2CppObject* _processors_k__BackingField; // 0x88
		::System::UInt32 _offset_k__BackingField; // 0x98
		::System::UInt32 _bit_k__BackingField; // 0x9C
		::System::UInt32 _sizeInBits_k__BackingField; // 0xA0
		::UnityEngine::InputSystem::Utilities::FourCC* _format_k__BackingField; // 0xA4
		Flags* _flags_k__BackingField; // 0xA8
		::System::Int32 _arraySize_k__BackingField; // 0xAC
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* _defaultState_k__BackingField; // 0xB0
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* _minValue_k__BackingField; // 0xC0
		::UnityEngine::InputSystem::Utilities::PrimitiveValue* _maxValue_k__BackingField; // 0xD0

		::System::Void set_shortDisplayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_SHORTDISPLAYNAME_OFFSET))(str, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_format()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_FORMAT_OFFSET))(nullptr);
		}

		::System::Void set_flags(Flags* arg)
		{
			((::System::Void(*)(Flags*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::String* get_useStateFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_USESTATEFROM_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue* get_minValue()
		{
			return (return (::UnityEngine::InputSystem::Utilities::PrimitiveValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_MINVALUE_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* get_layout()
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_LAYOUT_OFFSET))(nullptr);
		}

		::System::Void set_displayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_DISPLAYNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_minValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_MINVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isSynthetic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_ISSYNTHETIC_OFFSET))(arg, nullptr);
		}

		::System::Void set_isFirstDefinedInThisLayout(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* get_name()
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_NAME_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue* get_defaultState()
		{
			return (return (::UnityEngine::InputSystem::Utilities::PrimitiveValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_DEFAULTSTATE_OFFSET))(nullptr);
		}

		::System::Boolean get_isArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_ISARRAY_OFFSET))(nullptr);
		}

		::System::Void set_useStateFrom(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_USESTATEFROM_OFFSET))(str, nullptr);
		}

		::System::Void set_name(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_NAME_OFFSET))(arg, nullptr);
		}

		::System::Void set_usages(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_USAGES_OFFSET))(arg, nullptr);
		}

		::System::Void set_isNoisy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_ISNOISY_OFFSET))(arg, nullptr);
		}

		::System::Void set_sizeInBits(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_SIZEINBITS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isFirstDefinedInThisLayout()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_ISFIRSTDEFINEDINTHISLAYOUT_OFFSET))(nullptr);
		}

		::System::String* get_shortDisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_SHORTDISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_isSynthetic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_ISSYNTHETIC_OFFSET))(nullptr);
		}

		::System::Void set_layout(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_LAYOUT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isModifyingExistingControl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_ISMODIFYINGEXISTINGCONTROL_OFFSET))(nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		Il2CppObject* get_parameters()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_processors(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_PROCESSORS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::InternedString* get_variants()
		{
			return (return (::UnityEngine::InputSystem::Utilities::InternedString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_VARIANTS_OFFSET))(nullptr);
		}

		::System::Void set_maxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_MAXVALUE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_aliases()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_ALIASES_OFFSET))(nullptr);
		}

		::System::Void set_dontReset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_DONTRESET_OFFSET))(arg, nullptr);
		}

		::System::Void set_arraySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_ARRAYSIZE_OFFSET))(arg, nullptr);
		}

		ControlItem* Merge(ControlItem* arg)
		{
			return (return (ControlItem*(*)(ControlItem*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_MERGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_processors()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_PROCESSORS_OFFSET))(nullptr);
		}

		::System::Void set_bit(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_BIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_variants(::UnityEngine::InputSystem::Utilities::InternedString* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::InternedString*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_VARIANTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_arraySize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_ARRAYSIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_dontReset()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_DONTRESET_OFFSET))(nullptr);
		}

		Il2CppObject* get_usages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_USAGES_OFFSET))(nullptr);
		}

		::System::Void set_offset(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_OFFSET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue* get_maxValue()
		{
			return (return (::UnityEngine::InputSystem::Utilities::PrimitiveValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Void set_parameters(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_PARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void set_aliases(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_ALIASES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isNoisy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_ISNOISY_OFFSET))(nullptr);
		}

		::System::Void set_format(::UnityEngine::InputSystem::Utilities::FourCC* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::FourCC*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_FORMAT_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_sizeInBits()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_SIZEINBITS_OFFSET))(nullptr);
		}

		::System::Void set_defaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Utilities::PrimitiveValue*, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_DEFAULTSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isModifyingExistingControl(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_SET_ISMODIFYINGEXISTINGCONTROL_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_offset()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_OFFSET_OFFSET))(nullptr);
		}

		::System::UInt32 get_bit()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_BIT_OFFSET))(nullptr);
		}

		Flags* get_flags()
		{
			return (return (Flags*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTROLITEM_GET_FLAGS_OFFSET))(nullptr);
		}

	};

