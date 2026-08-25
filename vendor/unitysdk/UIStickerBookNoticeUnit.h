#pragma once
#include "unitysdk.h"

class UILabel;

#define UISTICKERBOOKNOTICEUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xB363D0)
#define UISTICKERBOOKNOTICEUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB36570)

	inline static constexpr unsigned int UIStickerBookNoticeUnit_TypeDefinitionIndex = 8311;

	class UIStickerBookNoticeUnit : public ::System::Xml::XmlCharType
	{
	public:
		UILabel* Label; // 0x28

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKNOTICEUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTICKERBOOKNOTICEUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

