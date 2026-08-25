#pragma once
#include "unitysdk.h"

class UISkillCard;
class UILabel;
class CharacterObject;

#define SKILLCARDSLOTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x256D720)
#define SKILLCARDSLOTINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x256D730)

	inline static constexpr unsigned int SkillCardSlotInfo_TypeDefinitionIndex = 6148;

	class SkillCardSlotInfo : public Il2CppObject
	{
	public:
		UISkillCard* SkillCard; // 0x18
		UILabel* Count; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSLOTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterObject* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(CharacterObject*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SKILLCARDSLOTINFO_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

