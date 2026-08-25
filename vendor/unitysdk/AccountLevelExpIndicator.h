#pragma once
#include "unitysdk.h"

class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }
class AccountInfo;

#define ACCOUNTLEVELEXPINDICATOR_PLAYTWEENS_OFFSET UNITYSDK_OFFSET(0xB867F0)
#define ACCOUNTLEVELEXPINDICATOR_SET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0xB86850)
#define ACCOUNTLEVELEXPINDICATOR_SETLEVELEXP_OFFSET UNITYSDK_OFFSET(0xB86860)
#define ACCOUNTLEVELEXPINDICATOR_GET_OLDEXP_OFFSET UNITYSDK_OFFSET(0xB86B20)
#define ACCOUNTLEVELEXPINDICATOR_PLAY_OFFSET UNITYSDK_OFFSET(0xB86B30)
#define ACCOUNTLEVELEXPINDICATOR_SETACCOUNTDATA_OFFSET UNITYSDK_OFFSET(0xB872A0)
#define ACCOUNTLEVELEXPINDICATOR_COUPDATE_OFFSET UNITYSDK_OFFSET(0xB87230)
#define ACCOUNTLEVELEXPINDICATOR_SET_NEWLEVEL_OFFSET UNITYSDK_OFFSET(0xB87380)
#define ACCOUNTLEVELEXPINDICATOR_GET_NEWLEVEL_OFFSET UNITYSDK_OFFSET(0xB87390)
#define ACCOUNTLEVELEXPINDICATOR_SET_OLDEXP_OFFSET UNITYSDK_OFFSET(0xB873A0)
#define ACCOUNTLEVELEXPINDICATOR_GET_NEWEXP_OFFSET UNITYSDK_OFFSET(0xB873B0)
#define ACCOUNTLEVELEXPINDICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xB873C0)
#define ACCOUNTLEVELEXPINDICATOR_GET_OLDLEVEL_OFFSET UNITYSDK_OFFSET(0xB873D0)
#define ACCOUNTLEVELEXPINDICATOR_SET_NEWEXP_OFFSET UNITYSDK_OFFSET(0xB873E0)
#define ACCOUNTLEVELEXPINDICATOR_GET_ISLEVELUP_OFFSET UNITYSDK_OFFSET(0xB873F0)
#define ACCOUNTLEVELEXPINDICATOR_SETNEWBIEEXP_OFFSET UNITYSDK_OFFSET(0xB86C70)
#define ACCOUNTLEVELEXPINDICATOR_SETBONUSEXP_OFFSET UNITYSDK_OFFSET(0xB86EF0)
#define ACCOUNTLEVELEXPINDICATOR_INITTWEENS_OFFSET UNITYSDK_OFFSET(0xB87140)

	inline static constexpr unsigned int AccountLevelExpIndicator_TypeDefinitionIndex = 8544;

	class AccountLevelExpIndicator : public Il2CppObject
	{
	public:
		::System::Single gaugePlayTime; // 0x18
		UILabel* levelLabel; // 0x20
		UILabel* nameLabel; // 0x28
		UILabel* expLabel; // 0x30
		UILabel* expGaugeLabel; // 0x38
		UISlider* expSlider; // 0x40
		::UnityEngine::GameObject* expTweensRoot; // 0x48
		::UnityEngine::GameObject* normalLevelExp; // 0x50
		::UnityEngine::GameObject* maxLevelExp; // 0x58
		::UnityEngine::GameObject* bonusExpObject; // 0x60
		UILabel* bonusExpLabel; // 0x68
		::UnityEngine::GameObject* newbieBonusExp; // 0x70
		UILabel* newbieBonusExpLabel; // 0x78
		::Il2CppArray<::System::Object*>* expTweens; // 0x80
		::System::Int32 _OldLevel_k__BackingField; // 0x88
		::System::Int32 _NewLevel_k__BackingField; // 0x8C
		::System::Int64 _OldExp_k__BackingField; // 0x90
		::System::Int64 _NewExp_k__BackingField; // 0x98
		::System::Int64 NewbieExp; // 0xA0
		::System::Int64 bonusExp; // 0xA8
		::System::Int64 apExp; // 0xB0

		::System::Void PlayTweens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_PLAYTWEENS_OFFSET))(nullptr);
		}

		::System::Void set_OldLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SET_OLDLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetLevelExp(::System::Int32 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SETLEVELEXP_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int64 get_OldExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_GET_OLDEXP_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_PLAY_OFFSET))(nullptr);
		}

		::System::Void SetAccountData(AccountInfo* arg)
		{
			((::System::Void(*)(AccountInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SETACCOUNTDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_COUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_NewLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SET_NEWLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NewLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_GET_NEWLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_OldExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SET_OLDEXP_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NewExp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_GET_NEWEXP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_OldLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_GET_OLDLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_NewExp(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SET_NEWEXP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_GET_ISLEVELUP_OFFSET))(nullptr);
		}

		::System::Void SetNewbieExp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SETNEWBIEEXP_OFFSET))(nullptr);
		}

		::System::Void SetBonusExp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_SETBONUSEXP_OFFSET))(nullptr);
		}

		::System::Void InitTweens()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTLEVELEXPINDICATOR_INITTWEENS_OFFSET))(nullptr);
		}

	};

