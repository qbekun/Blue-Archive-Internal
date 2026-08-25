#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGStageRewardType; }

#define MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1E1B380)
#define MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1E1B390)
#define MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E1B3A0)
#define MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E1B3B0)
#define MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E18D40)
#define MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E1B3C0)
#define MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1E1B3D0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGCardRewardInfo_TypeDefinitionIndex = 20834;

	class CCGCardRewardInfo : public Il2CppObject
	{
	public:
		::System::Int32 _Index_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18
		::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* _Type_k__BackingField; // 0x20

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_GET_ID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* get_Type()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGStageRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::MX::GameLogic::DBModel::MiniGameCCGStageRewardType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void set_Type(::MX::GameLogic::DBModel::MiniGameCCGStageRewardType* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGStageRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGCARDREWARDINFO_SET_INDEX_OFFSET))(arg, nullptr);
		}

	};
}

