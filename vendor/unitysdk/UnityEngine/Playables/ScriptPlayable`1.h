#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class IPlayableBehaviour; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class Playable; }

#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_GET_NULL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATEHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATESCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CLONESCRIPTINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CLONESCRIPTINSTANCEFROMENGINEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CLONESCRIPTINSTANCEFROMICLONABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_GETHANDLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_GETBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int ScriptPlayable`1_TypeDefinitionIndex = 31620;

	class ScriptPlayable`1 : public Il2CppObject
	{
	public:
		::UnityEngine::Playables::PlayableHandle* m_Handle; // 0x0
		Il2CppObject* m_NullPlayable; // 0x0

		Il2CppObject* get_Null()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_GET_NULL_OFFSET))(nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Create(::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* CreateHandle(::UnityEngine::Playables::PlayableGraph* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::UnityEngine::Playables::PlayableGraph*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATEHANDLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* CreateScriptInstance()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CREATESCRIPTINSTANCE_OFFSET))(nullptr);
		}

		::System::Object* CloneScriptInstance(::UnityEngine::Playables::IPlayableBehaviour* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::Playables::IPlayableBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CLONESCRIPTINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Object* CloneScriptInstanceFromEngineObject(::UnityEngine::Object* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CLONESCRIPTINSTANCEFROMENGINEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Object* CloneScriptInstanceFromIClonable(::System::ICloneable* arg)
		{
			return (return (::System::Object*(*)(::System::ICloneable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_CLONESCRIPTINSTANCEFROMICLONABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Playables::PlayableHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetHandle()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_GETHANDLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBehaviour()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_GETBEHAVIOUR_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* op_Implicit(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Explicit(::UnityEngine::Playables::Playable* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Playables::Playable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_SCRIPTPLAYABLE`1_.CCTOR_OFFSET))(nullptr);
		}

	};
}

