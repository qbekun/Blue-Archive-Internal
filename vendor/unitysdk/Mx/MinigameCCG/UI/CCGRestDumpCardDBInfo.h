#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGCardDB; }
namespace MX::Data::Excel { class MinigameCCGCardExcel; }

#define MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E10DF0)
#define MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_SET_CURSELECTEDREMOVELIST_OFFSET UNITYSDK_OFFSET(0x1E15160)
#define MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_SET_CARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1E15170)
#define MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E15190)
#define MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_GET_CURSELECTEDREMOVELIST_OFFSET UNITYSDK_OFFSET(0x1E151A0)
#define MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_GET_CARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1E151B0)
#define MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E151C0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int CCGRestDumpCardDBInfo_TypeDefinitionIndex = 20814;

	class CCGRestDumpCardDBInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGCardDB* _DB_k__BackingField; // 0x10
		::MX::Data::Excel::MinigameCCGCardExcel* _CardExcel_k__BackingField; // 0x18
		Il2CppObject* _CurSelectedRemoveList_k__BackingField; // 0x28

		::System::Void .ctor(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_CurSelectedRemoveList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_SET_CURSELECTEDREMOVELIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_CardExcel(::MX::Data::Excel::MinigameCCGCardExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_SET_CARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_DB(::MX::GameLogic::DBModel::MiniGameCCGCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_SET_DB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurSelectedRemoveList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_GET_CURSELECTEDREMOVELIST_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGCardExcel* get_CardExcel()
		{
			return (return (::MX::Data::Excel::MinigameCCGCardExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_GET_CARDEXCEL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCardDB* get_DB()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_CCGRESTDUMPCARDDBINFO_GET_DB_OFFSET))(nullptr);
		}

	};
}

