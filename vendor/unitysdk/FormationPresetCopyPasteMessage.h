#pragma once
#include "unitysdk.h"

#define FORMATIONPRESETCOPYPASTEMESSAGE_GET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x2569790)
#define FORMATIONPRESETCOPYPASTEMESSAGE_GET_ISCOPY_OFFSET UNITYSDK_OFFSET(0x25697A0)
#define FORMATIONPRESETCOPYPASTEMESSAGE_GET_ELEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x25697B0)
#define FORMATIONPRESETCOPYPASTEMESSAGE_SET_ISCOPY_OFFSET UNITYSDK_OFFSET(0x25697C0)
#define FORMATIONPRESETCOPYPASTEMESSAGE_SET_ELEMENTINDEX_OFFSET UNITYSDK_OFFSET(0x25697D0)
#define FORMATIONPRESETCOPYPASTEMESSAGE_SET_TABINDEX_OFFSET UNITYSDK_OFFSET(0x25697E0)
#define FORMATIONPRESETCOPYPASTEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2565A90)

	inline static constexpr unsigned int FormationPresetCopyPasteMessage_TypeDefinitionIndex = 6137;

	class FormationPresetCopyPasteMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Int32 _TabIndex_k__BackingField; // 0x18
		::System::Int32 _ElementIndex_k__BackingField; // 0x1C
		::System::Boolean _IsCopy_k__BackingField; // 0x20

		::System::Int32 get_TabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETCOPYPASTEMESSAGE_GET_TABINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCopy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETCOPYPASTEMESSAGE_GET_ISCOPY_OFFSET))(nullptr);
		}

		::System::Int32 get_ElementIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETCOPYPASTEMESSAGE_GET_ELEMENTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_IsCopy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETCOPYPASTEMESSAGE_SET_ISCOPY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ElementIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETCOPYPASTEMESSAGE_SET_ELEMENTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_TabIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETCOPYPASTEMESSAGE_SET_TABINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONPRESETCOPYPASTEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

