#pragma once
#include "../unitysdk.h"

class UILabel;
class UIScrollView;

#define MXUNDERCOVER_UIPOPUP_UNDERCOVERCOMMON_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCCC00)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERCOMMON_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDC5CC0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIPopup_UndercoverCommon_TypeDefinitionIndex = 10048;

	class UIPopup_UndercoverCommon : public Il2CppObject
	{
	public:
		UILabel* TitleLabel; // 0xD8
		UILabel* DescriptionLabel; // 0xE0
		UIScrollView* ScrollView; // 0xE8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERCOMMON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERCOMMON_INITIALIZE_OFFSET))(str, str2, nullptr);
		}

	};
}

