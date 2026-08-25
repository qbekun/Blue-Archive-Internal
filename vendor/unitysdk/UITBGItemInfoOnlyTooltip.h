#pragma once
#include "unitysdk.h"

class UILabel;
namespace MX::Data { class ITBGItemInfo; }

#define UITBGITEMINFOONLYTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB56D20)
#define UITBGITEMINFOONLYTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xB56D60)

	inline static constexpr unsigned int UITBGItemInfoOnlyTooltip_TypeDefinitionIndex = 8391;

	class UITBGItemInfoOnlyTooltip : public ::UnityEngine::InputSystem::LowLevel::PointerState
	{
	public:
		UILabel* nameLabel; // 0x48
		UILabel* descLabel; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFOONLYTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDataInternal(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMINFOONLYTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

	};

