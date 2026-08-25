#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace MX::Data { class EmblemInfo; }

#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_GETLABELCOLOR_OFFSET UNITYSDK_OFFSET(0x1982340)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1982390)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_SETINHERITEDWIDGETS_OFFSET UNITYSDK_OFFSET(0x19823A0)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_SETTITLELABELIMPL_OFFSET UNITYSDK_OFFSET(0x1982710)

namespace MX::Data::UIEmblem
{
	inline static constexpr unsigned int UIEmblemParcelDetailBoss_TypeDefinitionIndex = 16525;

	class UIEmblemParcelDetailBoss : public Il2CppObject
	{
	public:
		UILabel* BossNameLabel; // 0x50
		UILabel* BossYearLabel; // 0x58
		::UnityEngine::Color* BossNColor; // 0x60
		::UnityEngine::Color* BossRColor; // 0x70
		::UnityEngine::Color* BossSRColor; // 0x80
		::UnityEngine::Color* BossSSRColor; // 0x90
		::UnityEngine::Color* BossTitleColor; // 0xA0

		::UnityEngine::Color* GetLabelColor(::MX::Data::EmblemInfo* arg)
		{
			return (return (::UnityEngine::Color*(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_GETLABELCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetInheritedWidgets(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_SETINHERITEDWIDGETS_OFFSET))(arg, nullptr);
		}

		::System::Void SetTitleLabelImpl(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILBOSS_SETTITLELABELIMPL_OFFSET))(arg, nullptr);
		}

	};
}

