#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define UIENEMYINFOADVANTAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x23F09F0)
#define UIENEMYINFOADVANTAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F11A0)

	inline static constexpr unsigned int UIEnemyInfoAdvantage_TypeDefinitionIndex = 5416;

	class UIEnemyInfoAdvantage : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* bulletTypesRoot; // 0x18
		::UnityEngine::Transform* armorTypesRoot; // 0x20
		::Il2CppArray<::System::Object*>* advantageRows; // 0x28
		::Il2CppArray<::System::Object*>* armorTypeList; // 0x30
		::Il2CppArray<::System::Object*>* bulletTypeList; // 0x38
		Il2CppObject* advantageLabel; // 0x40
		Il2CppObject* armorTypeLabels; // 0x48
		Il2CppObject* bulletTypeLabels; // 0x50

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOADVANTAGE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIENEMYINFOADVANTAGE_.CTOR_OFFSET))(nullptr);
		}

	};

