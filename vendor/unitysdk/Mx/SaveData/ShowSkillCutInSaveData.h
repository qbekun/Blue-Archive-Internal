#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1CF1240)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1CF1310)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_HASBEENTODAY_OFFSET UNITYSDK_OFFSET(0x1CF1470)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_HASBEENTODAY_OFFSET UNITYSDK_OFFSET(0x1CF1580)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_SKILLCUTINUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1CF1330)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF15A0)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF16D0)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF16E0)
#define MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1650)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowSkillCutInSaveData_TypeDefinitionIndex = 19893;

	class ShowSkillCutInSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x10

		::System::Void Add(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_ADD_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasBeenToday(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_HASBEENTODAY_OFFSET))(str, nullptr);
		}

		::System::Boolean HasBeenToday(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_HASBEENTODAY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* SkillCutInUniqueName(::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_SKILLCUTINUNIQUENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWSKILLCUTINSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

