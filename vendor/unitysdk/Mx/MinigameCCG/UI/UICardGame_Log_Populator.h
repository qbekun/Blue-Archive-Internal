#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_Log_Unit; }
namespace UnityEngine { class Transform; }
namespace MX::MinigameCCG { class ILogData; }
namespace UnityEngine { class GameObject; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_CANREPOPULATE_OFFSET UNITYSDK_OFFSET(0x1DEE840)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DEE920)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_INITLISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1DEE980)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x1DEEBF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_ADDLOGDATA_OFFSET UNITYSDK_OFFSET(0x1DEEE20)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_ADDITEMDATA_OFFSET UNITYSDK_OFFSET(0x1DEEF50)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1DEDBB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1DEF7B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DEF810)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_PREPARELISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1DEF8F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DEFD80)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFDC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_CHECKUNITSANDREPOPULATE_OFFSET UNITYSDK_OFFSET(0x1DEFE50)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_SETSCROLLVIEWPOSITION_OFFSET UNITYSDK_OFFSET(0x1DEF2F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_CHECKREFRESH_OFFSET UNITYSDK_OFFSET(0x1DEF630)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GET_DIRECTIONMODIFIER_OFFSET UNITYSDK_OFFSET(0x1DEFE60)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GETHEIGHTFORINIT_OFFSET UNITYSDK_OFFSET(0x1DEEB40)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_Populator_TypeDefinitionIndex = 20704;

	class UICardGame_Log_Populator : public ::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::InvalidParameterException
	{
	public:
		Il2CppObject* logDatas; // 0x58
		::System::Threading::CancellationTokenSource* cancellationTokenSource; // 0x60
		::Il2CppArray<::System::Object*>* units; // 0x68

		::System::Boolean CanRepopulate(::System::Single arg, ::System::Int32 arg, ::MX::MinigameCCG::UI::UICardGame_Log_Unit* arg, ::MX::MinigameCCG::UI::UICardGame_Log_Unit* arg)
		{
			return (return (::System::Boolean(*)(::System::Single, ::System::Int32, ::MX::MinigameCCG::UI::UICardGame_Log_Unit*, ::MX::MinigameCCG::UI::UICardGame_Log_Unit*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_CANREPOPULATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void InitListItemWithIndex(::MX::MinigameCCG::UI::UICardGame_Log_Unit* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Log_Unit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_INITLISTITEMWITHINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetItemData(::MX::MinigameCCG::UI::UICardGame_Log_Unit* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Log_Unit*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_SETITEMDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLogData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_ADDLOGDATA_OFFSET))(nullptr);
		}

		::System::Void AddItemData(::MX::MinigameCCG::ILogData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ILogData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_ADDITEMDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitScrollView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_INITSCROLLVIEW_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void PrepareListItemWithIndex(::MX::MinigameCCG::UI::UICardGame_Log_Unit* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Log_Unit*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_PREPARELISTITEMWITHINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckUnitsAndRepopulate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_CHECKUNITSANDREPOPULATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetScrollViewPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_SETSCROLLVIEWPOSITION_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* CheckRefresh()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_CHECKREFRESH_OFFSET))(nullptr);
		}

		::System::Int32 get_DirectionModifier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GET_DIRECTIONMODIFIER_OFFSET))(nullptr);
		}

		::System::Single GetHeightForInit(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_POPULATOR_GETHEIGHTFORINIT_OFFSET))(arg, nullptr);
		}

	};
}

