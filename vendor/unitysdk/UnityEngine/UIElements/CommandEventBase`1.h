#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Event; }

#define UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_GET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_SET_COMMANDNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_LOCALINIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_GETPOOLED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CommandEventBase`1_TypeDefinitionIndex = 30453;

	class CommandEventBase`1 : public <>c__DisplayClass73_0
	{
	public:
		::System::String* m_CommandName; // 0x0

		::System::String* get_commandName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_GET_COMMANDNAME_OFFSET))(nullptr);
		}

		::System::Void set_commandName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_SET_COMMANDNAME_OFFSET))(str, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_INIT_OFFSET))(nullptr);
		}

		::System::Void LocalInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_LOCALINIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetPooled(::UnityEngine::Event* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_GETPOOLED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPooled(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_GETPOOLED_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTBASE`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

