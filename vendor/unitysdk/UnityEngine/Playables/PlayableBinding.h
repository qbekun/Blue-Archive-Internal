#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableOutput; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace UnityEngine::Playables { class PlayableBinding; }

#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_STREAMNAME_OFFSET UNITYSDK_OFFSET(0xA269470)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0xA269480)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_OUTPUTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0xA269490)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUT_OFFSET UNITYSDK_OFFSET(0xA2694A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xA2695F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEBINDING_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA269690)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableBinding_TypeDefinitionIndex = 31610;

	class PlayableBinding : public Il2CppObject
	{
	public:
		::System::String* m_StreamName; // 0x10
		::UnityEngine::Object* m_SourceObject; // 0x18
		::System::Type* m_SourceBindingType; // 0x20
		CreateOutputMethod* m_CreateOutputMethod; // 0x28
		::Il2CppArray<::System::Object*>* None; // 0x0
		::System::Double DefaultDuration; // 0x8

		::System::String* get_streamName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_STREAMNAME_OFFSET))(nullptr);
		}

		::UnityEngine::Object* get_sourceObject()
		{
			return (return (::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_SOURCEOBJECT_OFFSET))(nullptr);
		}

		::System::Type* get_outputTargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_GET_OUTPUTTARGETTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::PlayableOutput* CreateOutput(::UnityEngine::Playables::PlayableGraph* arg)
		{
			return (return (::UnityEngine::Playables::PlayableOutput*(*)(::UnityEngine::Playables::PlayableGraph*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEOUTPUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableBinding* CreateInternal(::System::String* str, ::UnityEngine::Object* arg, ::System::Type* arg, CreateOutputMethod* arg)
		{
			return (return (::UnityEngine::Playables::PlayableBinding*(*)(::System::String*, ::UnityEngine::Object*, ::System::Type*, CreateOutputMethod*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_CREATEINTERNAL_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEBINDING_.CCTOR_OFFSET))(nullptr);
		}

	};
}

