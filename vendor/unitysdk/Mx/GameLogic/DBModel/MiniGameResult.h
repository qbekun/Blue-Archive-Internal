#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EventContentType; }

#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003180)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_HPBONUSSCORE_OFFSET UNITYSDK_OFFSET(0x1003190)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x10031A0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_FEVERCOUNT_OFFSET UNITYSDK_OFFSET(0x10031B0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_NOTECOUNT_OFFSET UNITYSDK_OFFSET(0x10031C0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_COMBOCOUNT_OFFSET UNITYSDK_OFFSET(0x10031D0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_ALLCOMBO_OFFSET UNITYSDK_OFFSET(0x10031E0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_ALLCOMBO_OFFSET UNITYSDK_OFFSET(0x10031F0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_NOTECOUNT_OFFSET UNITYSDK_OFFSET(0x1003200)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_CRITICALCOUNT_OFFSET UNITYSDK_OFFSET(0x1003210)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1003220)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_CRITICALCOUNT_OFFSET UNITYSDK_OFFSET(0x10032A0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x10032B0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x10032C0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x10032D0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_FEVERCOUNT_OFFSET UNITYSDK_OFFSET(0x10032E0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_HPBONUSSCORE_OFFSET UNITYSDK_OFFSET(0x10032F0)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1003300)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x1003310)
#define MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_COMBOCOUNT_OFFSET UNITYSDK_OFFSET(0x1003320)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int MiniGameResult_TypeDefinitionIndex = 12658;

	class MiniGameResult : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18
		::System::Int64 _TotalScore_k__BackingField; // 0x20
		::System::Int64 _ComboCount_k__BackingField; // 0x28
		::System::Int64 _FeverCount_k__BackingField; // 0x30
		::System::Boolean _AllCombo_k__BackingField; // 0x38
		::System::Int64 _HPBonusScore_k__BackingField; // 0x40
		::System::Int64 _NoteCount_k__BackingField; // 0x48
		::System::Int64 _CriticalCount_k__BackingField; // 0x50

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_HPBonusScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_HPBONUSSCORE_OFFSET))(nullptr);
		}

		::System::Void set_TotalScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_TOTALSCORE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FeverCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_FEVERCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_NoteCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_NOTECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ComboCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_COMBOCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllCombo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_ALLCOMBO_OFFSET))(nullptr);
		}

		::System::Void set_AllCombo(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_ALLCOMBO_OFFSET))(arg, nullptr);
		}

		::System::Void set_NoteCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_NOTECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_CriticalCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_CRITICALCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5, ::System::Boolean arg6, ::System::Int64 arg7, ::System::Int64 arg8, ::System::Int64 arg9)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, nullptr);
		}

		::System::Int64 get_CriticalCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_CRITICALCOUNT_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_ContentType()
		{
			return ((::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_FeverCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_FEVERCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_HPBonusScore(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_HPBONUSSCORE_OFFSET))(arg, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TotalScore()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_TOTALSCORE_OFFSET))(nullptr);
		}

		::System::Int64 get_ComboCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_MINIGAMERESULT_GET_COMBOCOUNT_OFFSET))(nullptr);
		}

	};
}

