#pragma once
#include "unitysdk.h"

class MXButton;
class UIPanel;
class UITexture;
class UITimeAttack_GeasTooltip;
namespace MX::Data { class TimeAttackDungeonGeasUIInfo; }

#define UITIMEATTACK_GEASICON_SETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0xB6B9B0)
#define UITIMEATTACK_GEASICON_ONCLICKSHOWTOOLTIP_OFFSET UNITYSDK_OFFSET(0xB6BAB0)
#define UITIMEATTACK_GEASICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB6BDF0)
#define UITIMEATTACK_GEASICON_SETDATA_OFFSET UNITYSDK_OFFSET(0xB6BA00)
#define UITIMEATTACK_GEASICON_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6BE10)
#define UITIMEATTACK_GEASICON_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6BF30)

	inline static constexpr unsigned int UITimeAttack_GeasIcon_TypeDefinitionIndex = 8451;

	class UITimeAttack_GeasIcon : public Il2CppObject
	{
	public:
		MXButton* button; // 0x18
		UIPanel* iconPanel; // 0x20
		UITexture* iconTexture; // 0x28
		UITimeAttack_GeasTooltip* tooltip; // 0x30
		::MX::Data::TimeAttackDungeonGeasUIInfo* _UIInfo; // 0x38

		::System::Void SetPanelDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASICON_SETPANELDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickShowTooltip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASICON_ONCLICKSHOWTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASICON_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::TimeAttackDungeonGeasUIInfo* arg)
		{
			((::System::Void(*)(::MX::Data::TimeAttackDungeonGeasUIInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASICON_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASICON_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITIMEATTACK_GEASICON_.CTOR_OFFSET))(nullptr);
		}

	};

