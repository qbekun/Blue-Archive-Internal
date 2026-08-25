#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace MX::Data { class EmblemInfo; }

#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILFAVOR_SETTITLELABELIMPL_OFFSET UNITYSDK_OFFSET(0x1982A20)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILFAVOR_GETFXWIDGET_OFFSET UNITYSDK_OFFSET(0x1982B10)
#define MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILFAVOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1982B20)

namespace MX::Data::UIEmblem
{
	inline static constexpr unsigned int UIEmblemParcelDetailFavor_TypeDefinitionIndex = 16526;

	class UIEmblemParcelDetailFavor : public Il2CppObject
	{
	public:
		::UnityEngine::Color* favorColorRank20; // 0x50
		::UnityEngine::Color* favorColorRank50; // 0x60
		::UnityEngine::Color* favorColorRank100; // 0x70
		::UnityEngine::Color* potentialFontColor25; // 0x80
		::UnityEngine::Color* potentialFontColor50; // 0x90

		::System::Void SetTitleLabelImpl(::MX::Data::EmblemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EmblemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILFAVOR_SETTITLELABELIMPL_OFFSET))(arg, nullptr);
		}

		UIWidget* GetFXWidget()
		{
			return (return (UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILFAVOR_GETFXWIDGET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UIEMBLEM_UIEMBLEMPARCELDETAILFAVOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

