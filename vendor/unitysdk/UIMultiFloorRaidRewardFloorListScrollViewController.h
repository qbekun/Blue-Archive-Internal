#pragma once
#include "unitysdk.h"

class MultiFloorRaidSectionEntity;

#define UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26A4D70)
#define UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x26A4DB0)

	inline static constexpr unsigned int UIMultiFloorRaidRewardFloorListScrollViewController_TypeDefinitionIndex = 6853;

	class UIMultiFloorRaidRewardFloorListScrollViewController : public ::System::Xml::XmlDeclaration
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(MultiFloorRaidSectionEntity* arg)
		{
			((::System::Void(*)(MultiFloorRaidSectionEntity*, ::PVOID))((::PBYTE)hIl2Cpp + UIMULTIFLOORRAIDREWARDFLOORLISTSCROLLVIEWCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

