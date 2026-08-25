#pragma once
#include "unitysdk.h"

namespace UnityEngine::Animations::Rigging { class RigBuilder; }

#define ONADDRIGBUILDERCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E26A20)
#define ONADDRIGBUILDERCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9E26B30)

	inline static constexpr unsigned int OnAddRigBuilderCallback_TypeDefinitionIndex = 37172;

	class OnAddRigBuilderCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONADDRIGBUILDERCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::Animations::Rigging::RigBuilder* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::RigBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + ONADDRIGBUILDERCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};

