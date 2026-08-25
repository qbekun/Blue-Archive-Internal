#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPPushPolicy; }

#define NPA_NXPPUSHPOLICIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BBABE0)
#define NPA_NXPPUSHPOLICIES_PUTGAMEPOLICY_OFFSET UNITYSDK_OFFSET(0x9BBAC70)
#define NPA_NXPPUSHPOLICIES_SETENABLEADPOLICY_OFFSET UNITYSDK_OFFSET(0x9BBACD0)
#define NPA_NXPPUSHPOLICIES_SETENABLENIGHTPOLICY_OFFSET UNITYSDK_OFFSET(0x9BBAE60)
#define NPA_NXPPUSHPOLICIES_GETADPOLICY_OFFSET UNITYSDK_OFFSET(0x9BBAEF0)
#define NPA_NXPPUSHPOLICIES_GETNIGHTPOLICY_OFFSET UNITYSDK_OFFSET(0x9BBAF00)
#define NPA_NXPPUSHPOLICIES_GETGAMEPOLICY_OFFSET UNITYSDK_OFFSET(0x9BBAF10)
#define NPA_NXPPUSHPOLICIES_GETGAMEPOLICYLIST_OFFSET UNITYSDK_OFFSET(0x9BBAF90)
#define NPA_NXPPUSHPOLICIES_HASGAMEPOLICIES_OFFSET UNITYSDK_OFFSET(0x9BBB020)
#define NPA_NXPPUSHPOLICIES_SETGAMEPOLICYENABLE_OFFSET UNITYSDK_OFFSET(0x9BBB070)
#define NPA_NXPPUSHPOLICIES_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9BBB160)

namespace NPA
{
	inline static constexpr unsigned int NXPPushPolicies_TypeDefinitionIndex = 25492;

	class NXPPushPolicies : public Il2CppObject
	{
	public:
		::System::String* AD_PUSH_KEY; // 0x0
		::System::String* NIGHT_PUSH_KEY; // 0x0
		::NPA::NXPPushPolicy* adPolicy; // 0x10
		::NPA::NXPPushPolicy* nightPolicy; // 0x18
		Il2CppObject* gamePolicies; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PutGamePolicy(::NPA::NXPPushPolicy* arg)
		{
			((::System::Void(*)(::NPA::NXPPushPolicy*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_PUTGAMEPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnableAdPolicy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_SETENABLEADPOLICY_OFFSET))(arg, nullptr);
		}

		::System::Void SetEnableNightPolicy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_SETENABLENIGHTPOLICY_OFFSET))(arg, nullptr);
		}

		::NPA::NXPPushPolicy* GetAdPolicy()
		{
			return (return (::NPA::NXPPushPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_GETADPOLICY_OFFSET))(nullptr);
		}

		::NPA::NXPPushPolicy* GetNightPolicy()
		{
			return (return (::NPA::NXPPushPolicy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_GETNIGHTPOLICY_OFFSET))(nullptr);
		}

		::NPA::NXPPushPolicy* GetGamePolicy(::System::String* str)
		{
			return (return (::NPA::NXPPushPolicy*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_GETGAMEPOLICY_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetGamePolicyList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_GETGAMEPOLICYLIST_OFFSET))(nullptr);
		}

		::System::Boolean HasGamePolicies()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_HASGAMEPOLICIES_OFFSET))(nullptr);
		}

		::System::Void SetGamePolicyEnable(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_SETGAMEPOLICYENABLE_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPPUSHPOLICIES_TOSTRING_OFFSET))(nullptr);
		}

	};
}

