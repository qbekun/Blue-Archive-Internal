#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CFC550)
#define MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFC600)
#define MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC610)
#define MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFC690)
#define MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1CFC6A0)
#define MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFC850)

namespace MX::SaveData
{
	inline static constexpr unsigned int MinigameDefenseStageProgressSaveData_TypeDefinitionIndex = 19951;

	class MinigameDefenseStageProgressSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* ClearedMinigameDefenseStageIds; // 0x10

		::System::Boolean Contains(::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_CONTAINS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void Add(::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMEDEFENSESTAGEPROGRESSSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

