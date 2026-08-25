#pragma once
#include "../unitysdk.h"

#define BOARDGAME_CONCENTRATION_SELECTCARD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xE0B5A0)
#define BOARDGAME_CONCENTRATION_SELECTCARD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xE0B5B0)
#define BOARDGAME_CONCENTRATION_SELECTCARD_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xE0B5C0)
#define BOARDGAME_CONCENTRATION_SELECTCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B5D0)
#define BOARDGAME_CONCENTRATION_SELECTCARD_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0xE0B660)
#define BOARDGAME_CONCENTRATION_SELECTCARD_GET_SELECTEDCARDINDICES_OFFSET UNITYSDK_OFFSET(0xE0B670)
#define BOARDGAME_CONCENTRATION_SELECTCARD_SET_SELECTEDCARDINDICES_OFFSET UNITYSDK_OFFSET(0xE0B680)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_SelectCard_TypeDefinitionIndex = 10270;

	class Concentration_SelectCard : public Il2CppObject
	{
	public:
		::System::Int64 _Index_k__BackingField; // 0x38
		::System::Boolean _IsSelected_k__BackingField; // 0x40
		Il2CppObject* _SelectedCardIndices_k__BackingField; // 0x48

		::System::Int64 get_Index()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SELECTCARD_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Index(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SELECTCARD_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SELECTCARD_SET_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SELECTCARD_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SELECTCARD_GET_ISSELECTED_OFFSET))(nullptr);
		}

		Il2CppObject* get_SelectedCardIndices()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SELECTCARD_GET_SELECTEDCARDINDICES_OFFSET))(nullptr);
		}

		::System::Void set_SelectedCardIndices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_SELECTCARD_SET_SELECTEDCARDINDICES_OFFSET))(arg, nullptr);
		}

	};
}

