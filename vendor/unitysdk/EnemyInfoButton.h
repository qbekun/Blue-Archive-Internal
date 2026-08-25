#pragma once
#include "unitysdk.h"

class MXButton;
class FormationModel;

#define ENEMYINFOBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DCBA0)
#define ENEMYINFOBUTTON_ONCLICKENEMYINFO_OFFSET UNITYSDK_OFFSET(0x24DCBB0)
#define ENEMYINFOBUTTON_AWAKE_OFFSET UNITYSDK_OFFSET(0x24DD680)

	inline static constexpr unsigned int EnemyInfoButton_TypeDefinitionIndex = 5993;

	class EnemyInfoButton : public Il2CppObject
	{
	public:
		MXButton* Button; // 0x18
		FormationModel* formationModel; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEMYINFOBUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickEnemyInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEMYINFOBUTTON_ONCLICKENEMYINFO_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEMYINFOBUTTON_AWAKE_OFFSET))(nullptr);
		}

	};

