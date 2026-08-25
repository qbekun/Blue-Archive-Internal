#pragma once
#include "unitysdk.h"

class UINonEquipmentCard;
class UILabel;
namespace UnityEngine { class GameObject; }
class CafeTemplateElementInfo;

#define CAFETEMPLATEELEMENTUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2267800)
#define CAFETEMPLATEELEMENTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x22678B0)
#define CAFETEMPLATEELEMENTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2267BF0)

	inline static constexpr unsigned int CafeTemplateElementUnit_TypeDefinitionIndex = 4598;

	class CafeTemplateElementUnit : public Il2CppObject
	{
	public:
		UINonEquipmentCard* card; // 0x18
		UILabel* countLabel; // 0x20
		::UnityEngine::GameObject* interactionAble; // 0x28
		::UnityEngine::GameObject* interactionDisable; // 0x30

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(CafeTemplateElementInfo* arg)
		{
			((::System::Void(*)(CafeTemplateElementInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

