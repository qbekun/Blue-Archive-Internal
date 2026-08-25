#pragma once
#include "unitysdk.h"

class UIPanel;
class UIGrid;
class UITimeAttack_GeasIcon;
class UITimeAttack_GeasTooltip;
namespace MX::Data { class TimeAttackDungeonGeasInfo; }

#define UITIMEATTACK_GEASGRID_CLOSETOOLTIP_OFFSET UNITYSDK_OFFSET(0xB5DDE0)
#define UITIMEATTACK_GEASGRID_CREATEICONS_OFFSET UNITYSDK_OFFSET(0xB6B710)
#define UITIMEATTACK_GEASGRID__RESETICONDEPTH_B__9_0_OFFSET UNITYSDK_OFFSET(0xB6B940)
#define UITIMEATTACK_GEASGRID_RESETICONDEPTH_OFFSET UNITYSDK_OFFSET(0xB5E3A0)
#define UITIMEATTACK_GEASGRID_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6B9F0)
#define UITIMEATTACK_GEASGRID_ISTOOLTIPACTIVE_OFFSET UNITYSDK_OFFSET(0xB5DD60)
#define UITIMEATTACK_GEASGRID_GET_BASEPANELDEPTH_OFFSET UNITYSDK_OFFSET(0xB6B990)
#define UITIMEATTACK_GEASGRID_SETGEASICONS_OFFSET UNITYSDK_OFFSET(0xB5E130)
#define UITIMEATTACK_GEASGRID_GET_GEASICONS_OFFSET UNITYSDK_OFFSET(0xB6B890)

	inline static constexpr unsigned int UITimeAttack_GeasGrid_TypeDefinitionIndex = 8450;

	class UITimeAttack_GeasGrid : public Il2CppObject
	{
	public:
		UIPanel* basePanel; // 0x18
		UIGrid* geasGrid; // 0x20
		Il2CppObject* geasIcons; // 0x28
		UITimeAttack_GeasIcon* geasIconPref; // 0x30
		UITimeAttack_GeasTooltip* tooltip; // 0x38

		::System::Void CloseTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_CLOSETOOLTIP_OFFSET))(nullptr);
		}

		::System::Void CreateIcons(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_CREATEICONS_OFFSET))(arg, nullptr);
		}

		::System::Void _ResetIconDepth_b__9_0(UITimeAttack_GeasIcon* arg)
		{
			((::System::Void(*)(UITimeAttack_GeasIcon*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID__RESETICONDEPTH_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void ResetIconDepth()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_RESETICONDEPTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsTooltipActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_ISTOOLTIPACTIVE_OFFSET))(nullptr);
		}

		::System::Int32 get_BasePanelDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_GET_BASEPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Void SetGeasIcons(::MX::Data::TimeAttackDungeonGeasInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_SETGEASICONS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GeasIcons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASGRID_GET_GEASICONS_OFFSET))(nullptr);
		}

	};

