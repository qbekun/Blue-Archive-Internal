#pragma once
#include "../unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int HumanDescription_TypeDefinitionIndex = 36476;

	class HumanDescription : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* human; // 0x10
		::Il2CppArray<::System::Object*>* skeleton; // 0x18
		::System::Single m_ArmTwist; // 0x20
		::System::Single m_ForeArmTwist; // 0x24
		::System::Single m_UpperLegTwist; // 0x28
		::System::Single m_LegTwist; // 0x2C
		::System::Single m_ArmStretch; // 0x30
		::System::Single m_LegStretch; // 0x34
		::System::Single m_FeetSpacing; // 0x38
		::System::Single m_GlobalScale; // 0x3C
		::System::String* m_RootMotionBoneName; // 0x40
		::System::Boolean m_HasTranslationDoF; // 0x48
		::System::Boolean m_HasExtraRoot; // 0x49
		::System::Boolean m_SkeletonHasParents; // 0x4A

	};
}

