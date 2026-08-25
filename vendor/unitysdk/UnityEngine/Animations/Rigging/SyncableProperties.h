#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class RigProperties; }

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int SyncableProperties_TypeDefinitionIndex = 37159;

	class SyncableProperties : public Il2CppObject
	{
	public:
		::UnityEngine::Animations::Rigging::RigProperties* rig; // 0x10
		::Il2CppArray<::System::Object*>* constraints; // 0x18

	};
}

