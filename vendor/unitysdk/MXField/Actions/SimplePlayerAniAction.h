#pragma once
#include "../../unitysdk.h"

class Type;

#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GET_ANITYPE_OFFSET UNITYSDK_OFFSET(0xEF53D0)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_SET_ANITYPE_OFFSET UNITYSDK_OFFSET(0xEF53E0)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GET_DELAY_OFFSET UNITYSDK_OFFSET(0xEF53F0)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_SET_DELAY_OFFSET UNITYSDK_OFFSET(0xEF5400)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GET_COEXECUTEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEF5410)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_SET_COEXECUTEENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEF5420)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF5430)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEE9F0)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GETANIMATIONKEYWORD_OFFSET UNITYSDK_OFFSET(0xEF5490)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GETLOOPTIME_OFFSET UNITYSDK_OFFSET(0xEF54A0)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_ISLOOPANIACTION_OFFSET UNITYSDK_OFFSET(0xEF54B0)
#define MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF54F0)

namespace MXField::Actions
{
	inline static constexpr unsigned int SimplePlayerAniAction_TypeDefinitionIndex = 11125;

	class SimplePlayerAniAction : public Il2CppObject
	{
	public:
		::System::String* _aniKeyword; // 0x40
		::System::Boolean _isLoopAni; // 0x48
		::System::Single _loopTime; // 0x4C
		Type* _AniType_k__BackingField; // 0x50
		::System::Single _Delay_k__BackingField; // 0x54
		::System::Action* _CoExecuteEndCallback_k__BackingField; // 0x58

		Type* get_AniType()
		{
			return ((Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GET_ANITYPE_OFFSET))(nullptr);
		}

		::System::Void set_AniType(Type* arg)
		{
			((::System::Void(*)(Type*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_SET_ANITYPE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Void set_Delay(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_SET_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Action* get_CoExecuteEndCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GET_COEXECUTEENDCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_CoExecuteEndCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_SET_COEXECUTEENDCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Type* arg)
		{
			((::System::Void(*)(Type*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetAnimationKeyword()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GETANIMATIONKEYWORD_OFFSET))(nullptr);
		}

		::System::Single GetLoopTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_GETLOOPTIME_OFFSET))(nullptr);
		}

		::System::Boolean IsLoopAniAction(::System::Action* arg)
		{
			return ((::System::Boolean(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_ISLOOPANIACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_SIMPLEPLAYERANIACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};
}

