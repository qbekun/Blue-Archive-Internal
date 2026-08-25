#pragma once
#include "unitysdk.h"

class UIFormationSkillInfo;
class MXButton;
namespace FlatData { class EchelonType; }

#define FORMATIONINFO_CLOSE_OFFSET UNITYSDK_OFFSET(0x2294ED0)
#define FORMATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2294FD0)
#define FORMATIONINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2294FE0)
#define FORMATIONINFO_INITFORMATION_OFFSET UNITYSDK_OFFSET(0x22951E0)

	inline static constexpr unsigned int FormationInfo_TypeDefinitionIndex = 4715;

	class FormationInfo : public Il2CppObject
	{
	public:
		UIFormationSkillInfo* UIFormationSkillInfo; // 0x18
		MXButton* ButtonX; // 0x20
		MXButton* ButtonOk; // 0x28

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONINFO_CLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void InitFormation(::FlatData::EchelonType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONINFO_INITFORMATION_OFFSET))(arg, arg2, nullptr);
		}

	};

