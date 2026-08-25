#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::TableBoard { class ITBGItemEffectDB; }

#define UITBGBUFFTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xB47040)
#define UITBGBUFFTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB475A0)

	inline static constexpr unsigned int UITBGBuffTooltip_TypeDefinitionIndex = 8358;

	class UITBGBuffTooltip : public ::UnityEngine::InputSystem::LowLevel::PenState
	{
	public:
		UILabel* nameLabel; // 0x48
		UILabel* descLabel; // 0x50
		UILabel* amountLabel; // 0x58

		::System::Void SetDataInternal(::MX::TableBoard::ITBGItemEffectDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::ITBGItemEffectDB*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGBUFFTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

	};

