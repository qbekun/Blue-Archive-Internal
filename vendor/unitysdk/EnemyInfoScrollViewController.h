#pragma once
#include "unitysdk.h"

#define ENEMYINFOSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F09B0)

	inline static constexpr unsigned int EnemyInfoScrollViewController_TypeDefinitionIndex = 5414;

	class EnemyInfoScrollViewController : public ItemType
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEMYINFOSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

