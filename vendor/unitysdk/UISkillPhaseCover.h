#pragma once
#include "unitysdk.h"

class UIWidget;
class UILabel;
namespace UnityEngine { class GameObject; }

#define UISKILLPHASECOVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2324DD0)
#define UISKILLPHASECOVER_SETCOVERWIDTH_OFFSET UNITYSDK_OFFSET(0x2324DE0)
#define UISKILLPHASECOVER_SETEMPTYPHASE_OFFSET UNITYSDK_OFFSET(0x2324E60)
#define UISKILLPHASECOVER_SETPHASENAME_OFFSET UNITYSDK_OFFSET(0x2324E80)

	inline static constexpr unsigned int UISkillPhaseCover_TypeDefinitionIndex = 4920;

	class UISkillPhaseCover : public Il2CppObject
	{
	public:
		UIWidget* widthOfCoveringSlots; // 0x18
		UILabel* labelSkillType; // 0x20
		::UnityEngine::GameObject* enableOnDataFilled; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLPHASECOVER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCoverWidth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLPHASECOVER_SETCOVERWIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmptyPhase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISKILLPHASECOVER_SETEMPTYPHASE_OFFSET))(nullptr);
		}

		::System::Void SetPhaseName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISKILLPHASECOVER_SETPHASENAME_OFFSET))(str, nullptr);
		}

	};

