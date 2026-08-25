#pragma once
#include "unitysdk.h"

#define LOADSKILLVISUALDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F83F0)

	inline static constexpr unsigned int LoadSkillVisualData_TypeDefinitionIndex = 3836;

	class LoadSkillVisualData : public Il2CppObject
	{
	public:
		::System::String* DataKey; // 0x10
		::System::String* VisualKey; // 0x18
		::System::Int32 SkillLevel; // 0x20
		::System::Int32 WeaponStarGrade; // 0x24
		::System::Int32 GearTier; // 0x28
		::System::Boolean NeedLoadSkillGuide; // 0x2C

		::System::Void .ctor(::System::String* str, ::System::String* str2, ::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LOADSKILLVISUALDATA_.CTOR_OFFSET))(str, str2, arg, arg2, arg3, arg4, nullptr);
		}

	};

