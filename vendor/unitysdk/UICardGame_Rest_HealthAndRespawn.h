#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;
class MXButton;
namespace MX::GameLogic::DBModel { class MiniGameCCGCampOption; }
namespace MX::GameLogic::DBModel { class MiniGameCCGSaveDB; }
class MinigameCCGObject;

#define UICARDGAME_REST_HEALTHANDRESPAWN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA504C0)
#define UICARDGAME_REST_HEALTHANDRESPAWN_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0xA504D0)
#define UICARDGAME_REST_HEALTHANDRESPAWN_SETDATA_OFFSET UNITYSDK_OFFSET(0xA50520)
#define UICARDGAME_REST_HEALTHANDRESPAWN_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0xA508F0)
#define UICARDGAME_REST_HEALTHANDRESPAWN_CO_DIRECTING_OFFSET UNITYSDK_OFFSET(0xA50970)
#define UICARDGAME_REST_HEALTHANDRESPAWN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA50A20)

	inline static constexpr unsigned int UICardGame_Rest_HealthAndRespawn_TypeDefinitionIndex = 473;

	class UICardGame_Rest_HealthAndRespawn : public Il2CppObject
	{
	public:
		UILabel* title; // 0x18
		UIGrid* grid; // 0x20
		Il2CppObject* characters; // 0x28
		MXButton* confirmBtn; // 0x30
		::System::Action* callback; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_HEALTHANDRESPAWN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_HEALTHANDRESPAWN_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::MiniGameCCGCampOption* arg, ::MX::GameLogic::DBModel::MiniGameCCGSaveDB* arg2)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCampOption*, ::MX::GameLogic::DBModel::MiniGameCCGSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_HEALTHANDRESPAWN_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return ((MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_HEALTHANDRESPAWN_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Directing(::MX::GameLogic::DBModel::MiniGameCCGCampOption* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::GameLogic::DBModel::MiniGameCCGCampOption*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_HEALTHANDRESPAWN_CO_DIRECTING_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICARDGAME_REST_HEALTHANDRESPAWN_AWAKE_OFFSET))(nullptr);
		}

	};

