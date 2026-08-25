#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Coroutine; }

#define MXFIELD_ACTIONS_FIELDACTION_SET_ACCEPTPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xEEBDB0)
#define MXFIELD_ACTIONS_FIELDACTION_DOACTIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xEEBDC0)
#define MXFIELD_ACTIONS_FIELDACTION_SETPLAYERINPUTACCEPT_OFFSET UNITYSDK_OFFSET(0xEEBE50)
#define MXFIELD_ACTIONS_FIELDACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE80C0)
#define MXFIELD_ACTIONS_FIELDACTION_GET_ACCEPTPLAYERINPUT_OFFSET UNITYSDK_OFFSET(0xEEBE60)
#define MXFIELD_ACTIONS_FIELDACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEE9040)
#define MXFIELD_ACTIONS_FIELDACTION_GET_ENDDELAY_OFFSET UNITYSDK_OFFSET(0xEEBF20)
#define MXFIELD_ACTIONS_FIELDACTION_SET_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEEBF30)
#define MXFIELD_ACTIONS_FIELDACTION_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xEEBF40)
#define MXFIELD_ACTIONS_FIELDACTION_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xEEBF50)
#define MXFIELD_ACTIONS_FIELDACTION_GET_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0xEEBF60)
#define MXFIELD_ACTIONS_FIELDACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE8080)
#define MXFIELD_ACTIONS_FIELDACTION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEEBF70)
#define MXFIELD_ACTIONS_FIELDACTION_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0xEEBF80)
#define MXFIELD_ACTIONS_FIELDACTION_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xEEBF90)
#define MXFIELD_ACTIONS_FIELDACTION_PLAYACTION_OFFSET UNITYSDK_OFFSET(0xEE8970)
#define MXFIELD_ACTIONS_FIELDACTION_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xEE9930)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldAction_TypeDefinitionIndex = 11054;

	class FieldAction : public Il2CppObject
	{
	public:
		::System::Single endDelay; // 0x10
		::System::Single startDelay; // 0x14
		::UnityEngine::Coroutine* coroutine; // 0x18
		::System::Boolean _IsPlaying_k__BackingField; // 0x20
		::System::Boolean _IsDisposed_k__BackingField; // 0x21
		::System::Boolean _AcceptPlayerInput_k__BackingField; // 0x22
		::System::Action* _OnComplete_k__BackingField; // 0x28

		::System::Void set_AcceptPlayerInput(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_SET_ACCEPTPLAYERINPUT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* DoActionInternal()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_DOACTIONINTERNAL_OFFSET))(nullptr);
		}

		::System::Void SetPlayerInputAccept(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_SETPLAYERINPUTACCEPT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_AcceptPlayerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_GET_ACCEPTPLAYERINPUT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_DISPOSE_OFFSET))(nullptr);
		}

		::System::Single get_EndDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_GET_ENDDELAY_OFFSET))(nullptr);
		}

		::System::Void set_OnComplete(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_SET_ONCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsDisposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_SET_ISDISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_GET_ISDISPOSED_OFFSET))(nullptr);
		}

		::System::Action* get_OnComplete()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_GET_ONCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Single get_StartDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_GET_STARTDELAY_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void PlayAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_PLAYACTION_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDACTION_ONFINISHED_OFFSET))(nullptr);
		}

	};
}

