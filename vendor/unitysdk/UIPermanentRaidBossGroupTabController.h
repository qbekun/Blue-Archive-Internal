#pragma once
#include "unitysdk.h"

class UIGrid;
namespace FlatData { class StageTopography; }

#define UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D5A20)
#define UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_FINDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x26D5A60)
#define UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_SETRAIDBOSSGROUP_OFFSET UNITYSDK_OFFSET(0x26D5C50)
#define UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_GET_ALLOWNONESELECT_OFFSET UNITYSDK_OFFSET(0x26D6190)

	inline static constexpr unsigned int UIPermanentRaidBossGroupTabController_TypeDefinitionIndex = 7028;

	class UIPermanentRaidBossGroupTabController : public ::MS::Internal::Xml::XPath::AttributeQuery
	{
	public:
		UIGrid* grid; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* FindStageTopography(::System::String* str)
		{
			return ((::FlatData::StageTopography*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_FINDSTAGETOPOGRAPHY_OFFSET))(str, nullptr);
		}

		::System::Void SetRaidBossGroup(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_SETRAIDBOSSGROUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_AllowNoneSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDBOSSGROUPTABCONTROLLER_GET_ALLOWNONESELECT_OFFSET))(nullptr);
		}

	};

