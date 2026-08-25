#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
class UIGrid;
class UILabel;
class MXButton;
class UIPanel;
class UITimeAttack_GeasGrid;
namespace MX::Data { class TimeAttackDungeonGeasUIInfo; }

#define UITIMEATTACK_GEASTOOLTIP_SETDATA_OFFSET UNITYSDK_OFFSET(0xB6BB70)
#define UITIMEATTACK_GEASTOOLTIP_GET_PANELDEPTH_OFFSET UNITYSDK_OFFSET(0xB6BD50)
#define UITIMEATTACK_GEASTOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6BFD0)
#define UITIMEATTACK_GEASTOOLTIP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB6C0F0)
#define UITIMEATTACK_GEASTOOLTIP_GET_GEASGRID_OFFSET UNITYSDK_OFFSET(0xB6C110)
#define UITIMEATTACK_GEASTOOLTIP_GET_THISPANEL_OFFSET UNITYSDK_OFFSET(0xB6BF40)
#define UITIMEATTACK_GEASTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6C1B0)

	inline static constexpr unsigned int UITimeAttack_GeasTooltip_TypeDefinitionIndex = 8452;

	class UITimeAttack_GeasTooltip : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* arrowTransform; // 0x18
		UIGrid* geasGrid; // 0x20
		UILabel* geasName; // 0x28
		UILabel* geasDesc; // 0x30
		MXButton* close; // 0x38
		UIPanel* _ThisPanel; // 0x40
		UITimeAttack_GeasGrid* _GeasGrid; // 0x48

		::System::Void SetData(::MX::Data::TimeAttackDungeonGeasUIInfo* arg, ::UnityEngine::Transform* arg2)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasUIInfo*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASTOOLTIP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_PanelDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASTOOLTIP_GET_PANELDEPTH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASTOOLTIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASTOOLTIP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		UITimeAttack_GeasGrid* get_GeasGrid()
		{
			return ((UITimeAttack_GeasGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASTOOLTIP_GET_GEASGRID_OFFSET))(nullptr);
		}

		UIPanel* get_ThisPanel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASTOOLTIP_GET_THISPANEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

	};

