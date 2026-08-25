#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA24D110)

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoopSystem_TypeDefinitionIndex = 31320;

	class PlayerLoopSystem : public Il2CppObject
	{
	public:
		::System::Type* type; // 0x10
		::Il2CppArray<::System::Object*>* subSystemList; // 0x18
		UpdateFunction* updateDelegate; // 0x20
		::System::Int32 updateFunction; // 0x28
		::System::Int32 loopConditionFunction; // 0x30

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_TOSTRING_OFFSET))(nullptr);
		}

	};
}

