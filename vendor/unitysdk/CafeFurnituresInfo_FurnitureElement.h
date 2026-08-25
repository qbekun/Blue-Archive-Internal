#pragma once
#include "unitysdk.h"

class UILabel;
class FurnitureObject;

#define CAFEFURNITURESINFO_FURNITUREELEMENT_GET_SETCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x225F0B0)
#define CAFEFURNITURESINFO_FURNITUREELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x225F160)
#define CAFEFURNITURESINFO_FURNITUREELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x225F1A0)
#define CAFEFURNITURESINFO_FURNITUREELEMENT_GET_COMFORTLABEL_OFFSET UNITYSDK_OFFSET(0x225F340)
#define CAFEFURNITURESINFO_FURNITUREELEMENT_GET_NAMELABEL_OFFSET UNITYSDK_OFFSET(0x225F290)

	inline static constexpr unsigned int CafeFurnituresInfo_FurnitureElement_TypeDefinitionIndex = 4564;

	class CafeFurnituresInfo_FurnitureElement : public ::System::Xml::XPath::IXPathNavigable
	{
	public:
		UILabel* nameLabel; // 0x28
		UILabel* setCountLabel; // 0x30
		UILabel* comfortLabel; // 0x38

		UILabel* get_SetCountLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITUREELEMENT_GET_SETCOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITUREELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(FurnitureObject* arg)
		{
			((::System::Void(*)(FurnitureObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITUREELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		UILabel* get_ComfortLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITUREELEMENT_GET_COMFORTLABEL_OFFSET))(nullptr);
		}

		UILabel* get_NameLabel()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEFURNITURESINFO_FURNITUREELEMENT_GET_NAMELABEL_OFFSET))(nullptr);
		}

	};

