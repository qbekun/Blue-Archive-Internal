#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class BaseRuntimePanel; }
namespace UnityEngine { class ScriptableObject; }

#define CREATERUNTIMEPANELDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA381D90)
#define CREATERUNTIMEPANELDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA381EA0)

	inline static constexpr unsigned int CreateRuntimePanelDelegate_TypeDefinitionIndex = 30218;

	class CreateRuntimePanelDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATERUNTIMEPANELDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::BaseRuntimePanel* Invoke(::UnityEngine::ScriptableObject* arg)
		{
			return (return (::UnityEngine::UIElements::BaseRuntimePanel*(*)(::UnityEngine::ScriptableObject*, ::PVOID))((::PBYTE)hIl2Cpp + CREATERUNTIMEPANELDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

