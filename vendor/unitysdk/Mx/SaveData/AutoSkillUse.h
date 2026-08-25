#pragma once
#include "../../unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }

#define MX_SAVEDATA_AUTOSKILLUSE_GETAUTOUSESKILL_OFFSET UNITYSDK_OFFSET(0x1CF2790)
#define MX_SAVEDATA_AUTOSKILLUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2810)
#define MX_SAVEDATA_AUTOSKILLUSE_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF2820)
#define MX_SAVEDATA_AUTOSKILLUSE_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF2A40)
#define MX_SAVEDATA_AUTOSKILLUSE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2AF0)
#define MX_SAVEDATA_AUTOSKILLUSE_SETAUTOUSESKILL_OFFSET UNITYSDK_OFFSET(0x1CF2B00)

namespace MX::SaveData
{
	inline static constexpr unsigned int AutoSkillUse_TypeDefinitionIndex = 19902;

	class AutoSkillUse : public Il2CppObject
	{
	public:
		Il2CppObject* Table; // 0x10

		::System::Boolean GetAutoUseSkill(::MX::Logic::Data::BattleTypes* arg)
		{
			return (return (::System::Boolean(*)(::MX::Logic::Data::BattleTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUTOSKILLUSE_GETAUTOUSESKILL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUTOSKILLUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUTOSKILLUSE_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUTOSKILLUSE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUTOSKILLUSE_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetAutoUseSkill(::MX::Logic::Data::BattleTypes* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleTypes*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUTOSKILLUSE_SETAUTOUSESKILL_OFFSET))(arg, arg, nullptr);
		}

	};
}

