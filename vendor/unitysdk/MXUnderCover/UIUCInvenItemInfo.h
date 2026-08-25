#pragma once
#include "../unitysdk.h"

class UITexture;
class UILabel;
class UIScrollView;
namespace MXUnderCover { class UCItemModel; }

#define MXUNDERCOVER_UIUCINVENITEMINFO_SETITEM_OFFSET UNITYSDK_OFFSET(0xDC9350)
#define MXUNDERCOVER_UIUCINVENITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCA870)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIUCInvenItemInfo_TypeDefinitionIndex = 10040;

	class UIUCInvenItemInfo : public Il2CppObject
	{
	public:
		UITexture* iconTexture; // 0x18
		UILabel* nameLabel; // 0x20
		UILabel* remainValueLabel; // 0x28
		UILabel* cooltimeLabel; // 0x30
		UILabel* itemEffectLabel; // 0x38
		UIScrollView* ScrollView; // 0x40

		::System::Void SetItem(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMINFO_SETITEM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIUCINVENITEMINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

