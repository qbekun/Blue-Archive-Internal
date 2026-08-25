#pragma once
#include "../../unitysdk.h"

namespace MXField::Directing { class FieldInterplayBehavior; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_INTERPLAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xEED170)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_SET_INTERPLAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xEED180)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_STARTLOCATION_OFFSET UNITYSDK_OFFSET(0xEED190)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_ENDLOCATION_OFFSET UNITYSDK_OFFSET(0xEED1B0)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_STARTDIRECTOR_OFFSET UNITYSDK_OFFSET(0xEED1D0)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_INGDIRECTOR_OFFSET UNITYSDK_OFFSET(0xEED1F0)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_ENDDIRECTOR_OFFSET UNITYSDK_OFFSET(0xEED210)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEED230)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEED250)
#define MXFIELD_ACTIONS_FIELDINTERPLAYACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEED2A0)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldInterplayAction_TypeDefinitionIndex = 11064;

	class FieldInterplayAction : public Il2CppObject
	{
	public:
		::System::Int64 interplayId; // 0x30
		::MXField::Directing::FieldInterplayBehavior* _InterplayBehavior_k__BackingField; // 0x38

		::MXField::Directing::FieldInterplayBehavior* get_InterplayBehavior()
		{
			return ((::MXField::Directing::FieldInterplayBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_INTERPLAYBEHAVIOR_OFFSET))(nullptr);
		}

		::System::Void set_InterplayBehavior(::MXField::Directing::FieldInterplayBehavior* arg)
		{
			((::System::Void(*)(::MXField::Directing::FieldInterplayBehavior*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_SET_INTERPLAYBEHAVIOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_StartLocation()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_STARTLOCATION_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_EndLocation()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_ENDLOCATION_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_StartDirector()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_STARTDIRECTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_IngDirector()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_INGDIRECTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableDirector* get_EndDirector()
		{
			return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_GET_ENDDIRECTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDINTERPLAYACTION_EXECUTE_OFFSET))(nullptr);
		}

	};
}

