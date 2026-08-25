#pragma once
#include "../../../unitysdk.h"

namespace MXField::Directing { class FieldPlayerLocation; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xECD4E0)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xECD510)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0xECD620)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_SETPLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0xECD630)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xECD6B0)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xECD6C0)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_GET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0xECD6D0)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_SET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0xECD6E0)
#define MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xECD580)

namespace MXField::Directing::Transition
{
	inline static constexpr unsigned int FadeTransition_TypeDefinitionIndex = 10917;

	class FadeTransition : public Il2CppObject
	{
	public:
		::System::Single fadeDuration; // 0x10
		::System::Boolean _Block_k__BackingField; // 0x14
		::MXField::Directing::FieldPlayerLocation* _PlayerLocation_k__BackingField; // 0x18

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Void Execute(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_EXECUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_Block(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void SetPlayerLocation(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_SETPLAYERLOCATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::MXField::Directing::FieldPlayerLocation* get_PlayerLocation()
		{
			return ((::MXField::Directing::FieldPlayerLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_GET_PLAYERLOCATION_OFFSET))(nullptr);
		}

		::System::Void set_PlayerLocation(::MXField::Directing::FieldPlayerLocation* arg)
		{
			((::System::Void(*)(::MXField::Directing::FieldPlayerLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_SET_PLAYERLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExecute(::System::Action* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_FADETRANSITION_COEXECUTE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

