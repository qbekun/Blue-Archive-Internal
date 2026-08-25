#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace FlatData { class EchelonType; }

#define UIFORMATIONSKILLINFO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2545AF0)
#define UIFORMATIONSKILLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2545B00)

	inline static constexpr unsigned int UIFormationSkillInfo_TypeDefinitionIndex = 6071;

	class UIFormationSkillInfo : public Il2CppObject
	{
	public:
		UITexture* FormationIcon; // 0x18
		UILabel* FormationNameLabel; // 0x20
		UILabel* FrontSkillDesc; // 0x28
		UILabel* BackSkillDesc; // 0x30

		::System::Void Initialize(::FlatData::EchelonType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSKILLINFO_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONSKILLINFO_.CTOR_OFFSET))(nullptr);
		}

	};

