#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class SkillData; }

#define MX_MINIGAMESHOOTING_BLACKBOARD_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x145CF40)
#define MX_MINIGAMESHOOTING_BLACKBOARD_GET_PUBLICSKILLBOARD_OFFSET UNITYSDK_OFFSET(0x145CFA0)
#define MX_MINIGAMESHOOTING_BLACKBOARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x145CFB0)
#define MX_MINIGAMESHOOTING_BLACKBOARD_GETPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x145D120)
#define MX_MINIGAMESHOOTING_BLACKBOARD_GETBOOL_OFFSET UNITYSDK_OFFSET(0x145D160)
#define MX_MINIGAMESHOOTING_BLACKBOARD_GETAVAILABLESKILL_OFFSET UNITYSDK_OFFSET(0x145D230)
#define MX_MINIGAMESHOOTING_BLACKBOARD_SETSTRING_OFFSET UNITYSDK_OFFSET(0x145D360)
#define MX_MINIGAMESHOOTING_BLACKBOARD_SETBOOL_OFFSET UNITYSDK_OFFSET(0x145D3C0)
#define MX_MINIGAMESHOOTING_BLACKBOARD_INITPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x145D420)
#define MX_MINIGAMESHOOTING_BLACKBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0x145D730)
#define MX_MINIGAMESHOOTING_BLACKBOARD_USEPUBLICSKILL_OFFSET UNITYSDK_OFFSET(0x145D810)
#define MX_MINIGAMESHOOTING_BLACKBOARD_SET_PUBLICSKILLBOARD_OFFSET UNITYSDK_OFFSET(0x145D860)
#define MX_MINIGAMESHOOTING_BLACKBOARD_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x145D870)
#define MX_MINIGAMESHOOTING_BLACKBOARD_GETINT_OFFSET UNITYSDK_OFFSET(0x145D940)
#define MX_MINIGAMESHOOTING_BLACKBOARD_GETSTRING_OFFSET UNITYSDK_OFFSET(0x145DA10)
#define MX_MINIGAMESHOOTING_BLACKBOARD_SETINT_OFFSET UNITYSDK_OFFSET(0x145DAE0)

namespace MX::MinigameShooting
{
	inline static constexpr unsigned int BlackBoard_TypeDefinitionIndex = 15047;

	class BlackBoard : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* Target; // 0x10
		::Il2CppArray<::System::Object*>* _PublicSkillBoard_k__BackingField; // 0x18
		Il2CppObject* intDic; // 0x20
		Il2CppObject* floatDic; // 0x28
		Il2CppObject* boolDic; // 0x30
		Il2CppObject* stringDic; // 0x38

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PublicSkillBoard()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_GET_PUBLICSKILLBOARD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_.CTOR_OFFSET))(nullptr);
		}

		::MX::MinigameShooting::SkillData* GetPublicSkill(::System::Int32 arg)
		{
			return ((::MX::MinigameShooting::SkillData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_GETPUBLICSKILL_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetBool(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_GETBOOL_OFFSET))(str, nullptr);
		}

		::System::Int32 GetAvailableSkill()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_GETAVAILABLESKILL_OFFSET))(nullptr);
		}

		::System::Void SetString(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_SETSTRING_OFFSET))(str, str2, nullptr);
		}

		::System::Void SetBool(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_SETBOOL_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitPublicSkill(::MX::MinigameShooting::Character* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::Character*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_INITPUBLICSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UsePublicSkill(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_USEPUBLICSKILL_OFFSET))(arg, nullptr);
		}

		::System::Void set_PublicSkillBoard(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_SET_PUBLICSKILLBOARD_OFFSET))(arg, nullptr);
		}

		::System::Single GetFloat(::System::String* str)
		{
			return ((::System::Single(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_GETFLOAT_OFFSET))(str, nullptr);
		}

		::System::Int32 GetInt(::System::String* str)
		{
			return ((::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_GETINT_OFFSET))(str, nullptr);
		}

		::System::String* GetString(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_GETSTRING_OFFSET))(str, nullptr);
		}

		::System::Void SetInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMESHOOTING_BLACKBOARD_SETINT_OFFSET))(str, arg, nullptr);
		}

	};
}

