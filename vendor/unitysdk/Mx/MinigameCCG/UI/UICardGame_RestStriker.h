#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Animation; }
namespace MX::GameLogic::DBModel { class MiniGameCCGCampOption; }

#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_GET_AFTERSTRIKERDBS_OFFSET UNITYSDK_OFFSET(0x1E15920)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E159B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x1E15AE0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E107E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0x1E15B70)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E15C00)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1E15FB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_CO_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E16030)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E160C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER___N__0_OFFSET UNITYSDK_OFFSET(0x1E16140)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_RestStriker_TypeDefinitionIndex = 20826;

	class UICardGame_RestStriker : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0xD8
		UIGrid* grid; // 0xE0
		MXButton* btn; // 0xE8
		Il2CppObject* healEffcets; // 0xF0
		Il2CppObject* beforeStrikerDBs; // 0xF8
		::MX::GameLogic::DBModel::MiniGameCCGCampOption* campOptionType; // 0x100
		::System::Action* callback; // 0x108
		::System::String* openAnimationClip; // 0x110
		::System::String* closeAnimationClip; // 0x118
		Il2CppObject* groups; // 0x120

		Il2CppObject* get_afterStrikerDBs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_GET_AFTERSTRIKERDBS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg, ::MX::GameLogic::DBModel::MiniGameCCGCampOption* arg, ::System::Action* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::MX::GameLogic::DBModel::MiniGameCCGCampOption*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_SETDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Directing()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_CO_DIRECTING_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_ONCLICK_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Close()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_CO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_RESTSTRIKER___N__0_OFFSET))(nullptr);
		}

	};
}

