#pragma once
#include "unitysdk.h"

namespace UnityEngine::Animations::Rigging { class RigBuilder; }

#define ONREMOVERIGBUILDERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E26B40)
#define ONREMOVERIGBUILDERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E26B50)

	inline static constexpr unsigned int OnRemoveRigBuilderCallback_TypeDefinitionIndex = 37173;

	class OnRemoveRigBuilderCallback : public Il2CppObject
	{
	public:
		::System::Void Invoke(::UnityEngine::Animations::Rigging::RigBuilder* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::RigBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + ONREMOVERIGBUILDERCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONREMOVERIGBUILDERCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

