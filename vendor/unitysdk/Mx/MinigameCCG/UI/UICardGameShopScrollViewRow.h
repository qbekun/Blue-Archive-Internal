#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class MinigameCCGInfoExcel; }

#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1E25A60)
#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_INFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1E25A70)
#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_NEXTROWNODECOUNT_OFFSET UNITYSDK_OFFSET(0x1E25A90)
#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_PERKEXCELS_OFFSET UNITYSDK_OFFSET(0x1E25AA0)
#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_PERKEXCELS_OFFSET UNITYSDK_OFFSET(0x1E25AB0)
#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_NEXTROWNODECOUNT_OFFSET UNITYSDK_OFFSET(0x1E25AC0)
#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1E25AD0)
#define MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_INFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1E25AE0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGameShopScrollViewRow_TypeDefinitionIndex = 20865;

	class UICardGameShopScrollViewRow : public Il2CppObject
	{
	public:
		::System::Int32 _Row_k__BackingField; // 0x10
		::MX::Data::Excel::MinigameCCGInfoExcel* _InfoExcel_k__BackingField; // 0x18
		Il2CppObject* _PerkExcels_k__BackingField; // 0x28
		::System::Int32 _NextRowNodeCount_k__BackingField; // 0x30

		::System::Int32 get_Row()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_ROW_OFFSET))(nullptr);
		}

		::System::Void set_InfoExcel(::MX::Data::Excel::MinigameCCGInfoExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_INFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_NextRowNodeCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_NEXTROWNODECOUNT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PerkExcels()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_PERKEXCELS_OFFSET))(nullptr);
		}

		::System::Void set_PerkExcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_PERKEXCELS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NextRowNodeCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_NEXTROWNODECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Row(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_SET_ROW_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGInfoExcel* get_InfoExcel()
		{
			return (return (::MX::Data::Excel::MinigameCCGInfoExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAMESHOPSCROLLVIEWROW_GET_INFOEXCEL_OFFSET))(nullptr);
		}

	};
}

